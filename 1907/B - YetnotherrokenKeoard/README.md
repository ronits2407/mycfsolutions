<h2><a href="https://codeforces.com/contest/1907/problem/B" target="_blank" rel="noopener noreferrer">1907B — YetnotherrokenKeoard</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1907B](https://codeforces.com/contest/1907/problem/B) |

## Topics
`data structures` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. YetnotherrokenKeoard</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp has a problem — his laptop keyboard is broken.</p><p>Now, when he presses the '<span class="tex-font-style-tt">b</span>' key, it acts like an unusual backspace: it deletes the last (rightmost) lowercase letter in the typed string. If there are no lowercase letters in the typed string, then the press is completely ignored.</p><p>Similarly, when he presses the '<span class="tex-font-style-tt">B</span>' key, it deletes the last (rightmost) uppercase letter in the typed string. If there are no uppercase letters in the typed string, then the press is completely ignored.</p><p>In both cases, the letters '<span class="tex-font-style-tt">b</span>' and '<span class="tex-font-style-tt">B</span>' are not added to the typed string when these keys are pressed.</p><p>Consider an example where the sequence of key presses was "<span class="tex-font-style-tt">ARaBbbitBaby</span>". In this case, the typed string will change as follows: <span class="tex-font-style-tt">""</span> $$$\xrightarrow{\texttt{A}}$$$ <span class="tex-font-style-tt">"A"</span> $$$\xrightarrow{\texttt{R}}$$$ <span class="tex-font-style-tt">"AR"</span> $$$\xrightarrow{\texttt{a}}$$$ <span class="tex-font-style-tt">"ARa"</span> $$$\xrightarrow{\texttt{B}}$$$ <span class="tex-font-style-tt">"Aa"</span> $$$\xrightarrow{\texttt{b}}$$$ <span class="tex-font-style-tt">"A"</span> $$$\xrightarrow{\texttt{b}}$$$ <span class="tex-font-style-tt">"A"</span> $$$\xrightarrow{\texttt{i}}$$$ <span class="tex-font-style-tt">"Ai"</span> $$$\xrightarrow{\texttt{t}}$$$ <span class="tex-font-style-tt">"Ait"</span> $$$\xrightarrow{\texttt{B}}$$$ <span class="tex-font-style-tt">"it"</span> $$$\xrightarrow{\texttt{a}}$$$ <span class="tex-font-style-tt">"ita"</span> $$$\xrightarrow{\texttt{b}}$$$ <span class="tex-font-style-tt">"it"</span> $$$\xrightarrow{\texttt{y}}$$$ <span class="tex-font-style-tt">"ity"</span>.</p><p>Given a sequence of pressed keys, output the typed string after processing all key presses.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input data contains an integer $$$t$$$ ($$$1 \le t \le 1000$$$), the number of test cases in the test.</p><p>The following contains $$$t$$$ non-empty lines, which consist of lowercase and uppercase letters of the Latin alphabet.</p><p>It is guaranteed that each line contains at least one letter and the sum of the lengths of the lines does not exceed $$$10^6$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the result of processing the key presses on a separate line. If the typed string is empty, then output an empty line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005347669696237756" id="id00291737074455247" class="input-output-copier">Copy</div></div><pre id="id0005347669696237756"><div class="test-example-line test-example-line-even test-example-line-0">12</div><div class="test-example-line test-example-line-odd test-example-line-1">ARaBbbitBaby</div><div class="test-example-line test-example-line-even test-example-line-2">YetAnotherBrokenKeyboard</div><div class="test-example-line test-example-line-odd test-example-line-3">Bubble</div><div class="test-example-line test-example-line-even test-example-line-4">Improbable</div><div class="test-example-line test-example-line-odd test-example-line-5">abbreviable</div><div class="test-example-line test-example-line-even test-example-line-6">BbBB</div><div class="test-example-line test-example-line-odd test-example-line-7">BusyasaBeeinaBedofBloomingBlossoms</div><div class="test-example-line test-example-line-even test-example-line-8">CoDEBARbIES</div><div class="test-example-line test-example-line-odd test-example-line-9">codeforces</div><div class="test-example-line test-example-line-even test-example-line-10">bobebobbes</div><div class="test-example-line test-example-line-odd test-example-line-11">b</div><div class="test-example-line test-example-line-even test-example-line-12">TheBBlackbboard</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0028990328356791817" id="id006510995285587614" class="input-output-copier">Copy</div></div><pre id="id0028990328356791817">ity
YetnotherrokenKeoard
le
Imprle
revile

usyasaeeinaedofloominglossoms
CDARIES
codeforces
es

helaoard
</pre></div></div></div>