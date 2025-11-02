## [B. Even Array](https://codeforces.com/problemset/problem/1367/B)

You are given an array `a[0…n−1]` of length `n` consisting of non-negative integers.  
(Note that array indices start from zero.)

An array is called **good** if the parity of each index matches the parity of the element at that index.  
Formally, for all `i (0 ≤ i ≤ n−1)`, the condition `i mod 2 = a[i] mod 2` must hold.

For example:
- `[0, 5, 2, 1]` and `[0, 17, 0, 3]` are **good** arrays.
- `[2, 4, 6, 7]` is **bad** because for `i = 1`,  
  `i mod 2 = 1`, but `a[i] mod 2 = 0`.

In one move, you can take **any two elements** of the array and **swap them** (they are not necessarily adjacent).

Your task is to find the **minimum number of moves** required to make the array `a` good, or say that it is **not possible**.

---

### Input:
The first line contains a single integer `t` — the number of test cases.  
`(1 ≤ t ≤ 1000)`

Each test case consists of:
- An integer `n` — the length of the array.  
  `(1 ≤ n ≤ 40)`
- A line containing `n` integers `a₀, a₁, …, aₙ₋₁`.  
  `(0 ≤ aᵢ ≤ 1000)`

---

### Output:
For each test case, output a single integer — the minimum number of moves to make the array `a` good,  
or `-1` if it is not possible.

---

### Example:
**Input:**
```
4
4
3 2 7 6
3
3 2 6
1
7
7
4 9 2 1 18 3 0
```

**Output:**
```
2
1
-1
0
```

---

### Note:
- In the first test case, swap indices `(0, 1)` and `(2, 3)` to make the array good.  
- In the second test case, swap indices `(0, 1)`.  
- In the third test case, it’s impossible to make the array good.  
- In the fourth test case, the array is already good.
