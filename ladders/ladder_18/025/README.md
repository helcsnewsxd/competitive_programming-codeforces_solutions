# Knight Tournament

In this [problem](https://codeforces.com/problemset/problem/356/A), I've think it as following:

- I've intervals with a number assigned to it
- The intervals have a specific order/priority
- All the values into an interval have the number assigned for the interval with most priority (the first one)
- In every line of the input, I've two intervals: $[l, x)$ and $(x, r]$

Therefore, to solve it, I can think that I've a list of sets that I want to merge.
The sets are of two classes: add or erase.
For every range of the input, tell it $[a, b)$ with assigned value $x$, I add the value $x$ to add set of $a$ and I add $x$ to erase set of $b$.
Then, I iterate over all the knights and first add all the values of add set, and second erase all the values of erase set.
With that, the first value that remains (and have the lowest number of fight id) is the solution for the $i$-th knight.

The complexity of this solution is $O(n\log(m))$.

The code can be found [here](./solution.cpp).
