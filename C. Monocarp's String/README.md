## [C. Monocarp's String](https://codeforces.com/problemset/problem/1950/C)

Monocarp has a string `s` of length `n`, consisting only of the letters `'a'` and `'b'`.  
He wants to remove some (possibly zero) number of **consecutive letters** from the string so that the number of `'a'`s and `'b'`s in the remaining string becomes equal.  
He can start removing letters from **any position** in the string.

Monocarp really likes his string, so he wants to remove as **few consecutive letters as possible**.

Your task is to determine the **minimum number** of consecutive letters that need to be removed so that the remaining string has an equal number of `'a'` and `'b'`.  
If it is necessary to remove **all letters** from the string (making it empty), output `-1`.

---

### Input:
The first line contains an integer `t` — the number of test cases.  
`(1 ≤ t ≤ 10^4)`

Each test case consists of two lines:
- The first line contains an integer `n` — the length of the string.  
  `(2 ≤ n ≤ 2·10^5)`
- The second line contains the string `s` of length `n`, consisting of the letters `'a'` and/or `'b'`.

Additional constraint:  
The sum of all `n` across test cases does not exceed `2·10^5`.

---

### Output:
For each test case:
- Output the **minimum number** of consecutive letters that must be removed to make the number of `'a'` and `'b'` equal.
- If it is necessary to remove the **entire string**, output `-1`.

---

### Example:
**Input:**
```
5
5
bbbab
6
bbaaba
4
aaaa
12
aabbaaabbaab
5
aabaa
```

**Output:**
```
3
0
-1
2
-1
```

---

### Note:
- In the first test case, remove the first three letters to get `"ab"` (1 `'a'`, 1 `'b'`).  
- In the second test case, `'a'` and `'b'` counts are already equal, so remove 0 letters.  
- In the third and fifth test cases, all letters would have to be removed, so print `-1`.  
- In the fourth test case, removing the 5th and 6th letters yields `"aabbabbaab"` with equal counts of `'a'` and `'b'`.
