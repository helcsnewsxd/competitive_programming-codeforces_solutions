# Little Pony and Expected Maximum

In this [problem](https://codeforces.com/problemset/problem/453/A), I can see that the expected value of the maximum dice number obtained after $n$ tosses is:

$$\sum_{i=1}^m\frac{[i^n-(i-1)^n]\cdot i}{m^n}=\sum_{i=1}^m [(\frac{i}{m})^n-(\frac{i-1}{m})^n]\cdot i$$

This can be obtained thinking that if we want $X$ as maximum dice value obtained, then the possibilities are $X^n$ for all the combinations with numbers less or equal to $X$ and $(X-1)^n$ for all the combinations with numbers less than $X$. Therefore, $X^n-(X-1)^n$ is the quantity of combinations with at least one dice with $X$ (and all the numbers less or equal to $X$).
Also, I know that the number of all possibilities of tosses is $m^n$.
Then, the probability for each maximum number is $\frac{X^n-(X-1)^n}{m^n}$.
Since I want the expected value, I've to multiply the last formula by $X$.

The code can be found [here](./solution.py).
