# Password

In this [problem](https://codeforces.com/problemset/problem/126/B), the idea is to use a string algorithm about substring searching. This algorithm is called Z-Function.
With Z-function I've in $O(n)$ the following values for $i$ from $0$ to $n-1$: $z[i] = max\{k : s[0..k) == s[i..i+k)\}$.
Then, I'm able to calculate the substring with maximum length that is a prefix, a suffix and a middle word of $s$.

The idea to calculate this substring is use the values of $z$.
Notice that:

- If $i + z[i] < n$ then exists middle words of lengths $1$ to $z[i]$ that match with prefix of $s$
- If $i + z[i] = n$ then exists a suffix of length $z[i]$ and middle words of lengths $1$ to $z[i] - 1$ that match with prefix of $s$

Then, if I save the maximum of the possible length of middle words and I save also all the possible suffix length, it's possible to solve the problem.
The length of the answer is the maximum suffix length that is less or equal than the maximum of the possible length of middle words.
The solution is the substring $s[0..r)$ where $r$ is the length of the answer.

The complexity is $O(n)$.

The code can be found [here](./solution.cpp).
