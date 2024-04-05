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
