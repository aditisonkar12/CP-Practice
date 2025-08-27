## [A. Boy or Girl](https://codeforces.com/problemset/problem/236/A)

These days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at first glance.  
Our hero came up with a way to recognize users' genders by their usernames:

- If the number of **distinct characters** in the username is **odd**, then the user is **male**.  
- If it is **even**, then the user is **female**.  

You are given a username string, determine the gender by this method.

---

### Input
The first line contains a non-empty string, containing only lowercase English letters (at most 100 letters).

---

### Output
If the user is female, print  
`CHAT WITH HER!`  

Otherwise, print  
`IGNORE HIM!`

---

### Example 1:
**Input:**  
wjmzbmr  

**Output:**  
CHAT WITH HER!  

---

### Example 2:
**Input:**  
xiaodao  

**Output:**  
IGNORE HIM!  

---

### Example 3:
**Input:**  
sevenkplus  

**Output:**  
CHAT WITH HER!  

---

### Explanation
- For `"wjmzbmr"`, the distinct characters are `{w, j, m, z, b, r}` → 6 characters (even) → Female → `"CHAT WITH HER!"`.  
- For `"xiaodao"`, the distinct characters are `{x, i, a, o, d}` → 5 characters (odd) → Male → `"IGNORE HIM!"`.  
- For `"sevenkplus"`, the distinct characters are `{s, e, v, n, k, p, l, u}` → 8 characters (even) → Female → `"CHAT WITH HER!"`.
