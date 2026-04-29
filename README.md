# A78: Count the Number of Cross-shapes in a 10x10 Array

**Code your program here:** [https://classroom.github.com/a/Vtrr_z_t](https://classroom.github.com/a/Vtrr_z_t)

---

## 3. Elaborate on Errors and Troubleshooting

- Programming algorithms used
- Errors encountered and troubleshooting steps taken
- Error experiences and lessons learned (how you identified and fixed each error)

---

## [Programming Assignment Guide]

**Read the Assignment Directions below, then complete the following main.cpp in your cloned Repository.**

In this assignment, you will complete **findcross()** in main.hpp. Count how many cross-shapes appear in a 10x10 binary grid. **Do NOT edit main.cpp.**

Full assignment instructions are embedded below. Read them carefully before coding.

Implementation Hint

| Function: int findcross(int M[][10]) |
|---|
| • A cross is centered at (i, j) where M[i][j] == 1 AND each of the four orthogonal neighbors equals 1: M[i-1][j], M[i+1][j], M[i][j-1], M[i][j+1].<br>• Cross centers cannot be on the borders (row 0, row 9, column 0, column 9) — there is no neighbor on that side.<br>• Provided helpers: checkup, checkdown, checkleft, checkright. Use them to test each direction.<br>• Return the total number of crosses found. |

**How to compile and run your program:**

- To compile your program in VS Code, open the new terminal (ctrl-`) and type: g++ main.cpp -o main
- To run your program: ./main

**How to test your program:**

- To run all tests: make test
- To run a specific test (e.g., T1): make test ARGS="[T1]"

**[Expected Output]**

*Your output should contain the correct values. The exact wording or formatting may differ — tests check values only, not the entire output.*

Example run (maze1 — 4 crosses, maze2 — 2 crosses):

```cpp
Found cross center 1,4
Found cross center 4,1
Found cross center 4,4
Found cross center 5,5
... (grid printout) ...
Total found cross 4
```

**How to pass the test:**

Test items: **compile, run, T1, T2, T3, T4**

| Test | Input | Expected Values (checked by test) | Points |
|---|---|---|---|
| T1 | reference maze1; reference maze2 | 4 and 2 (counts match assignment examples) | 20 |
| T2 | all-zero grid; isolated 1s with no neighbors | 0 and 0 | 20 |
| T3 | single cross at (5,5); cross missing one arm | 1 and 0 | 20 |
| T4 | cross-like shape touching row 0; two non-overlapping interior crosses | 0 (border) and 2 | 20 |

To test your program, type the command in your terminal: make test

**Make sure that your program passes the test and there is ✓ in your GitHub Classroom Repository.**

