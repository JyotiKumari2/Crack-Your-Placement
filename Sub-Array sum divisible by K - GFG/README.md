# Sub-Array sum divisible by K
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given an array <strong>A</strong> of <strong>N</strong> positive and/or negative integers and a value <strong>K</strong>. The task is to find the count of all sub-arrays whose sum is divisible by K.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 6, K = 5
       arr[] = {4, 5, 0, -2, -3, 1}
<strong>Output:</strong> 7
<strong>Explanation</strong>: There are 7 sub-arrays whose 
is divisible by K {4, 5, 0, -2, -3, 1}, {5}, 
{5, 0}, {5, 0, -2, -3}, {0}, {0, -2, -3} 
and {-2, -3}
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 6, K = 2
       arr[] = {2, 2, 2, 2, 2, 2}
<strong>Output:</strong> 21
<strong>Explanation</strong>: All subarray sums are 
divisible by 7
</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>subCount</strong>() that takes array<strong> arr</strong>, integer<strong> N, </strong>and<strong> </strong>integer<strong> K&nbsp;</strong>as parameters and returns the desired output.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N+K).<br>
<strong>Expected Auxiliary Space:</strong> O(K).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>5</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>