dp用iterative的方法的嵌套for循环顺序: 

Say the final result is dp[0][n]. If you want to solve this, you need to solve all sub-problems. Then the loop would be:

for (int i=n-1; i>=0; --i) {
	for (int j=0; j<n; ++j) {
		dp[i][j] = ...;
	}
}


if dp[n][0], then: 

for (int i=0; i<n; ++i) {
	for (int j=n-1; j>=0; --j) {
		dp[i][j] = ...;
	}
}

when solving dp problem, i or j will be smaller/larger time by time 
(if not, we cannot get from bigger problems to small problems). If 
we start with i=0, for sure, at some time later you will need dp[i+1][j]
to update dp[i][j]. But at that time, dp[i+1][j] has not been sovled
yet.

That is the reason why we call this method "bottom up".

And the trick to remember is: in you final solution: the index 
at "smaller side", for loop will be from big to small; in the 
index at "larger side", for loop would be from big to small.

e.g.
final solution: dp[0][n]; then for "0" side: iterate from n-1-->0;
"n-1" side: loop from 0 --> n-1.