
/* Selection sort is one of the sorting algorithms that works by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning of the unsorted region of the array.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Selection Sort algorithm.
Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000

Where 'T' represents the number of test cases, 'N' represents the size of the array, and 'Arr[i]' represents the elements of the array.
Time Limit: 1 sec
Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10 */
#include <bits/stdc++.h>
void selectionSort(vector<int>& arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex = i;

        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

// when the size of array is small then we use Selection sort
// best case complexity & worst case complexity for selection sort is same i.e O(n2)
// Space Complexity is constant i.e O(1).
