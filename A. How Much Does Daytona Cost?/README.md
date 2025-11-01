## [A. How Much Does Daytona Cost?](https://codeforces.com/problemset/problem/1878/A)

We define an integer to be **the most common** on a subsegment if its number of occurrences in that subsegment is larger than the number of occurrences of any other integer in that subsegment.  
A subsegment of an array is a consecutive segment of elements in the array `a`.

Given an array `a` of size `n`, and an integer `k`, determine if there exists a non-empty subsegment of `a` where `k` is the most common element.

---

### Input
Each test contains multiple test cases.  
The first line contains a single integer `t` (1 ≤ t ≤ 1000) — the number of test cases.  

Each test case contains:  
- Two integers `n` and `k` (1 ≤ n ≤ 100, 1 ≤ k ≤ 100) — the size of the array and the integer to check.  
- A line with `n` integers `a₁, a₂, …, aₙ` (1 ≤ aᵢ ≤ 100) — elements of the array.

---

### Output
For each test case, output `"YES"` if there exists a subsegment where `k` is the most common element, and `"NO"` otherwise.  
You may print each letter in any case.

---

### Example 1:
**Input:**  
7  
5 4  
1 4 3 4 1  
4 1  
2 3 4 4  
5 6  
43 5 60 4 2  
2 5  
1 5  
4 1  
5 3 3 1  
1 3  
3  
5 3  
3 4 1 5 5  

**Output:**  
YES  
NO  
NO  
YES  
YES  
YES  
YES  

---

### Note
In the first test case, we need to check if there is a subsegment where `4` is the most common element.

Consider the subsegment `[2, 5]`:  
Elements = `[4, 3, 4, 1]`  
- `4` appears **2 times**  
- `3` appears **1 time**  
- `1` appears **1 time**  

Thus, `4` is the most common element in this subsegment, so the answer is **YES**.
