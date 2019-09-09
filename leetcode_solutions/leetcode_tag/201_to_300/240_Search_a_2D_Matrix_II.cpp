class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if (row == 0) return false;
        int col = matrix[0].size();

        int i = 0, j = col - 1;
        while (i < row && j >= 0)
        {
        	if (matrix[i][j] == target)
        		return true;
        	else if (matrix[i][j] > target)
        		j--;
        	else
        		i++;
        }
        return false;
    }
};