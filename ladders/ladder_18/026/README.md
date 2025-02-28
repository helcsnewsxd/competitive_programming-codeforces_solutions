# Andrey and Problem

I think that I solved this [problem](https://codeforces.com/problemset/problem/442/B) with hacks hehe.

I was thinking about the condition and it's obvious to see that the result is, for selected probabilities $p_1,\dots, p_k$:

$$(1-p_1)\times (1-p_2)\times\dots\times p_k + \times + (1-p_1)\times p_2\times\dots\times (1-p_k)+p_1\times(1-p_2)\times\dots\times(1-p_k)$$
$$(1-p_1)\times(1-p_2)\times\dots\times[1-(1-p_k)]+\times+[1-(1-p_1)]\times(1-p_2)\times\dots\times(1-p_k)$$
$$(1-p_1)\times\dots\times(1-p_{k-1})+\dots+(1-p_1)\times(1-p_3)\times\dots(1-p_k)+(1-p_2)\times\dots\times(1-p_k)-k\times\prod_{i=1}^k (1-p_i)$$
$$\sum_{j=1}^k \frac{\prod_{i=1}^j (1-p_i)}{1-p_j}-k\times\prod_{i=1}^k (1-p_i)$$
$$\prod_{i=1}^k (1-p_i)\times(\sum_{j=1}^k\frac{1}{1-p_j}-k)$$

Then, I did a [bruteforce solution](./solution.cpp) to see if exists a pattern in the solution and I tested it with this [generator](./gen.py).
With that, I was able to notice that:

- If there is any probability greater or equal to $0.5$, then the solution is the maximum probability
- In the other case, the probabilities less than $0.5$ have to be merged. But how?
  - The merge is done between the $k$-th greatest probabilities

Seeing that, the solution is simply.
If there is one probability or anyone is greater or equal to $0.5$, the result is the maximum.
Otherwise, I've to sort the probabilities from greatest to lowest and calculate the result while adding one by one in this order.
The maximum of that must to be the answer.

I could check the correctness of this algorithm using the bruteforce solution with the case generator.

The complexity is $O(n\log(n))$.

The code can be found [here](./solution.cpp).
