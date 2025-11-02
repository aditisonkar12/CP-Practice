## [B. Blank Space](https://codeforces.com/problemset/problem/1829/B)

You are given a binary array `a` of `n` elements.  
A binary array is an array consisting only of `0`s and `1`s.

A **blank space** is defined as a segment of consecutive elements consisting only of `0`s.

Your task is to find the **length of the longest blank space**.

---

### Input:
The first line contains a single integer `t` — the number of test cases  
`(1 ≤ t ≤ 1000)`

Each test case contains:
- One integer `n` — the length of the array  
  `(1 ≤ n ≤ 100)`
- The second line contains `n` space-separated integers `a₁, a₂, ..., aₙ`  
  `(0 ≤ aᵢ ≤ 1)`

---

### Output:
For each test case, output a single integer — the length of the longest blank space.

---

### Example:
**Input:**
```
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
```

**Output:**
```
2
1
1
0
3
```
