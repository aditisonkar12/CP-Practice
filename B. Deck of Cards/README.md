## B. Deck of Cards

Monocarp has a deck of cards numbered from `1` to `n`. Initially, the cards are arranged from smallest to largest, with `1` on top and `n` at the bottom.

Monocarp performed `k` actions on the deck. Each action was one of three types:

- remove the top card;  
- remove the bottom card;  
- remove either the top or bottom card.

Your task is to determine the fate of each card: whether it remains in the deck, has been removed, or might be both.

---

### Input:
The first line contains a single integer `t` — the number of test cases.  
`(1 ≤ t ≤ 10^4)`

Each test case contains:
- Two integers `n` and `k` (`1 ≤ k ≤ n ≤ 2·10^5`).
- A string `s` of length `k`, consisting of characters `0`, `1`, and/or `2`. This string describes Monocarp's actions:
  - `0` — remove the top card on this action,
  - `1` — remove the bottom card on this action,
  - `2` — remove either the top or bottom card on this action.

Additional constraint: the sum of `n` over all test cases does not exceed `2·10^5`.

---

### Output:
For each test case, print a string of length `n`. The `i`-th character should be:
- `+` if the `i`-th card is definitely still in the deck,
- `-` if the `i`-th card has definitely been removed,
- `?` if its state is unknown (could be removed or could remain).

---

### Example:
**Input:**
```
4
4 2
01
3 2
22
1 1
2
7 5
01201
```

**Output:**
```
-++-
???
-
--?+?--
```

---

### Note:
You must consider the initial order (1 at top, n at bottom) and how deterministic removals (`0` or `1`) and ambiguous removals (`2`) affect which index positions are certainly removed, certainly remaining, or ambiguous.
