## [A. Arrival of the General](https://codeforces.com/problemset/problem/144/A)

A Ministry for Defense sent a general to inspect the Super Secret Military Squad. The colonel ordered all `n` squad soldiers to line up on the parade ground.

By the military charter the soldiers should stand in **non-increasing** order of their heights. There wasn't time to reorder perfectly, so they stood in an arbitrary order. The general is short-sighted and will consider the line-up correct if **the first soldier has the maximum height** and **the last soldier has the minimum height**. The positions of other soldiers don't matter (including ties for maximum or minimum height).

In one second the colonel can swap any two **neighbouring** soldiers. Compute the **minimum time (in seconds)** needed to form a line-up the general will consider correct.

---

### Input:
The first line contains an integer `n` — the number of soldiers.  
`(2 ≤ n ≤ 100)`

The second line contains `n` integers `a₁, a₂, ..., aₙ` — the heights of soldiers from the beginning of the line to its end.  
`(1 ≤ aᵢ ≤ 100)`  
Heights are space-separated and not necessarily distinct.

---

### Output:
Print a single integer — the minimum number of seconds needed to obtain a line where the first soldier has the maximal height and the last soldier has the minimal height (as the general sees it).

---

### Example 1:
**Input:**
```
4
33 44 11 22
```

**Output:**
```
2
```

### Example 2:
**Input:**
```
7
10 10 58 31 63 40 76
```

**Output:**
```
10
```

---

### Note:
A correct strategy is:
- Move the **leftmost** occurrence of the maximum-height soldier to the front by swapping it leftwards; the number of swaps equals its current index (0-based).
- Move the **rightmost** occurrence of the minimum-height soldier to the end by swapping it rightwards; the number of swaps equals `(n - 1 - index_of_rightmost_min)`.
- If the leftmost maximum is to the left of the rightmost minimum originally, the two moves are independent. If the leftmost maximum is to the right of the rightmost minimum, moving the maximum to the front will shift the minimum one position to the left, so you must subtract `1` from the total swaps.

This yields the minimal number of neighbouring swaps required.
