class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

		vector<int> short_nums;
		vector<int> long_nums;

		if (nums1.size() > nums2.size())
		{
			short_nums = nums2;
			long_nums = nums1;
		}
		else
		{
			short_nums = nums1;
			long_nums = nums2;
		}


		vector<int> cross;

		sort(short_nums.begin(), short_nums.end());
		sort(long_nums.begin(), long_nums.end());

		int i = 0;
		int j = 0;
		// for(int i =0;i<short_nums.size();i++)
		while (j < long_nums.size() && i < short_nums.size())
		{
			bool flag = false;
			if (short_nums[i] > long_nums[j])
			{
				++j;
			}
			else
			{
				if (short_nums[i] == long_nums[j])
				{
					cross.push_back(short_nums[i]);
					if (cross.size() > 1 && *(cross.end() - 1) == *(cross.end() - 2)) cross.pop_back();
					++i;
					++j;
					bool flag = true;
				}
				else
				{
					++i;
				}
			}
		}

		return cross;

	}
};