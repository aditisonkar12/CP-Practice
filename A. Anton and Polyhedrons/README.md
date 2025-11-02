## [A. Anton and Polyhedrons](https://codeforces.com/problemset/problem/785/A)

Anton’s favourite geometric figures are **regular polyhedrons**.  
There are five types of regular polyhedrons:

| Polyhedron    | Number of Faces |
|----------------|-----------------|
| Tetrahedron    | 4               |
| Cube           | 6               |
| Octahedron     | 8               |
| Dodecahedron   | 12              |
| Icosahedron    | 20              |

Anton has a collection of `n` polyhedrons.  
Your task is to find the **total number of faces** in all the polyhedrons Anton owns.

---

### Input:
The first line contains a single integer `n` — the number of polyhedrons.  
`(1 ≤ n ≤ 200000)`

Each of the following `n` lines contains a string `sᵢ` — the name of the `i`-th polyhedron, which can be one of:
- `"Tetrahedron"`
- `"Cube"`
- `"Octahedron"`
- `"Dodecahedron"`
- `"Icosahedron"`

---

### Output:
Output a single integer — the **total number of faces** in all the polyhedrons in Anton's collection.

---

### Example 1:
**Input:**
```
4
Icosahedron
Cube
Tetrahedron
Dodecahedron
```

**Output:**
```
42
```

---

### Example 2:
**Input:**
```
3
Dodecahedron
Octahedron
Octahedron
```

**Output:**
```
28
```

---

### Note:
In the first example:
- Icosahedron → 20 faces  
- Cube → 6 faces  
- Tetrahedron → 4 faces  
- Dodecahedron → 12 faces  

Total = 20 + 6 + 4 + 12 = **42 faces**.
