## [A. Unit Array](https://codeforces.com/problemset/problem/1834/A)

Given an array `a` of length `n`, where each element is either `-1` or `1`.  
Let's call the array `a` *good* if the following conditions hold at the same time:

- `a1 + a2 + ... + an ≥ 0`
- `a1 ⋅ a2 ⋅ ... ⋅ an = 1`

In one operation, you can select an arbitrary element `ai` and change its value to the opposite.  
In other words, if `ai = -1`, you can assign `ai := 1`, and if `ai = 1`, then assign `ai := -1`.

Determine the **minimum number of operations** you need to perform to make the array `a` good.  
It can be shown that this is always possible.

---

### Input:
Each test consists of multiple test cases.  
The first line contains a single integer `t` (1 ≤ `t` ≤ 500) — the number of test cases.  
The description of the test cases follows.

The first line of each test case contains a single integer `n` (1 ≤ `n` ≤ 100) — the length of the array `a`.  
The second line of each test case contains `n` integers `a1, a2, …, an` (`ai = ±1`) — the elements of the array `a`.

---

### Output:
For each test case, output a single integer — the minimum number of operations that need to be done to make the array `a` good.

---

### Example:
**Input:**  
7  
4  
-1 -1 1 -1  
5  
-1 -1 -1 1 1  
4  
-1 1 -1 1  
3  
-1 -1 -1  
5  
1 1 1 1 1  
1  
-1  
2  
-1 -1  

**Output:**  
1  
1  
0  
3  
0  
1  
2  

---

### Note:
In the first test case, we can assign the value `a1 := 1`.  
Then `a1 + a2 + a3 + a4 = 1 + (-1) + 1 + (-1) = 0 ≥ 0` and  
`a1 ⋅ a2 ⋅ a3 ⋅ a4 = 1 ⋅ (-1) ⋅ 1 ⋅ (-1) = 1`.  
Thus, we performed 1 operation.

In the second test case, we can assign `a1 := 1`.  
Then `a1 + a2 + a3 + a4 + a5 = 1 + (-1) + (-1) + 1 + 1 = 1 ≥ 0` and  
`a1 ⋅ a2 ⋅ a3 ⋅ a4 ⋅ a5 = 1 ⋅ (-1) ⋅ (-1) ⋅ 1 ⋅ 1 = 1`.  
Thus, we performed 1 operation.
