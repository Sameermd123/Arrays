
/* Problem statement
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.
Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000

Where 'T' represents the number of test cases, 'N' represents the size of the array, and Arr[i] represents the elements of the array.
Time Limit: 1 sec.
Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10 */

#include <bits/stdc++.h>
void bubbleSort(vector<int>& arr, int n)
{
    // Write your code here.
    for(int i=0;i<n;i++)
    bool swapped = false;
    {
        for(int j=0;j<n-i;j++) // because last element is already sorted.
        {
            if(arr[j]>arr[j+1])
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
        if(swapped == false)
        break;
    }
}

// Best case complexity is O(n) & worst case is O(n2) i.e without break
// Space complexity is constant i.e O(1)
// use case is to placed largest element in last position
