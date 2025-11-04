## [C. Numbers on Whiteboard](https://codeforces.com/problemset/problem/1430/C)

Numbers `1, 2, 3, …, n` (each integer from `1` to `n` once) are written on a board.  
In one operation you can erase any two numbers `a` and `b` from the board and write one integer:

```
ceil((a + b) / 2)
```

You should perform the given operation `n − 1` times until only **one number** remains on the board.  
Your goal is to **minimize** that final remaining number.

Example for `n = 4` (optimal):
1. choose `a = 4`, `b = 2` → new number = `3` → board: `[1, 3, 3]`
2. choose `a = 3`, `b = 3` → new number = `3` → board: `[1, 3]`
3. choose `a = 1`, `b = 3` → new number = `2` → board: `[2]`

---

### Input:
- First line: integer `t` — number of test cases  
  `(1 ≤ t ≤ 1000)`
- Each test case: integer `n` — starting number count  
  `(2 ≤ n ≤ 2 ⋅ 10^5)`
- The sum of all `n` does not exceed `2 ⋅ 10^5`

---

### Output:
For each test case:
- Print the **minimum possible** final number
- Then print the `n − 1` operations used  
  (pairs `a b` erased each step)

---

### Example:
**Input:**
```
1
4
```

**Output:**
```
2
2 4
3 3
3 1
```
