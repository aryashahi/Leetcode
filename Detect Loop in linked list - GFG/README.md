# Detect Loop in linked list
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a linked list of <strong>N</strong> nodes. The task is to check if the&nbsp;linked list has a loop. Linked list can contain&nbsp;self loop.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
value[] = {1,3,4}
x = 2
<strong>Output: </strong>True<strong>
Explanation: </strong>In above test case N = 3.
</span><span style="font-size:18px">The linked list with nodes N = 3 is
given. Then value of&nbsp;x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
value[] = {1,8,3,4}
x = 0
<strong>Output: </strong>False<strong>
Explanation: </strong>For N = 4 ,x = 0 means
then lastNode-&gt;next = NULL, then
the&nbsp;Linked list does not contains
any loop.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>detectloop</strong>() which contains reference to the head as only argument. This function should return <strong>true</strong>&nbsp;if linked list contains loop, else return <strong>false</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>4</sup><br>
1 ≤ Data on Node ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>