#include<iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr, n);
    cout<<"Your reverse array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}


/* For reversing array after m position use this code:
void reverseArray(vector<int> &arr, int m)
    {
    int s = m+1, e = arr.size()-1;
    while(s<=e)
        {
            swap(arr[s], arr[e]);
            start++;
            end--;
        }
    
    }
*/
