## [Halloumi Boxes](https://codeforces.com/problemset/problem/1783/A)

Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside 𝑛
boxes and each of which has some number 𝑎𝑖
written on it.

He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray†
of boxes with length at most 𝑘.

Find if it's possible to sort the boxes using any number of reverses.

---

### Example:
**Input:**  
5  
3 2  
1 2 3  
3 1  
9 9 9  
4 4  
6 4 2 1  
4 3  
10 3 830 14  
2 1  
3 1  

**Output:**  
YES  
YES  
YES  
YES  
NO  

---

### Explanation:
- In the **first** and **second** cases, the array is already sorted.
- In the **third** case, we can reverse the entire array (since `k = n`).
- In the **fourth** case, reversing smaller segments suffices.
- In the **fifth** case, sorting is impossible due to reversal constraints.

---

### Constraints:
- `1 <= t <= 100`
- `1 <= k <= n <= 100`
- `1 <= a[i] <= 10^9`
