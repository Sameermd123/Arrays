#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr)
{
    for(int i=0;i<n;i++)
    {
        int temp=i;
        int j = i-1;
        for(; j>=0;j--)
        {
            if(arr[j]>temp)
            {
                //shift
                arr[j+1]=arr[j];
            }
            else{
                //ruk jao
                break;
            }
        }
        arr[j+1]=temp;
    }
}
// space complexity of this algorithm is O(1) i.e linear
// Time Complexity of above code is O(n2)
// Best case complexity of insertion sort is O(n) i.e when the array is alreay sorted
// worst case complexity is O(n2)
