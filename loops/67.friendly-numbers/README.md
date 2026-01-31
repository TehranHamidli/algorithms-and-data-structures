Given two natural numbers M and N, find all pairs of friendly numbers between M and N (M < N < 10000). Two natural numbers A and B are called friendly if each of them is equal to the sum of divisors of the other, except for the number itself.

Input Format

The input consists of two lines containing two natural numbers M and N.

Constraints

2 <= M < N < 10000

Output Format

Print all pairs of friendly numbers between M and N in ascending order.

Sample Input 0

200
300
Sample Output 0

(220, 284)
Explanation 0

Friendly numbers are a pair or a group of numbers where the sum of proper divisors (excluding the number itself) of each number is equal to the other number or the sum of divisors in the group. Let's consider a simple example of a pair of friendly numbers:

Number 1: 220 Number 2: 284

To find if these two numbers are friendly, we need to calculate the sum of proper divisors for each number:

For 220: Divisors of 220: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110 Sum of proper divisors: 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284

For 284: Divisors of 284: 1, 2, 4, 71, 142 Sum of proper divisors: 1 + 2 + 4 + 71 + 142 = 220

As we can see, the sum of proper divisors for each number is equal to the other number in the pair. Therefore, 220 and 284 are friendly numbers.

Sample Input 1

100
10000
Sample Output 1

(220, 284)
(1184, 1210)
(2620, 2924)
(5020, 5564)
(6232, 6368)
Submissions: 206
Max Score: 10
Difficulty: Medium
Rate This Challenge:

    
More
