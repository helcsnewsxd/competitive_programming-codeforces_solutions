# Ilya and Queries

In this [problem](https://codeforces.com/problemset/problem/313/B), the solution can be obtained calculating the positions that satisfy the condition ($s_i=s_{i+1}$).
Then, I consider that positions like $1$ in an array with, initially, all zeroes.
The next step is calculate the prefix sums and I use that to get the answer for each query.
If $a$ is the array of prefix sums, then $a[r-1]-a[l-1]$ is the expected answer.

The code can be found [here](./solution.cpp).
