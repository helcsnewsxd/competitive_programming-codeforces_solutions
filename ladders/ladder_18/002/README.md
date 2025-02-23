# Gravity Flip

In this [problem](https://codeforces.com/problemset/problem/405/A) I've to see the rows independently.
When the gravity changes, all the blocks moves to the right.
Therefore, if I've three blocks in a specific row, after the change this will be in the last three columns (the three rightmost columns).

Seeing that, and using that all the rows are independently because the blocks only moves in the horizontal direction (because every time they've something underneath), I can calculate the final quantity of blocks in the columns after the gravity change.
For that, I'll iterate over all the columns from left to right and imagine if I've a new block for the $j$-th row and the quantity of the row is $row[j]$.
Therefore, this will add one block to the column $n-row[j]$ (because the rightmost columns already have one block in this row).
Then, the solution is to do this for every block in a column that I iterate.

The complexity is $O(N*N)=O(N^2)$ and $N=100$.

The code can be found [here](./solution.cpp).
