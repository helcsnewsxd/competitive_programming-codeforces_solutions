# Tennis Game

In this [problem](https://codeforces.com/contest/496/problem/D), the solution is try all the possibilities for the $t$ values, i.e., the numbers of serves needed to win a set.
Then, if we know this number, the problem now is: How to count efficiently how many serves each player wins?
Since $n\sim 10^5$, the complexity must to be less than linear.

Therefore, the idea is using binary search to calculate, for each set, its ending position.
With that in mind, I'll be able to get all the values of the sets in $O(\frac{n}{t}\log(n))$ (it's only an approximation).

Knowing that, the total complexity is $O(\sum_{i=1}^n\frac{n}{t}\log(n))$ and since $n\sim 10^5$, the number of iterations of the worst case is $\sim 1.39193\times 10^7$.

The important things that I've to notice to solve this problem are:

- All the serves must to be cover by one set
- All the sets must to have a winner
- The last winner of a serve must to be the winner of the set
- The last winner of a set must to be the winner of the game
- Can't be two players with same number of sets won
- The answer must to be printed sorted

The code of the solution can be found [here](./solution.cpp).
