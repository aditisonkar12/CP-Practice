## [A. Mahmoud and Ehab and the even-odd game](https://codeforces.com/problemset/problem/959/A)

Mahmoud and Ehab play a game called the even-odd game. Ehab chooses his favorite integer `n` and then they take turns, starting from Mahmoud. In each player's turn, he has to choose an integer `a` and subtract it from `n` such that:

- 1 ≤ a ≤ n.  
- If it's Mahmoud's turn, `a` has to be even.  
- If it's Ehab's turn, `a` has to be odd.  

If the current player can't choose any number satisfying the conditions, he loses. Can you determine the winner if they both play optimally?

---

### Input
The only line contains an integer `n` (1 ≤ n ≤ 10^9), the number at the beginning of the game.

---

### Output
Output **"Mahmoud"** (without quotes) if Mahmoud wins and **"Ehab"** (without quotes) otherwise.

---

### Example 1:
**Input:**  
1  

**Output:**  
Ehab  

---

### Example 2:
**Input:**  
2  

**Output:**  
Mahmoud  
