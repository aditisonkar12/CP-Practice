## [A. k-String](https://codeforces.com/problemset/problem/219/A)

A string is called a **k-string** if it can be represented as `k` concatenated copies of some string.  

For example, the string `"aabaabaabaab"` is at the same time a 1-string, a 2-string and a 4-string, but it is not a 3-string, a 5-string, or a 6-string. Obviously any string is a 1-string.  

You are given a string `s`, consisting of lowercase English letters and a positive integer `k`. Your task is to reorder the letters in the string `s` in such a way that the resulting string is a k-string.  

---

### Input
The first line contains integer `k` (1 ≤ `k` ≤ 1000).  
The second line contains string `s`, consisting of lowercase English letters.  

It is guaranteed that `1 ≤ |s| ≤ 1000`, where `|s|` is the length of the string.  

---

### Output
Rearrange the letters in string `s` in such a way that the result is a k-string. Print the result on a single output line.  

If there are multiple solutions, print any of them.  
If no solution exists, print `-1`.  

---

### Example 1:
**Input:**  
2
aazz

**Output:**  
azaz

---

### Example 2:
**Input:**  
3
abcabcabz

**Output:**  
-1