```markdown
## [A. Boring Apartments](https://codeforces.com/problemset/problem/1433/A)

There is a building with **10,000 apartments** numbered from **1** to **10,000** (inclusive).

An apartment is called **boring** if its number consists of the same digit.  
Examples: `1`, `22`, `777`, `9999`, etc.

A mischievous person calls all boring apartments in the following order until someone answers:

1. All apartments consisting of the digit **1** (in increasing order): `1, 11, 111, 1111`  
2. Then all apartments consisting of the digit **2** (in increasing order): `2, 22, 222, 2222`  
3. And so on, up to **9**.

The resident of the boring apartment `x` answers the call, and the character stops calling further.

You need to find the **total number of keypresses** the person made before someone answered.

---

### Input:
- The first line contains an integer `t` — the number of test cases.  
- Each of the next `t` lines contains a single integer `x` — the apartment number where the resident answered.  
  It is guaranteed that `x` consists of the same digit.

---

### Output:
- For each test case, print a single integer — the total number of digits (keypresses) pressed.

---

### Example:
**Input:**  
4  
22  
9999  
1  
777  

**Output:**  
13  
90  
1  
66  

---

### Explanation:
- For `x = 22`:  
  The calling order is `1, 11, 111, 1111, 2, 22`.  
  Total digits pressed = `1 + 2 + 3 + 4 + 1 + 2 = 13`.

- For `x = 9999`:  
  The person calls all boring apartments up to `9999`, pressing `90` digits in total.

- For `x = 1`:  
  Only one digit is pressed — `1`.

- For `x = 777`:  
  All boring apartments with digits `1` through `6` are called completely,  
  and the first three with `7`: `7, 77, 777`.  
  Total digits pressed = `66`.

---

### Constraints:
- `1 ≤ t ≤ 36`  
- `1 ≤ x ≤ 9999`  
- `x` consists of the same digit.
```
