# Cut Ribbon

In this [problem](https://codeforces.com/problemset/problem/189/A) the solution is iterate over the quantity of cuts with length $a$ and $b$.
Then, for every combination, I know that there are two options:

- It's impossible cut with that parameters because the rest isn't multiply of $c$
- The quantity of cuts with length $c$ is defined

Therefore, for every combination of quantity of two cuts, I'm able to calculate all the possibles results.
From them, I conserve the maximum as answer.

The complexity is $O(n^2)$ with $n=4000$.

The code can be found [here](./solution.cpp).
