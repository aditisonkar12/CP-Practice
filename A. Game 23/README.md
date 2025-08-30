## [A. Game 23](https://codeforces.com/problemset/problem/1141/A)

Polycarp plays "Game 23". Initially, he has a number `n` and his goal is to transform it to `m`.  
In one move, he can multiply `n` by `2` or multiply `n` by `3`. He can perform any number of moves.

Your task is to find the minimum number of moves required to transform `n` into `m`, or determine that it is impossible.  
It can be proven that if a solution exists, the number of moves will be the same regardless of the path taken.

---

### Input
The only line of the input contains two integers `n` and `m` (1 ≤ `n` ≤ `m` ≤ 5·10^8).

---

### Output
Print one integer — the number of moves to transform `n` to `m`, or `-1` if it is impossible.

---

### Example 1:
**Input:**  
120 51840  

**Output:**  
7  

---

### Example 2:
**Input:**  
42 42  

**Output:**  
0  

---

### Example 3:
**Input:**  
48 72  

**Output:**  
-1  

---

### Note
- In the first example, one possible sequence of moves is:  
120 → 240 → 720 → 1440 → 4320 → 12960 → 25920 → 51840  
This takes 7 moves in total.  
- In the second example, no moves are needed because `n` already equals `m`.  
- In the third example, it is impossible to transform `48` into `72` using only multiplications by 2 or 3.  
