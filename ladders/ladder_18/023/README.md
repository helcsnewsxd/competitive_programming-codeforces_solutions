# Towers

In this [problem](https://codeforces.com/contest/479/problem/B), the solution idea is do a greedy algorithm.
For that, I've to do each operation greedily: Take the highest and lowest towers and put the cube from the first to the second mentioned tower (using multiset is easy to do).
Doing that $k$ times, I'll reach the optimal solution with the minimum stability after at most $k$ operations.

The complexity is $O(k\log(n))$

The code can be found [here](./solution.cpp).
