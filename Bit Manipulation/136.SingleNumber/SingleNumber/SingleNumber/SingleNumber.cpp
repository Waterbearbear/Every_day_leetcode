// SingleNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<sstream>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		string str;
		int sum = 0;

		//有可能出现负数
		//正数和负数冲突
		//C++自带还有Hash Set

		//最优解:位运算
		int a = 0;
		for (auto i : nums)
		{
			a ^= i;
		}
		return a;

		//过于复杂

		//for (auto i : nums)
		//{
		//	/*[-967, -590, 980, -806, 145, -881, 357, 
		//		-787, -592, 859, 627, -929, 296, 818, 
		//		-194, 586, -106, -479, 967, 132, -396, 
		//		-692, 464, 726, -967, -590, 980, -806, 
		//		145, -881, 357, -787, -592, 859, 627,
		//		-929, 296, 818, -194, 586, -106, -479, 
		//		967, 132, -396, -692, 464, 726, -755]*/
		//	int index;
		//	string str_i = to_string(i);
		//	if ((index = str.find(str_i)) != string::npos )
		//	{
		//		//数字的长度很长
		//		str.erase(str.begin() + index,str.begin() + str.find(',',index));
		//		sum -= i;
		//	}
		//	else
		//	{
		//		str += str_i + ",";
		//		sum += i;
		//	}
		//}
		////istringstream  ism;


		//return sum;

		/*ism.str(str);

		int out_put;
		ism >> out_put;
		return out_put;*/

		// for(int i = 0;i<nums.size();i++)
		// {
		//     for(int j = nums.size() - 1;j>i;j--)
		//     {
		//         if(nums[i] == nums[j] && i!=j) break;
		//         else return nums[i];
		//     }
		// }
	}
};

int main()
{
    std::cout << "Hello World!\n";
	Solution solution;
	//vector<int> vec ={-967,-590,980,-806,145,-881,357,-787,-592,859,627,-929,296,818,-194,586,-106,-479,967,132,-396,-692,464,726,-967,-590,980,-806,145,-881,357,-787,-592,859,627,-929,296,818,-194,586,-106,-479,967,132,-396,-692,464,726,-755};

	//int output = solution.singleNumber(vec);
	int a = 1 ^ 3;
	int b = 3 ^ 1;
	int temp = 3 ^ 5 ^ 3;

	int c = 3 ^ 4;
	int d = 4 ^ 3;
	int e = -5 ^ -6;
	int f = -5 ^ 1;



	cout << a << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
