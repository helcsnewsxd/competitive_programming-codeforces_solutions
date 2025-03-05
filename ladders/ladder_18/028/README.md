# Interesting Array

In this [problem](https://codeforces.com/problemset/problem/482/B), the solution can be obtained analyzing the problem and noticing that the numbers can be disaggregated into powers of two.
Doing that, see that if I'm viewing the $i$-th bit of $q$ and the range is $[l,r)$, therefore there are only two options:

1. If the $i$-th bit is on, then the numbers in $[l,r)$ have it on too
2. Otherwise, there are at least one number in $[l,r)$ with the $i$-th bit off

With this observations the first thing that I could do is setting the bits that must to be on.
To do that, I used the trick to do partial sums:

- If I want to sum ones in a range $[l,r)$, add one in $l$ and substract one in $r$
- After all the processing, sum from zero to $n$ the sums ($s_i = s_i + s_{i-1}$)

But, why this is useful for us?
Well, I check only the first condition.
To do the second, I've to check if there is at least one number without the $i$-th bit on (obligated for the first condition) in the range $[l,r)$.

Therefore, if I do the partial sums but only considering if a number has the bit on (i.e., after partial sums, do min of each sum with one and do again partial sums), I've to check only if $s_{r-1}-s_{l-1}\leq r-l$.
If all is OK, the numbers can be obtained easily because I've the bit information.

The time complexity is $O(31\times n)$.

The code can be found [here](./solution.cpp).
