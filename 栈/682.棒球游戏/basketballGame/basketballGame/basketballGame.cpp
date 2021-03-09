// basketballGame.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include<string>
#include<stack>
#include<sstream>
#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
	int calPoints(vector<string>& ops) {
		stack<int> calstk;


		for (string point : ops)
		{
			if (point == "C")
			{
				calstk.pop();
			}
			else if (point == "D")
			{
				int temp = calstk.top();
				//calstk.pop();
				temp *= 2;
				calstk.push(temp);
			}
			else if (point == "+")
			{
				int num1 = calstk.top();
				calstk.pop();
				int num2 = calstk.top();
				int sum = num1 + num2;
				calstk.push(num1);
				calstk.push(sum);
			}
			else
			{
				//
				istringstream istr;
				//这个是初始化,初始化后过一次就不能再初始化了,如果要重新利用怎么搞?
				istr.str(point);
				int score;
				istr >> score;
				calstk.push(score);
			}
		}
		int  sum = 0;
		while (!calstk.empty())
		{
			sum += calstk.top();
			calstk.pop();
		}
		return sum;
	}
};


int main()
{
	Solution solution;

	vector<string> ops{ "5","-2","4","C","D","9","+","+" };

	int temp = solution.calPoints(ops);

    std::cout << "Hello World!\n";
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
