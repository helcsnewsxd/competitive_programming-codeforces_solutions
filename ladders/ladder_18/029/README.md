# Fox and Two Dots

In this [problem](https://codeforces.com/problemset/problem/510/B), the key is to find a cycle in the graph to answer if this exists.
To do that, I did a DFS for each cell not visited yet and if I go to a visited cell in this path, then exists a cycle.
Notice that every moment I've to know the parents of the cell (from where I come) because the cycle can't be of two dots.

The complexity is $O(n\times m + 4\times n\times m)\sim O(5\times n\times m)$.

The code can be found [here](./solution.cpp).
