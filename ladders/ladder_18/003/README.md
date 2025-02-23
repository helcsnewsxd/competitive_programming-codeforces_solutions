# Little Pony and Crystal Mine

In this [problem](https://codeforces.com/problemset/problem/454/A), the solution is implementing the constructive algorithm for the diamond.
This is very easy if we notice that the diamond is symmetric (it's a rhombus).
Therefore, in the first half every row has $i*2+1$ sections of diamonds but in the second half, there're $(n-i-1)*2+1$.
Notice that we strongly use that $n$ is odd in this problem for the symmetry.

The construction can be made in $O(N^2)$ and $N=101$.

The solution can be found [here](./solution.cpp).
