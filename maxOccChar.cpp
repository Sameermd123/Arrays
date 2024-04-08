/*Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100

*/
#include<iostream>
#include<string>
using namespace std;
char getMaxOccChar(string str)
{
    int freq[26]={0};
    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        freq[ch - 'a']++;
    }
    int maxFreq = 0;
    char ans = 'a';
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxFreq)
        {
            maxFreq = freq[i];
            ans = i + 'a';
        }
    }
    return ans;
}
int main()
{
    string str;
    cout<<"Enter the string : "<<endl;
    cin>>str;

    char ans = getMaxOccChar(str);
    cout<<"The Maximum occuring character is : "<<ans<<endl;
    return 0;
}
