## [A. String Task](https://codeforces.com/problemset/problem/118/A)

Petya started to attend programming lessons. On the first lesson his task was to write a simple program.  

The program was supposed to do the following for a given string (consisting of uppercase and lowercase Latin letters):  
1. Delete all vowels.  
2. Insert a character `.` before each consonant.  
3. Replace all uppercase consonants with the corresponding lowercase ones.  

Vowels are the letters: **A, O, Y, E, U, I**.  
All other letters are considered consonants.  

---

### Input
The first line contains the input string of Petya's program.  
This string only consists of uppercase and lowercase Latin letters, and its length is from 1 to 100 inclusive.

---

### Output
Print the resulting string after applying the above transformations.  
It is guaranteed that the output will not be empty.

---

### Example 1:
**Input:**  
tour  

**Output:**  
.t.r  

---

### Example 2:
**Input:**  
Codeforces  

**Output:**  
.c.d.f.r.c.s  

---

### Example 3:
**Input:**  
aBAcAba  

**Output:**  
.b.c.b  
