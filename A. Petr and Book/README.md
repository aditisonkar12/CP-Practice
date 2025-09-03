## [A. Petr and Book](https://codeforces.com/problemset/problem/139/A)

One Sunday Petr went to a bookshop and bought a new book on sports programming. The book had exactly `n` pages.  

Petr decided to start reading it from the next day (Monday). He knows how many pages he can read each day of the week. Some days he may read nothing, but it is guaranteed that he reads at least one page per week.  

Assuming Petr never skips days and always reads as much as possible, determine **on which day of the week** he will finish the book.  

---

### Input
- The first line contains an integer `n` (1 ≤ `n` ≤ 1000) — the number of pages in the book.  
- The second line contains **seven non-negative integers** (each ≤ 1000), representing the number of pages Petr can read on **Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday**.  
- It is guaranteed that at least one of these numbers is positive.  

---

### Output
Print one integer — the number of the day of the week when Petr finishes reading the book.  
Days are numbered from **1 (Monday)** to **7 (Sunday)**.  

---

### Example 1:
**Input:**  
100  
15 20 20 15 10 30 45  

**Output:**  
6  

---

### Example 2:
**Input:**  
2  
1 0 0 0 0 0 0  

**Output:**  
1  

---

### Note
In the first example:  
- After Monday → 85 pages left  
- After Tuesday → 65 left  
- After Wednesday → 45 left  
- After Thursday → 30 left  
- After Friday → 20 left  
- After Saturday → 0 left (book finished).  

In the second example:  
- Week 1 Monday → 1 page read (1 left)  
- Week 2 Monday → 1 page read (0 left, book finished).  
So the answer is **1** (Monday).  
