## [A. Restoring Three Numbers](https://codeforces.com/problemset/problem/1154/A)

Polycarp has guessed three positive integers `a`, `b`, and `c`. He keeps these numbers secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and the sum of all three numbers (one number).  
So, there are four numbers on a board in random order: `a + b`, `a + c`, `b + c`, and `a + b + c`.

You have to guess three numbers `a`, `b`, and `c` using the given numbers. Print three guessed integers in any order.

Pay attention that some given numbers `a`, `b`, and `c` can be equal (it is also possible that `a = b = c`).

---

### Input:
The only line of the input contains four positive integers `x1, x2, x3, x4`  
(2 ≤ `xi` ≤ 10^9) — numbers written on a board in random order.  
It is guaranteed that the answer exists for the given numbers.

---

### Output:
Print such positive integers `a`, `b`, and `c` that the four numbers written on a board are values `a + b`, `a + c`, `b + c`, and `a + b + c` written in some order.  
Print `a`, `b`, and `c` in any order.  
If there are several answers, you can print any.  
It is guaranteed that the answer exists.

---

### Example 1:
**Input:**  
3 6 5 4  
**Output:**  
2 1 3

---

### Example 2:
**Input:**  
40 40 40 60  
**Output:**  
20 20 20

---

### Example 3:
**Input:**  
201 101 101 200  
**Output:**  
1 100 100
