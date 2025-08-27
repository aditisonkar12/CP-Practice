## [A. The New Year: Meeting Friends](https://codeforces.com/problemset/problem/723/A)

There are three friends living on the straight line Ox in Lineland. The first friend lives at the point `x1`, the second friend lives at the point `x2`, and the third friend lives at the point `x3`. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?  

It's guaranteed that the optimal answer is always an integer.  

---

### Input
The first line of the input contains three distinct integers `x1, x2, x3` (1 ≤ x1, x2, x3 ≤ 100) — the coordinates of the houses of the first, the second, and the third friends respectively.  

---

### Output
Print one integer — the minimum total distance the friends need to travel in order to meet together.  

---

### Example 1:
**Input:**  
7 1 4  

**Output:**  
6  

---

### Example 2:
**Input:**  
30 20 10  

**Output:**  
20  

---

### Note
In the first sample, friends should meet at the point 4.  
- The first friend travels 3 (from 7 to 4)  
- The second friend travels 3 (from 1 to 4)  
- The third friend does not travel because he lives at 4.  
Total distance = 3 + 3 + 0 = 6  
