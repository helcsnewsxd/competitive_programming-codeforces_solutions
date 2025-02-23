# Puzzles

In this [problem](https://codeforces.com/contest/337/problem/A), the solution is to calculate intelligently the possible differences.
To do that, first I sort the array of quantities of pieces and then I calculate the difference between $f[i]$ and $f[i+n-1]$ for all the possibles $i$.
The answer is the minimum of all the differences calculated.

The complexity of the solution is $O(m \log(m))$.

The code can be found [here](./solution.cpp).
