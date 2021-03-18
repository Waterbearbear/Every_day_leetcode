// IslandNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
	int numIslands(vector<vector<char>>& grid) {


		//并查集初始化
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[i].size(); j++)
			{
				if (grid[i][j] == '1')
				{
					fa.push_back(i * grid[i].size() + j);
				}
				else
				{
					fa.push_back(-1);
				}
			}
		}

		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid[i].size(); j++)
			{
				if (i > 0 && grid[i][j] == '1' && grid[i - 1][j] == '1')
				{
					merge(i * grid[i].size() + j, (i - 1) * grid[i].size() + j);
				}

				if (i < grid.size() - 1 && grid[i][j] == '1' && grid[i + 1][j] == '1')
				{
					merge(i * grid[i].size() + j, (i + 1) * grid[i].size() + j);
				}

				if (j > 0 && grid[i][j] == '1' && grid[i][j - 1] == '1')
				{
					merge(i*grid[i].size() + j, i * grid[i].size() + (j - 1));
				}

				if (j < grid[i].size() - 1 && grid[i][j] == '1' && grid[i][j + 1] == '1')
				{
					merge(i*grid[i].size() + j, i * grid[i].size() + (j + 1));
				}
			}
		}

		int sum = 0;
		//int pre_num = -1;
		set<int> num_set;

		for (auto item : fa)
		{
			if (item != -1)
			{
				auto temp = find(item);
				num_set.insert(temp);
			}
		}


		//int pre_num = -1;
		/*for (auto item : fa)
		{
			if (item != -1 && item != pre_num)
			{
				pre_num = item;
				++sum;
			}
		}*/

		return num_set.size();


		// rank.insert(rank.begin(),grid.length * grid[0].length,1);



	}

	inline int find(int x)
	{
		return x == fa[x] ? x : (fa[x] = find(fa[x]));
	}

	void merge(int i, int j)
	{
		auto x = find(i);
		auto y = find(j);
		if (x != y) fa[x] = y;
	}

	// int find_land()


public:
	vector<int> fa;
	vector<int> rank;

};
int main()
{
	Solution solution;

	vector<vector<char>> temp = { {'1', '1', '1', '1', '1', '1'},
								  {'1', '0', '0', '0', '0', '1'},
								  {'1', '0', '1', '1', '0', '1'},
								  {'1', '0', '0', '0', '0', '1'},
								  {'1', '1', '1', '1', '1', '1'} };

	auto out = solution.numIslands(temp);
    //std::cout << "Hello World!\n";
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
