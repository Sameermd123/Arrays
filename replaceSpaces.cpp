/*You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 50
0 <= |STR| <= 100

Where ‘|STR|’ is the length of a particular string including spaces.

Time limit: 1 sec
Sample Input 1:
2
Coding Ninjas Is A Coding Platform
Hello World
Sample Output 1:
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World
Explanation of Sample Output 1:
In test case 1, After replacing the spaces with “@40” string is:

Coding@40Ninjas@40Is@40A@40Coding@40Platform

In test case 2, After replacing the spaces with “@40” string is:

Hello@40World*/

#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str)
{
    string ans;
    for(int i=0;i<str.length(); i++)
    {
        if(str[i] == ' ')
        {
            ans = ans+@40;
        }
        else{
            ans=ans+str[i];
        }

    }
    return ans;
}
