/*Given an integer n, return the number of prime numbers that are strictly less than n.



Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0


Constraints:

0 <= n <= 5 * 10^6*/

//SIEVE OF ERAS
// CONSIDER ALL NUMBERS AS PRIME
// THEN PICK ONE NUMBER AND EG.2 AND CONSIDER ALL ITS MULTIPLES AS NON PRIME
// COUNT++

class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> prime(n+1, true);
        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++)
        {
            if(prime[i])
            {
                count++;
                for(int j=2*i;j<n;j=i+j)
                {
                    prime[j] = 0;
                }
            }
        }
       return count;
    }
};
