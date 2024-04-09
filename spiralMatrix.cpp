/*Given an m x n matrix, return all elements of the matrix in spiral order.



Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]     1 2 3
                                              4 5 6
Output: [1,2,3,6,9,8,7,4,5]                   7 8 9
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count =0;
        int total = row*col;

        // Index Initalization

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while(count < total)
        {
            //PRINTING STARTING ROW
            for(int index = startingCol;count<total && index<=endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //PRINTING ENDING COL
            for(int index = startingRow;count<total && index<=endingRow; index++ )
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // PRINTING ENDING ROW
            for(int index = endingCol; count<total && index>=startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;


        }
        return ans;
    }
};
