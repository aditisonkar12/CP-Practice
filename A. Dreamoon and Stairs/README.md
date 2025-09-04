## [A. Dreamoon and Stairs](https://codeforces.com/problemset/problem/476/A)

Dreamoon wants to climb up a staircase with `n` steps.  
- At each move, he can climb **1 step** or **2 steps**.  
- He wants the **total number of moves** to be a **multiple of `m`**.  

Find the **minimal number of moves** satisfying this condition, or output **-1** if impossible.  

---

### Input
- Two integers `n, m` (0 < n ≤ 10000, 1 < m ≤ 10).  

---

### Output
- A single integer — the minimal number of moves being a multiple of `m`.  
- If impossible, print `-1`.  

---

### Example 1:
**Input:**  
10 2  

**Output:**  
6  

---

### Example 2:
**Input:**  
3 5  

**Output:**  
-1  

---

### Note
- For **n = 10, m = 2**:  
  - Minimum possible moves = ceil(10 / 2) = 5 (using as many 2-steps as possible).  
  - Maximum possible moves = 10 (all 1-steps).  
  - Valid multiples of 2 in this range are {6, 8, 10}.  
  - Minimal is **6**.  

- For **n = 3, m = 5**:  
  - Possible moves = {2, 3}.  
  - None are multiples of 5 → Answer = **-1**.  
