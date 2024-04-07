#include<iostream>
using namespace std;
void reverseString(char name[], int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}
int getLength(char name[])
{
    int count = 0;
    for(int i=0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter your Name : "<<endl;
    cin>>name;
    cout<<"Your Name is : ";
    cout<<name<<endl;
    int len = getLength(name);
    cout<<"Length of your name is : "<< len <<endl;
    reverseString(name, len);
    cout<<"Your name after reversing is : "<<endl;
    cout<<name<<endl;
    return 0;
}

