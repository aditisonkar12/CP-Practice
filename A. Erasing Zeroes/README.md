## [A. Erasing Zeroes](https://codeforces.com/problemset/problem/1303/A)

You are given a binary string `s` consisting only of characters `'0'` and `'1'`.

Your goal is to make all `1`s in the string form a **contiguous subsegment**.  
You can achieve this by erasing some (possibly none) of the `'0'` characters.

You need to find the **minimum number of zeros** that must be erased.

---

### Input:
- The first line contains an integer `t` — the number of test cases.  
- Each of the next `t` lines contains a binary string `s` (`1 ≤ |s| ≤ 100`).

---

### Output:
- For each test case, print a single integer —  
  the minimum number of `'0'` characters that must be erased from the string.

---

### Example:
**Input:**  
3  
010011  
0  
1111000  

**Output:**  
2  
0  
0  

---

### Explanation:
- **Test case 1:** `010011`  
  Remove the two middle zeros to make the string `0111`.  
  Minimum zeros erased = **2**.

- **Test case 2:** `0`  
  There are no `1`s, so the string already satisfies the condition.  
  Minimum zeros erased = **0**.

- **Test case 3:** `1111000`  
  All `1`s are already contiguous.  
  Minimum zeros erased = **0**.

---

### Constraints:
- `1 ≤ t ≤ 100`  
- `1 ≤ |s| ≤ 100`  
- Each character of `s` is either `'0'` or `'1'`.
