class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {


        if(matrix.size() < 1 || matrix[0].size() < 1) return false;
        
        int row_len = matrix[0].size() - 1;

        // int colomns_up = 0;
        // int colomns_down = matrix.size() - 1;

        // for(int i = 0;i<matrix.size();i++)
        // {
        //     for(int j = 0;j)
        // }
        int i = 0;
        while(i < matrix.size())
        {
            if(matrix[i][row_len] < target)
            {
                ++i;
               continue; 
            }
            int left = 0;
            int right = row_len;
            while( left <= right)
            {
                int mid = (left + right)/2;
                if(matrix[i][mid] > target)
                {
                    right = mid - 1;
                }
                else if(matrix[i][mid] < target)
                {
                    left = mid + 1;
                }
                else return true;
            }
            ++i;
        }
        return false;


        
    }
};