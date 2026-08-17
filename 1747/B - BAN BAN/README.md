<h2><a href="https://codeforces.com/contest/1747/problem/B" target="_blank" rel="noopener noreferrer">1747B — BAN BAN</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1747B](https://codeforces.com/contest/1747/problem/B) |

## Topics
`constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">B. BAN BAN</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$.</p><p>Let's define $$$s(n)$$$ as the string "<span class="tex-font-style-tt">BAN</span>" concatenated $$$n$$$ times. For example, $$$s(1)$$$ = "<span class="tex-font-style-tt">BAN</span>", $$$s(3)$$$ = "<span class="tex-font-style-tt">BANBANBAN</span>". Note that the length of the string $$$s(n)$$$ is equal to $$$3n$$$.</p><p>Consider $$$s(n)$$$. You can perform the following operation on $$$s(n)$$$ any number of times (possibly zero):</p><ul><li> Select any two distinct indices $$$i$$$ and $$$j$$$ $$$(1 \leq i, j \leq 3n, i \ne j)$$$.</li><li> Then, swap $$$s(n)_i$$$ and $$$s(n)_j$$$. </li></ul><p>You want the string "<span class="tex-font-style-tt">BAN</span>" to <span class="tex-font-style-bf">not appear</span> in $$$s(n)$$$ as a <span class="tex-font-style-bf">subsequence</span>. What's the smallest number of operations you have to do to achieve this? Also, find one such shortest sequence of operations.</p><p>A string $$$a$$$ is a subsequence of a string $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) characters.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ $$$(1 \leq t \leq 100)$$$  — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$n$$$ $$$(1 \leq n \leq 100)$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, in the first line output $$$m$$$ ($$$0 \le m \le 10^5$$$) — the minimum number of operations required. It's guaranteed that the objective is always achievable in at most $$$10^5$$$ operations under the constraints of the problem. </p><p>Then, output $$$m$$$ lines. The $$$k$$$-th of these lines should contain two integers $$$i_k$$$, $$$j_k$$$ $$$(1\leq i_k, j_k \leq 3n, i_k \ne j_k)$$$ denoting that you want to swap characters at indices $$$i_k$$$ and $$$j_k$$$ at the $$$k$$$-th operation. </p><p>After all $$$m$$$ operations, "<span class="tex-font-style-tt">BAN</span>" must not appear in $$$s(n)$$$ as a subsequence. </p><p>If there are multiple possible answers, output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009072916108853353" id="id0022979399463519312" class="input-output-copier">Copy</div></div><pre id="id009072916108853353">2
1
2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007684224601833916" id="id0029615169252982176" class="input-output-copier">Copy</div></div><pre id="id007684224601833916">1
1 2
1
2 6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the <span class="tex-font-style-bf">first testcase</span>, $$$s(1) = $$$ "<span class="tex-font-style-tt">BAN</span>", we can swap $$$s(1)_1$$$ and $$$s(1)_2$$$, converting $$$s(1)$$$ to "<span class="tex-font-style-tt">ABN</span>", which does not contain "<span class="tex-font-style-tt">BAN</span>" as a subsequence.</p><p>In the <span class="tex-font-style-bf">second testcase</span>, $$$s(2) = $$$ "<span class="tex-font-style-tt">BANBAN</span>", we can swap $$$s(2)_2$$$ and $$$s(2)_6$$$, converting $$$s(2)$$$ to "<span class="tex-font-style-tt">BNNBAA</span>", which does not contain "<span class="tex-font-style-tt">BAN</span>" as a subsequence.</p></div>