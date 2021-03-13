class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;

        int string_length = strs[0].length();
        for(int i = 0;i<string_length;i++)
        {
            for(auto j = 0;j<strs.size() - 1;j++)
            {
                if(strs[j][i] > strs[j + 1][i])
                {
                    ++count;
                    break;                    
                } 
            }
        }

        return count;
    }
};