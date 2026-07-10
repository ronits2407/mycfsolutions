<h2><a href="https://codeforces.com/contest/2038/problem/C" target="_blank" rel="noopener noreferrer">2038C — DIY</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2038C](https://codeforces.com/contest/2038/problem/C) |

## Topics
`data structures` `geometry` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">C. DIY</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a list of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$. You need to pick $$$8$$$ elements from the list and use them as coordinates of four points. These four points should be corners of a rectangle which has its sides parallel to the coordinate axes. Your task is to pick coordinates in such a way that the resulting rectangle has the maximum possible area. The rectangle can be degenerate, i. e. its area can be $$$0$$$. Each integer can be used as many times as it occurs in the list (or less).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 25\,000$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$8 \le n \le 2 \cdot 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>Additional constraint on the input: the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer as follows:</p><ul> <li> if it is impossible to construct a rectangle which meets the constraints from the statement, print a single line containing the word <span class="tex-font-style-tt">NO</span> (case-insensitive); </li><li> otherwise, in the first line, print <span class="tex-font-style-tt">YES</span> (case-insensitive). In the second line, print $$$8$$$ integers $$$x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4$$$ — the coordinates of the corners of the rectangle. You can print the corners in any order. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0038977935675159525" id="id0006823422842919202" class="input-output-copier">Copy</div></div><pre id="id0038977935675159525"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">16</div><div class="test-example-line test-example-line-odd test-example-line-1">-5 1 1 2 2 3 3 4 4 5 5 6 6 7 7 10</div><div class="test-example-line test-example-line-even test-example-line-2">8</div><div class="test-example-line test-example-line-even test-example-line-2">0 0 -1 2 2 1 1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">8</div><div class="test-example-line test-example-line-odd test-example-line-3">0 0 0 0 0 5 0 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0045671418683385334" id="id006024865536242205" class="input-output-copier">Copy</div></div><pre id="id0045671418683385334">YES
1 2 1 7 6 2 6 7
NO
YES
0 0 0 5 0 0 0 5
</pre></div></div></div>