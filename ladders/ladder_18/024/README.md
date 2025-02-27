# Ryouko's Memory Note

In this [problem](https://codeforces.com/contest/433/problem/C), I could see that there are two parameters to find: the page origin and the page destiny.
Therefore, the first thing is to think about what happens if I iterate over the page origin.
With that in mind, I enter in a new problem to find the best page destiny in less than $O(n)$ complexity (because $n=10^5$ and $O(n^2)$ doesn't fit in time).

In this new problem, other thing is that the problem reduces the numbers in the list. Why?
Well, if the page origin is $x$, then the only differences that can change are the differences between $x$ and the values that are close (i.e., left and right).
With that list (and without the values $x$ because the differences between $x$ and $x$ is zero), the problem now is to find the value that minimizes the sum of the differences between it and this numbers.
This is a known problem and the solution is the median.
Therefore, I'll be able to solve this sub-problem and, with this, I'll be able to solve the complete problem.
However, the complexity is linear but not in $n$. The point is that the numbers are the closest one to our value.
Then, I see twice every value, but not more than that. The total complexity will be $O(2n)\sim O(n)$.

However I've to sort the lists for every number because I want the median. Then, I've to add a $\log$ in the complexity.
Finally, it's $O(n\log(n))$.

During the implementation, I've some errors and bugs.
To solve it, I wrote a [case generator](./gen.py) and a [bruteforce solution](./brute.cpp) to see when and where are differences.

The code of the solution can be found [here](./solution.cpp).
