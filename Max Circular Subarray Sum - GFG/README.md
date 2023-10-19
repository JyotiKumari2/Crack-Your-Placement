# Max Circular Subarray Sum
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of <strong>N</strong> integers arranged in a <strong>circular</strong> fashion. Your task is to find&nbsp;the <strong>maximum contiguous subarray sum</strong>.</span></p>
<p><br><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 7
arr[] = {8,-8,9,-9,10,-11,12}
<strong>Output:
</strong>22<strong>
Explanation:
</strong></span><span style="font-size: 18px;">Starting from the last element
of the array, i.e, 12, and 
moving in a circular fashion, we 
have max subarray as 12, 8, -8, 9, 
-9, 10, which gives maximum sum 
as 22.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>N = 8
arr[] = {10,-3,-4,7,6,5,-4,-1}
<strong>Output:
</strong>23<strong>
Explanation: </strong>Sum of the circular 
subarray with maximum sum is 23</span>
</pre>
<p><br><span style="font-size: 18px;"><strong>Your Task:</strong><br>The task is to complete the function <strong>circularSubarraySum</strong>() which returns a sum of the circular subarray with maximum sum.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>6</sup><br>-10<sup>6 </sup>&lt;= Arr[i] &lt;= 10<sup>6</sup></span></p></div>