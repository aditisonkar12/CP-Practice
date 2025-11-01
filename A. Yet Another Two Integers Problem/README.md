## [A. Yet Another Two Integers Problem](https://codeforces.com/problemset/problem/1409/A)

You are given two integers `a` and `b`.

In one move, you can choose some integer `k` from 1 to 10 and either add it to `a` or subtract it from `a`.  
In other words, you choose an integer `k ∈ [1, 10]` and perform `a := a + k` or `a := a − k`.  
You may use different values of `k` in different moves.

Your task is to find the **minimum number of moves** required to obtain `b` from `a`.

You have to answer `t` independent test cases.

---

### Input:
The first line contains an integer `t` — the number of test cases  
`(1 ≤ t ≤ 2 * 10^4)`

Each of the next `t` lines contains two integers `a` and `b`  
`(1 ≤ a, b ≤ 10^9)`

---

### Output:
For each test case, print the minimum number of moves required to obtain `b` from `a`.

---

### Example:
**Input:**
```
6
5 5
13 42
18 4
1337 420
123456789 1000000000
100500 9000
```

**Output:**
```
0
3
2
92
87654322
9150
```

---

### Note:
- In the first test case, you don't need to do anything.  
- In the second test case, one possible sequence of moves is:  
  `13 → 23 → 32 → 42` (add 10, add 9, add 10).  
- In the third test case:  
  `18 → 10 → 4` (subtract 8, subtract 6).
