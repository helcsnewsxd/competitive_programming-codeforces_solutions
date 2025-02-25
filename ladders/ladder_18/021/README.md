# Writing Code

In this [problem](https://codeforces.com/contest/543/problem/A), I can notice that the solution is using DP.
The first thing that I did is thinking about a simple DP (that didn't work but to begin).
In that context, the DP is $dp\[i\]\[cm\]\[cb\]$ and represents the quantity of good plans module MOD using only the first $i$ programmers, with $cm$ lines written and with $cb$ bugs in total.
Then, the transitions are very simple:

$$
dp\[i\]\[cm\]\[cb\] = dp\[i-1\]\[cm-k\]\[cb-k\cdot a\[i-1\]\] \text{ with } 0\leq k \text{such that} cm-k, cb-k\cdot a\[i-1\]\geq 0
$$

With this in mind, the first thing to notice is that the DP will have MLE because it's $O(n^3)\sim 10^8$.
Therefore, the next step is doing it iteratively and beginning with the programmer list.
Since we use the programmer list only to iterate for them and isn't important to know the results for specific programmer (only the last), I erase the index parameter.
Therefore, having only a `for` for the indexes, the size complexity is $O(n^2)$.

Now, the other thing to fix is the time complexity because it's $O(n^4)$ for the index, the $2$ parameters and the transitions with $k$.
The idea to solve it, iterating in ascending order for $cm$ and $cb$, is that $dp\[cm\]\[cb\]$ has to be added to $dp\[cm+1\]\[cb+a\[i\]\]$ representing that I add one line more for the $i$-th programmer.
Isn't necessary iterate for all the possible values of $k$ because, then, when the algorithm reaches the values $cm+1,cb+a\[i\]$, this will be added to $dp\[cm+2]\[cb+2\cdot a\[i\]\]$.
Finally, the time complexity is $O(n^3)$ and it's OK.

The code can be found [here](./solution.cpp).
