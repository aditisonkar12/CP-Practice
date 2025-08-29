## [A. Repeating Cipher](https://codeforces.com/problemset/problem/1095/A)

Polycarp loves ciphers. He has invented his own cipher called **repeating**.

Repeating cipher is used for strings. To encrypt the string `s = s₁s₂…sₘ` (1 ≤ m ≤ 10), Polycarp uses the following algorithm:

- He writes down `s₁` once,  
- He writes down `s₂` twice,  
- He writes down `s₃` three times,  
- …  
- He writes down `sₘ` `m` times.  

For example, if `s = "bab"` the process is: `"b"` → `"baa"` → `"baabbb"`.  
So the encrypted `s = "bab"` is `"baabbb"`.

Given string `t` — the result of encryption of some string `s`.  
Your task is to decrypt it, i.e., find the string `s`.

---

### Input
- The first line contains integer `n` (1 ≤ n ≤ 55) — the length of the encrypted string.  
- The second line of the input contains `t` — the result of encryption of some string `s`.  
  It contains only lowercase Latin letters. The length of `t` is exactly `n`.

It is guaranteed that the answer to the test exists.

---

### Output
Print such string `s` that after encryption it equals `t`.

---

### Example 1:
**Input:**  
6
baabbb

**Output:**  
bab

---

### Example 2:
**Input:**  
10
ooopppssss

**Output:**  
oops

---

### Example 3:
**Input:**  
1
z

**Output:**  
z