## [A. Bear and Big Brother](https://codeforces.com/problemset/problem/791/A)

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh `a` and `b` respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

---

### Input
The only line of the input contains two integers `a` and `b` (1 ≤ `a` ≤ `b` ≤ 10) — the weight of Limak and the weight of Bob respectively.

---

### Output
Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

---

### Example 1:
**Input:**  
4 7

**Output:**  
2

---

### Example 2:
**Input:**  
4 9

**Output:**  
3

---

### Example 3:
**Input:**  
1 1

**Output:**  
1

---

### Note
In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are `4·3 = 12` and `7·2 = 14` respectively. Limak isn't larger than Bob yet. After the second year weights are `36` and `28`, so Limak becomes larger than Bob — answer is `2`.

In the second sample, weights over years are: `12` and `18`, then `36` and `36`, and finally `108` and `72` (after three years) — answer is `3`. Limak must be strictly larger (ties don't count).

In the third sample, after the first year weights are `3` and `2`, so Limak is larger — answer is `1`.
