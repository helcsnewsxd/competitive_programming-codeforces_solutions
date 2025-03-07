# Xenia and Bit Operations

In this [problem](https://codeforces.com/contest/339/problem/D), my idea is simulate the process of the calculus of $v$.
But the question is: How can I do that efficiently?
If I do a brute simulation, the time complexity is high: $O(m\times (2^{n-1}+2^{n-2}+\dots+2^0))\sim O(m\times 2^n)$ and this is, for maximum values, approximately $O(10^5\times 10^5)\sim O(10^{10})$.

Now, if I want to do the simulation intelligently, then the idea is to answer the questions offline.
This method allows us to calculate all the values from different times together.
This is very important because one important thing to notice is that one query means only a change of level $n$ (i.e., very few operations) and the others results in the process are the same.

Knowing it, the key of my solution is simulate all the process but only one time.
Imagine that we've the same array $a$ but now with all the changes, i.e., the array is an array of arrays and each position has a set of pairs with the time of the query and the value of the new element.
Now, we've $O(2^n)\sim O(10^5)$ operations.
The real key of this idea is how I do the operations.
Notice that, if we've two arrays $a,b$ of times of the values:

- If we've $at_1\lt at_2\lt bt_1$, then $at_2$ and $bt_1$ must to be calculated together and $at_1$, $bt_1$ not
- If we've $at_1\lt bt_1\lt at_2\lt bt_2$ and we're seeing $at_1, bt_1$, for the next calculations $at_1$ isn't important because isn't used
- If we've $at_1\lt bt_1\lt bt_2\lt at_2$ the idea is the same and $bt_1$ isn't used for next calculations

Then, I can notice that the values that come together are the closest (for each $at_x$ the closest two of $bt$ and the same for $bt$ values).
If I can have this values sorted, the method to do this in $O(size(a)+size(b))$ is two pointers.

With this in mind, I know that the creation of each array in the process means me a $O(m)$ time complexity.
Since there are only $n$ array steps, then the total time complexity is $O(n\times m)$ and it's maximum is $O(17\times 10^5)$ and this works very well.

To be more confident with the solution, I did a [generator](./gen.py) of big cases to see the time performance.

The code can be found [here](./solution.cpp).
