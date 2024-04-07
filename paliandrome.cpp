#include<iostream>
using namespace std;
char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPaliandrome(char name[], int n)
{
    int s=0, e=n-1;
    while(s<=e)
    {
        if(toLowerCase(name[s]) != toLowerCase(name[e]))

            {return 0;}

        else
        {
            s++;
            e--;
        }
        return 1;
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
    cout<<"Your String is : "<<checkPaliandrome(name, len)<<endl;
  //  cout<<toLowerCase(name)<<endl;
    return 0;
}
