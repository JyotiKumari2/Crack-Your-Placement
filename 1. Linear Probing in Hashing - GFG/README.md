# 1. Linear Probing in Hashing
## Easy 
<div class="problem-statement">
                <p></p><p><em><span style="font-size:18px">Linear probing is a collision handling technique in hashing. Linear probing says that whenever a collision occurs, search for the immediate next position. </span></em></p>

<p><span style="font-size:18px">Given an array of integers and a hash table size. Fill the array elements into a hash table using&nbsp;<strong>Linear Probing&nbsp;</strong>to handle collisions. Duplicate elements must be mapped to the same position in the hash table while colliding elements must be mapped to the [(value+1)%hashSise]<em> </em>position.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>hashSize = 10
sizeOfArray = 4 
Array[] = {4,14,24,44}
<strong>Output:
</strong>-1 -1 -1 -1 4 14 24 44 -1 -1<strong>
Explanation: </strong>4%10=4. So put 4 in 
hashtable[4].Now, 14%10=4, but 
hashtable[4] is alreadyfilled so put 
14 in the next slot and so on.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>hashSize = 10
sizeOfArray = 4 
Array[] = {9,99,999,9999}
<strong>Output:
</strong>99 999 9999 -1 -1 -1 -1 -1 -1 9<strong>
Explanation: </strong>9%10=9. So put 9 in 
hashtable[9]. Now, 99%10=9, but 
hashtable[9] is already filled so 
put 99 in the (99+1)%10 =0 slot so
99 goes into hashtable[0] and so on.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>linearProbing()</strong>&nbsp;which takes&nbsp;the hash table size (hashSize), an integers array arr[] and its size N as input parameters&nbsp;and inserts all the elements of the array arr[] into a hash table. The function should return the&nbsp;hash table.&nbsp;<br>
The empty cells of the hash table are to be given a value of -1.<br>
Also, if there's no more space to insert a new element, just&nbsp;<strong>drop&nbsp;</strong>that element.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= hashSize &lt;= 100<br>
1 &lt;= sizeOfArray &lt;= 100<br>
0 &lt;= Array[] &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>