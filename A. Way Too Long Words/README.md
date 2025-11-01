## [A. Way Too Long Words](https://codeforces.com/problemset/problem/71/A)

Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is quite tiresome.

Let's consider a word **too long** if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.

This abbreviation is made like this:  
We write the **first** and the **last** letter of the word, and between them we write the **number of letters between the first and the last letters**.  
That number is written in the decimal system and doesn't contain any leading zeroes.

Thus,  
- `"localization"` becomes `"l10n"`  
- `"internationalization"` becomes `"i18n"`

You need to automate the process so that all too long words are replaced by their abbreviations, while shorter words remain unchanged.

---

### Input:
The first line contains an integer `n` (1 ≤ `n` ≤ 100).  
Each of the following `n` lines contains one word.  
All words consist of lowercase Latin letters and have lengths from 1 to 100.

---

### Output:
Print `n` lines.  
The i-th line should contain the processed form of the i-th input word — abbreviated if necessary.

---

### Example:
**Input:**  
4  
word  
localization  
internationalization  
pneumonoultramicroscopicsilicovolcanoconiosis  

**Output:**  
word  
l10n  
i18n  
p43s
