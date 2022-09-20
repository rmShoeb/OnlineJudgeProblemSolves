## Coins And Triangle
**Problem Code: [TRICOIN](https://www.codechef.com/problems/TRICOIN)**
### Problem
Chef belongs to a very rich family which owns many gold mines. Today, he brought  **N**  gold coins and decided to form a triangle using these coins. Isn't it strange?

Chef has a unusual way of forming a triangle using gold coins, which is described as follows:

-  He puts  **1**  coin in the  **1st**  row.
-  then puts  **2**  coins in the  **2nd**  row.
-  then puts  **3**  coins in the  **3rd**  row.
- and so on.

Chef is interested in forming a triangle with maximum possible height using at most  **N**  coins. Can you tell him the maximum possible height of the triangle?

### Input
The first line of input contains a single integer  **T**  denoting the number of test cases.

The first and the only line of each test case contains an integer  **N**  denoting the number of gold coins Chef has.

### Output
For each test case, output a single line containing an integer corresponding to the maximum possible height of the triangle that Chef can get.

### Constraints
-   **1 ≤ T ≤ 100**
-   **1 ≤ N ≤ $10^9$**
- 
### Subtasks
-   Subtask 1 (48 points) :  **1 ≤ N ≤ $10^5$**
-   Subtask 2 (52 points) :  **1 ≤ N ≤ $10^9$**

### Sample
| **Input** | **Output** |
|--|--|
| 3 3 5 7 | 2 2 3 |

### My Approach
In a geometric series $1+2+3+...+x$, the result is $\frac{x(x+1)}{2}$. In our problem, $x$ denotes the height of the triangle, and $n$ is equal to or greater than this sum, *i.e.*

$n \ge \frac{x(x+1)}{2}$

Considering the equality only,

$n = \frac{x(x+1)}{2}\\ \rightarrow x^2+x-2n=0\\ \therefore x=\frac{-1+\sqrt{1+8n}}{2}$

I am ignoring the other solution of the formula as $x$ cannot be negative. If $n$ is equal to the geometric sum, the result will be integer. Otherwise, a floating-point, in which case we only need the integer value.

This solution finds answer for each case in $O(1)$ time.