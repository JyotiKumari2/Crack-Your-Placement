# 2. Josephus problem
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given the total number of persons <strong>n</strong> and a number <strong>k</strong> which indicates that<strong> k-1 </strong>persons are skipped and <strong>k<sup>th</sup></strong> person is killed in circle in a fixed direction.</span></p>

<p><span style="font-size:18px">The task is to choose the <strong>safe&nbsp;place in the circle</strong> so that when you perform these operations starting from <strong>1</strong></span><strong><sup>st</sup></strong><span style="font-size:18px"><strong><sup> </sup>place</strong> in the circle, you are the last one remaining and&nbsp;survive. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3 k = 2
<strong>Output: </strong>3<strong>
Explanation: </strong>There are 3 persons so 
skipping 1 person i.e 1st person 2nd 
person will be killed. Thus the safe 
position is 3.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 5 k = 3
<strong>Output: </strong>4<strong>
Explanation: </strong>There are 5 persons so 
skipping 2 person i.e 3rd person will 
be killed. Thus the safe position is 4.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;You are required to complete the <strong>function josephus ()</strong> that takes<strong> two parameters n and k</strong> and <strong>returns </strong>an integer denoting<strong> safe position</strong>.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= k, n &lt;= 20</span></p>
 <p></p>
            </div>