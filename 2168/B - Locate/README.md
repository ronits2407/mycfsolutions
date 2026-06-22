<h2><a href="https://codeforces.com/contest/2168/problem/B" target="_blank" rel="noopener noreferrer">2168B — Locate</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2168B](https://codeforces.com/contest/2168/problem/B) |

## Topics
`binary search` `combinatorics` `communication` `constructive algorithms` `greedy` `interactive`

---

## Problem Statement

<div class="header"><div class="title">B. Locate</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p> </p><p><span class="tex-font-style-it">This is a run-twice (communication) interactive problem.</span></p><p>There are two players: Player A and Player B. The jury (otherwise known as the interactor of this problem) will first interact with player A. After player A ends their interaction, the jury will interact with player B. Note that player A and player B may not directly pass information to each other; both players are only able to send information to or receive information from the jury.</p><p>Before the interaction, the jury determines an integer $$$n$$$ and a permutation $$$p$$$$$$^{\text{∗}}$$$ of the integers from $$$1$$$ to $$$n$$$ exactly once. These values are consistent across both players.</p><p>Player A receives the value of $$$n$$$ and all elements of $$$p$$$ from the jury. Then, Player A must send a binary integer $$$x$$$ (that is, $$$x$$$ must equal $$$0$$$ or $$$1$$$) back to the jury. </p><p>Player B receives the value of $$$n$$$ and the integer $$$x$$$ (the same integer that player A sent) from the jury. However, the permutation $$$p$$$ is not given to player B. Player B's task is to determine the position of integer $$$n$$$ in $$$p$$$. To do so, Player B can ask the jury at most $$$30$$$ queries in the following form:</p><ul> <li> Choose any two integers $$$l$$$ and $$$r$$$ ($$$l \leq r$$$) and the jury will respond with $$$\max(p_{l}, p_{l+1}, \ldots, p_{r}) - \min(p_{l}, p_{l+1}, \ldots, p_{r})$$$. </li></ul><p>Player A wants to ensure that player B can determine the position of $$$n$$$. Your task is to act as both players and determine an optimal interaction strategy for both players so that player B determines the position of $$$n$$$ correctly. </p><p><span><span class="tex-font-style-bf">First Run</span></span></p><p>Your code will run exactly twice on each test. On the first run, you will be Player A.</p><p><span class="tex-font-style-bf">Input</span></p><p>The first line of the input contains the string <span class="tex-font-style-tt">first</span>. The purpose of this is so your program recognizes that this is its first run, and it should act as Player A.</p><p>The second line of the input contains exactly one integer $$$t$$$ — the number of test cases ($$$1 \le t \le 100$$$).</p><p>The first line of the $$$i$$$-th test case contains an integer $$$n$$$ — the length of $$$p$$$ for the $$$i$$$-th test case ($$$2 \le n \le 10^4$$$).</p><p>The second line of the $$$i$$$-th test case contains $$$n$$$ space-separated integers $$$p_1, p_2, \ldots, p_n$$$. It is guaranteed this sequence forms a permutation.</p><p>It is guaranteed the sum of $$$n$$$ over all test cases does not exceed $$$10^4$$$.</p><p><span class="tex-font-style-bf">Output</span></p><p>For each test case, print an integer $$$x$$$, either $$$0$$$ or $$$1$$$, on a new line. This is the integer that will be sent to you in the second run.</p><p>After this, proceed to the next test case, or you terminate your program if it was the last test case.</p><p><span><span class="tex-font-style-bf">Second Run</span></span></p><p>On the second run, you are Player B.</p><p><span class="tex-font-style-bf">Input</span></p><p>The first line of the input contains the string <span class="tex-font-style-tt">second</span>. The purpose of this is so your program recognizes that this is its second run, and it should act as Player B.</p><p>The second line of the input contains exactly one integer $$$t$$$ — the number of test cases ($$$1 \le t \le 100$$$). Note that this number is equal to $$$t$$$ from the first run input.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$x$$$ ($$$2 \leq n \leq 10^4$$$, $$$0 \leq x \leq 1$$$). This denotes the length of $$$p$$$ and the binary integer $$$x$$$ that was sent by Player A from the last run.</p><p><span class="tex-font-style-bf">Note that the test cases in the second run may be shuffled</span>. Please see the example test case for further illustration.</p><p><span class="tex-font-style-bf">Interaction</span></p><p>For the $$$i$$$-th test case, recall you will first receive $$$n$$$ and $$$x$$$ in the input from the jury according to the input format above. After receiving those inputs, you will be able to make at most $$$30$$$ queries of the following form (ignore quotes):</p><ul> <li> <span class="tex-font-style-tt">? l r</span> ($$$1 \leq l \leq r \leq n$$$). </li></ul><p>After each query, the jury will respond with $$$\max(p_{l}, p_{l+1}, \ldots, p_{r}) - \min(p_{l}, p_{l+1}, \ldots, p_{r})$$$, in which you should read through the input stream.</p><p>If your program makes more than $$$30$$$ queries, your program should immediately terminate to receive the verdict <span class="tex-font-style-tt">Wrong Answer</span>. Otherwise, you can get an arbitrary verdict because your solution will continue to read from a closed stream.</p><p>Once you are ready to report the position of $$$n$$$, you may do so in the following format:</p><ul> <li> <span class="tex-font-style-tt">! P</span> ($$$1 \leq P \leq n$$$), where $$$P$$$ is the position of $$$n$$$. </li></ul><p>Then, you will either proceed to the next test case, or your program must terminate if you have processed every test case.</p><p>The interactor is <span class="tex-font-style-bf">not</span> adaptive. That is, the permutation will not change during the interaction, and will always be the same permutation as shown to you in the first run.</p><p>After printing each query do not forget to output the end of line and flush$$$^{\text{†}}$$$ the output. Otherwise, you will get <span class="tex-font-style-tt">Idleness limit exceeded</span> verdict.</p><p>If, at any interaction step, you read $$$-1$$$ instead of valid data, your solution must exit immediately. This means that your solution will receive <span class="tex-font-style-tt">Wrong answer</span> because of an invalid query or any other mistake. Failing to exit can result in an arbitrary verdict because your solution will continue to read from a closed stream. </p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$A permutation of length $$$n$$$ is an array consisting of $$$n$$$ distinct integers from $$$1$$$ to $$$n$$$ in arbitrary order. For example, $$$[2,3,1,5,4]$$$ is a permutation, but $$$[1,2,2]$$$ is not a permutation ($$$2$$$ appears twice in the array), and $$$[1,3,4]$$$ is also not a permutation ($$$n=3$$$ but there is $$$4$$$ in the array). </p><p>$$$^{\text{†}}$$$To flush, use: </p><ul> <li> <span class="tex-font-style-tt">fflush(stdout)</span> or <span class="tex-font-style-tt">cout.flush()</span> in C++; </li><li> <span class="tex-font-style-tt">sys.stdout.flush()</span> in Python; </li><li> see the documentation for other languages. </li></ul></div></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006261169295025626" id="id002414603367242587" class="input-output-copier">Copy</div></div><pre id="id006261169295025626">first
3
3
3 2 1
5
1 2 3 4 5
5
4 2 3 5 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005991948826070217" id="id00227983932624796" class="input-output-copier">Copy</div></div><pre id="id005991948826070217">0
0
1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004195183713719923" id="id0091083910693946" class="input-output-copier">Copy</div></div><pre id="id004195183713719923">second
3
3 0

2

1

1

5 1

2

5 0

4

0

</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0035044325344038085" id="id00749317339494911" class="input-output-copier">Copy</div></div><pre id="id0035044325344038085">


? 1 3

? 1 2

? 2 3

! 1

? 1 2

! 4

? 1 5

? 5 5

! 5</pre></div></div></div><div class="note"><div class="section-title">Note</div><p><span class="tex-font-style-bf">For the first run</span>: The permutations $$$[3,2,1]$$$, $$$[1,2,3,4,5]$$$, $$$[4,2,3,5,1]$$$ are given. According to some strategy between the players, the integers $$$0$$$, $$$0$$$, and $$$1$$$ are sent respectively.</p><p><span class="tex-font-style-bf">For the second run</span>: Note that the test cases are re-ordered between runs. This time, the permutations are given in the order $$$[3,2,1]$$$, $$$[4,2,3,5,1]$$$,$$$[1,2,3,4,5]$$$. However, note that the integer $$$x$$$ for each test case is the same as what is given in the first run (that is, $$$0,1,0$$$).</p><p>Consider the first permutation of the second run. The permutation is $$$p = [3, 2, 1]$$$. </p><p>In the first query, player B asks for the difference between the maximum and the minimum among $$$p_1, p_2, p_3$$$. The judge answers with $$$2$$$ ($$$p = [3, 2, 1]$$$, so $$$\max(p_1, p_2, p_3) - \min(p_1, p_2, p_3) = 3 - 1 = 2$$$).</p><p>Likewise, the judge answers with $$$1$$$ on both the second and the third queries player B makes. Then, player B, using both the queries he made, as well as the integer player A has chosen, figures out that the integer $$$n$$$ ($$$n = 3$$$) can be found at position $$$1$$$ of the permutation. This is correct, as $$$p_1 = 3$$$.</p></div>