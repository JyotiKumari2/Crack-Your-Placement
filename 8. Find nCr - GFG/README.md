# 8. Find nCr
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given<strong> two numbers n and r</strong>. You need to find <sup>n</sup>C<sub>r</sub>.<br>
<sup>n</sup>C<sub>r</sub> = (n!) / ((n-r)!*(r!))<br>
<strong>In recursive way</strong>, we can write <sup>n</sup>C<sub>r</sub> as <sup>n</sup>C<sub>r</sub> = <sup>(n-1)</sup>C<sub>(r-1)</sub> + <sup>(n-1)</sup>C<sub>r</sub></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5, r = 2
<strong>Output: </strong>10</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 4, r = 1
<strong>Output: </strong>4</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You only need to complete the function <strong>nCr </strong>that takes<strong> n</strong> and <strong>r </strong>as <strong>parameters </strong>and <strong>returns </strong>the <strong>nCr</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(2<sup>N</sup>).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(2<sup>N</sup>) (Recursive).</span></p>

<p><strong><span style="font-size:18px">Constraints: </span></strong><br>
<span style="font-size:18px">1 &lt;= r &lt;= n &lt;= 30 </span></p>
 <p></p>
            </div>