#include<iostream>
using namespace std;
int pivot(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start<end)
    {
        if(arr[mid] >= arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main()
{
    int arr[5] = {7,8,1,2,3};
    cout<<"Pivot Element is : "<<pivot(arr, 5)<<endl;
    return 0;
}
