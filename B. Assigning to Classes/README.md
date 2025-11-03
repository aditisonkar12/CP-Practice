## [B. Assigning to Classes](https://codeforces.com/problemset/problem/1300/B)

You are given `2n` students, where the `i`-th student has a skill level `a_i`.  
It is **not guaranteed** that all skill levels are distinct.

The **skill level of a class** is defined as the **median** of the skill levels of students in that class.

You need to assign each student to one of two classes such that:
- Each class has an **odd number of students**, and  
- Every student is assigned to **exactly one** class.

Among all valid partitions, find the **minimum possible absolute difference** between the skill levels (medians) of the two classes.

---

### Input:
- The first line contains a single integer `t` — the number of test cases.  
- The first line of each test case contains a single integer `n` — half the total number of students.  
- The second line contains `2n` integers `a₁, a₂, …, a₂ₙ` — the skill levels of the students.

---

### Output:
For each test case, print a single integer — the **minimum possible absolute difference** between the skill levels of the two classes.

---

### Example:
**Input:**
3
1
1 1
3
6 5 4 1 2 3
5
13 4 20 13 2 5 8 3 17 16

**Output:**
0
1
5

---

Constraints:  
- `1 ≤ t ≤ 10⁴`  
- `1 ≤ n ≤ 10⁵`  
- `1 ≤ aᵢ ≤ 10⁹`  
- The sum of all `n` over test cases does not exceed `10⁵`.

---

### Note:
- In the first test, there is only one possible partition: `[1]` and `[1]`.  
  The absolute difference is `|1 - 1| = 0`.

- In the second test, one optimal partition is:
  - Class 1: `[6, 4, 2]` → median = 4  
  - Class 2: `[5, 1, 3]` → median = 3  
  Absolute difference = `|4 - 3| = 1`.

- In the third test, examples of optimal partitions are:
  - `[3, 4, 13, 13, 20]` and `[2, 5, 8, 16, 17]`, or  
  - `[3, 8, 17]` and `[2, 4, 5, 13, 13, 16, 20]`.  
  Both yield the minimal possible absolute difference of `5`.