# Caisa and Pylons

In this [problem](https://codeforces.com/problemset/problem/463/B), the solution is calculate the answer using binary search because if I can solve it using $X$ dollars, then I be able to solve it using $X+1$.
Now, other thing to notice is that isn't important if I distribute the added heights or if I put all in the first column (of size $0$).
Therefore, the checker is very easy to do.

Since $n\leq 10^5$ and the maximum value is $m\leq 10^5$, then the complexity is $O(n \log(m))=O(n \log(n))$.
