## [A. Vanya and Cubes](https://codeforces.com/problemset/problem/492/A)

Vanya got `n` cubes. He decided to build a pyramid from them.  

The pyramid is built as follows:  
- The 1st level requires **1** cube.  
- The 2nd level requires **1 + 2 = 3** cubes.  
- The 3rd level requires **1 + 2 + 3 = 6** cubes.  
- The i-th level requires `1 + 2 + ... + i = i * (i + 1) / 2` cubes.  

Vanya wants to know the maximum height of the pyramid that he can build using the given `n` cubes.

---

### Input
The first line contains an integer `n` (1 ≤ n ≤ 10^4) — the number of cubes given to Vanya.

---

### Output
Print the maximum possible height of the pyramid.

---

### Example 1:
**Input:**  
1  

**Output:**  
1  

---

### Example 2:
**Input:**  
25  

**Output:**  
4  
