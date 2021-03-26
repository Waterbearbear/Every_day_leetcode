class Solution {
public:


    //记录思路
    int rob(vector<int> &nums){
        vector<int> dp(nums.size());

        if(nums.size() < 2)
        {
            return nums[0];
        }
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);


        for(int i = 2;i<nums.size();i++)
        {
            dp[i] = max(dp[i - 2] + nums[i], dp[i-1]);
        }

        return max(dp[nums.size() - 1],dp[nums.size() - 2]);

    }

	// int hourse_size;

	// int rob(vector<int>& nums) {


        
	// 	hourse_size = nums.size();
    //     if(hourse_size == 1)
    //     {
    //         return nums[0];
    //     }
	// 	vector<vector<int>> val(hourse_size, vector<int>(hourse_size));

	// 	for (int i = 0; i < nums.size(); i++)
	// 	{
	// 		for (int j = 0; j < nums.size(); j++)
	// 		{
	// 			if (i == j)
	// 			{
	// 				val[i][j] = nums[i];
	// 			}
	// 			else if (j == i - 1 || j == i + 1 || j < i)
	// 			{
	// 				val[i][j] = 0;
	// 			}
	// 			else
	// 			{
	// 				val[i][j] = nums[j];
	// 			}
	// 		}
	// 	}

	// 	int max = 0;
	// 	for (int i = 0; i < hourse_size; i++)
	// 	{
	// 		int count = val[i][i];
	// 		for (int j = i + 1; j < hourse_size; j++)
	// 		{
	// 			/*if (j == i) count += val[i][j];*/
	// 			if (val[i][j] > 0)
	// 			{
	// 				int temp = val[i][j] + find_path(val, j);
	// 				if (count + temp > max) max = count + temp;
	// 			}
	// 		}
    //         if (count > max) max = count;
	// 	}

	// 	return max;
	// }

	// int find_path(vector<vector<int>> &val, int path)
	// {
	// 	// if (path == hourse_size - 1 || path == hourse_size - 2)
	// 	// {
	// 	// 	return val[path][path];
	// 	// }
	// 	// int count = 0;
	// 	for (int j = path + 1; j < hourse_size; j++)
	// 	{
	// 		if (val[path][j] > 0)
	// 		{
	// 			return val[path][j] + find_path(val, j);
	// 		}

	// 	}
	// 	return 0;
	// }
};