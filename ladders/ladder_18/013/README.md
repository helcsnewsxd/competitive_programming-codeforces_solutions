# Counterexample

In this [problem](https://codeforces.com/contest/483/problem/A), the solution is print the last three consecutive numbers in the range that ends with an even number.
This is correct because the first and the third numbers share the prime $2$ but two consecutive positive numbers are coprimes.

The only cases that I've to take into consideration is:

- The range is less than three numbers
- The range has three numbers but only one is even

In this cases, there isn't a solution. Otherwise, the solution is the last three numbers (if $r$ is even) or the last three numbers before of $r$ ($<r$).

The code can be found [here](./solution.cpp).
