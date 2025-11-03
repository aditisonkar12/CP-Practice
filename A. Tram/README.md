## [A. Tram](https://codeforces.com/problemset/problem/116/A)

Linear Kingdom has exactly one tram line with `n` stops, numbered from `1` to `n` in the order of the tram's movement.  
At the `i`-th stop, `aᵢ` passengers **exit** the tram, while `bᵢ` passengers **enter** it.

The tram is **empty** before it arrives at the first stop, and when it arrives at the last stop, **all passengers exit** so that it becomes empty again.

Your task is to determine the **minimum capacity** of the tram such that the number of passengers inside the tram at any time **never exceeds** this capacity.

> **Note:**  
> At each stop, all exiting passengers exit **before** any entering passengers enter the tram.

---

### Input:
- The first line contains an integer `n` — the number of tram stops.  
- The next `n` lines each contain two integers `aᵢ` and `bᵢ` —  
  the number of passengers exiting and entering the tram at the `i`-th stop.

---

### Output:
- Print a single integer — the **minimum possible capacity** of the tram.

---

### Example:
**Input:**  
4  
0 3  
2 5  
4 2  
4 0  

**Output:**  
6  

---

### Explanation:
At each stop:
1. Stop 1 → `0` exit, `3` enter → passengers inside = 3  
2. Stop 2 → `2` exit, `5` enter → passengers inside = 6  
3. Stop 3 → `4` exit, `2` enter → passengers inside = 4  
4. Stop 4 → `4` exit, `0` enter → passengers inside = 0  

The maximum number of passengers inside the tram at any time is **6**,  
so the **minimum required capacity** is **6**.

---

### Constraints:
- `2 ≤ n ≤ 1000`  
- `0 ≤ aᵢ, bᵢ ≤ 1000`  
- The tram is never overfilled:  
  `aᵢ ≤` (number of passengers inside before stop `i`)  
- `a₁ = 0`, `bₙ = 0`
