// LetterCombinations.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>

using namespace std;

class Solution {
public:
	vector<string> letterCombinations(string digits) {


		for (auto digit : digits)
		{
			// istringstream istr;
			// //这个是初始化,初始化后过一次就不能再初始化了,如果要重新利用怎么搞?
			// istr.str(to_string(digit));
			// int index;
			// istr >> index;
			int index = digit - '0';

			solution_number_to_letters.push_back(letter_num[index - 1]);
		}

		str_begin = solution_number_to_letters.begin();
		str_end = solution_number_to_letters.end();

		recurLetter("", str_begin);

		return output;

	}

	void recurLetter(string str_last, vector<string>::iterator &begin)
	{

		if (begin == str_end)
		{
			return;
		}
		string string_now = *begin;


		for (auto letter : string_now)
		{
			string combine_str = str_last + letter;
			if (begin + 1 == str_end)
			{
				output.push_back(combine_str);
				//return;
			}
			auto new_begin = begin + 1;
			recurLetter(combine_str, new_begin);
			// recurLetter()
		}

	}

public:
	vector<string> output;
	vector<string>::iterator str_begin, str_end;
	vector<string> solution_number_to_letters;
	const vector<string> letter_num = { "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

};


int main()
{
    //std::cout << "Hello World!\n";


	Solution solution;
	string digis("23");
	auto temp = solution.letterCombinations(digis);

	return 0;
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
