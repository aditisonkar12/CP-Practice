## [A. Magical Sticks](https://codeforces.com/problemset/problem/1176/A)

A penguin Rocher has \( n \) sticks. He has exactly one stick with length \( i \) for all \( 1 \leq i \leq n \).

He can connect some sticks. If he connects two sticks that have lengths \( a \) and \( b \), he gets one stick with length \( a + b \). Two sticks that were used in the operation disappear from his set, and the new connected stick appears in his set and can be used for the next connections.

He wants to create the maximum number of sticks that have the same length. It is not necessary to make all sticks have the same length; some sticks can have another length. How many sticks with equal length can he create?

---

### Input
- The input consists of multiple test cases.  
- The first line contains a single integer \( t \) (1 ≤ t ≤ 1000) — the number of test cases.  
- Next \( t \) lines contain descriptions of test cases. Each line contains a single integer \( n \) (1 ≤ n ≤ 10^9).

---

### Output
For each test case, print a single integer — the maximum number of sticks with equal length.

---

### Example

**Input:**  
4
1
2
3
4

**Output:**  
1
1
2
2

---

### Note
- In the third case, he can connect two sticks with lengths 1 and 2 to get one stick of length 3. He will then have two sticks with lengths 3.  
- In the fourth case, he can connect two sticks with lengths 1 and 3 to get one stick of length 4. After that, he will have sticks with lengths {2, 4, 4}, so two sticks have the same length, and one stick has a different length.