#include<iostream>
using namespace std;
void rowSum(int arr[][3], int row, int col)
{
    for(int row=0;row<2;row++)
    {
        int sum = 0;
        for(int col=0;col<3;col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[2][3];
    cout<<"Enter the array elements : "<<endl;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cin >> arr[row][col];
        }
    }

    cout<<"Printing the array elements : "<<endl;
    for(int row=0;row<2;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout << arr[row][col] <<" ";
        }
        cout<<endl;
    }
    cout<<"Printing the sum of each row : "<<endl;
    rowSum(arr, 2, 3);
    return 0;
}
