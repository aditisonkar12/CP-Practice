## [A. Everybody Likes Good Arrays!](https://codeforces.com/problemset/problem/2025/A)

An array `a` is **good** if for all pairs of adjacent elements, `aᵢ` and `aᵢ₊₁` (1 ≤ i < n) are of different parity. Note that an array of size 1 is trivially good.

You are given an array of size `n`.

In one operation, you can select any pair of adjacent elements that are of the same parity, delete them, and insert their product in the same position.

Find the minimum number of operations required to form a good array.

---

### Input
Each test contains multiple test cases.  
The first line contains the number of test cases `t` (1 ≤ t ≤ 500).  
The description of the test cases follows.  

The first line of each test case contains an integer `n` (1 ≤ n ≤ 100).  
The second line of each test case contains `n` integers `a₁, a₂, …, aₙ` (1 ≤ aᵢ ≤ 10⁹).

---

### Output
For each test case, print an integer — the minimum number of operations required to form a good array.

---

### Example 1:
**Input:**  
3  
5  
1 7 11 2 13  
4  
1 2 3 4  
6  
1 1 1 2 2 3  

**Output:**  
2  
0  
3

---

### Note
In the first test case, select the 2nd and 3rd integers and apply the operation on them. The array changes from `[1, 7, 11, 2, 13]` to `[1, 77, 2, 13]`.  
Next, select the 1st and 2nd integers — the array changes to `[77, 2, 13]`. Thus, `2` operations are required, which is minimal.  

In the second test case, the given array is already good, so `0` operations are needed.
