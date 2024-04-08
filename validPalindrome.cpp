/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.



Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.


Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.*/

class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        // First, filter the string to keep only alphanumeric characters
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                x += tolower(s[i]); // Directly convert to lowercase here
            }
        }
        // Now, check if the filtered string is a palindrome
        int start = 0;
        int end = x.size() - 1;
        while(start <= end) {
            if(x[start] != x[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true; // If no mismatches were found, it's a palindrome
    }
};
