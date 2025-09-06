## [A. Sum of Round Numbers](https://codeforces.com/problemset/problem/1352/A)

A positive integer is called **round** if it is of the form `d00...0`.  
In other words, a number is round if all its digits except the leftmost (most significant) are zero.  
All numbers from 1 to 9 are also round.  

Examples of round numbers: **4000, 1, 9, 800, 90**  
Examples of non-round numbers: **110, 707, 222, 1001**  

You are given a positive integer `n`.  
Represent the number `n` as a **sum of round numbers** using the minimum possible number of summands.  

---

### Input
- The first line contains an integer `t` (1 ≤ t ≤ 10^4) — the number of test cases.  
- Each test case contains a single integer `n` (1 ≤ n ≤ 10^4).  

---

### Output
For each test case:  
- First print integer `k` — the minimum number of summands.  
- Then print `k` round numbers whose sum is `n`.  
- The terms can be printed in any order.  
- If multiple answers exist, print any.  

---

### Example
**Input:**  
5  
5009  
7  
9876  
10000  
10  

**Output:**  
2  
5000 9  
1  
7  
4  
800 70 6 9000  
1  
10000  
1  
10  
