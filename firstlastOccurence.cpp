#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int start = 0, end = n-1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key)
{
    int start = 0, end = n-1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else if(key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1,2,3,4,3,6};
    cout<<"First Occurrence of 3 is at index : "<<firstOccurence(arr, 6, 3)<<endl;
     cout<<"Last Occurrence of 3 is at index : "<<lastOccurence(arr, 6, 3)<<endl;
    return 0;

}
