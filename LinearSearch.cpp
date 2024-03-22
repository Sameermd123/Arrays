#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for(int i= 0; i<size; i++){
        if(arr[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    //int arr[5] = {10, 20, 30, 40, 5};
    //Taking input of array
    int n;
    cout<<"Enter the size of array : "<< endl;

    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter the element to search for : " << endl;
    int key;
    cin >> key;
    bool found = linearSearch(arr, 5, key);
    if(found){
        cout << "Key is Present" << endl;
    }
    else{
        cout << "Key is Absent" << endl;
    }
    return 0;
}
