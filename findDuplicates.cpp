/*Problem statement
You are given an array of integers 'ARR' containing N elements. Each integer is in the range [1, N-1], with exactly one element repeated in the array.

Your task is to find the duplicate element. The duplicate element may be repeated more than twice in the error, but there will be exactly one element that is repeated in the array.

Note :

All the integers in the array appear only once except for precisely one integer which appears two or more times.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 5
1 <= N <= 10^5
1 <= ARR[i] <= N - 1

Time Limit: 1 sec
Sample Input 1:
1
3
1 1 2
Sample Output 1:
1
Explanation of Sample Input 1:
1 is repeated in the array, hence function returns 1. */

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int ans = 0;
	for(int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    for(int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

