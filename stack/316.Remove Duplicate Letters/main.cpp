#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Solution {
public:
    string removeDuplicateLetters(string s) {
        //用于判断栈里面有没有
        vector<int> in_stack(26,0);

        //用于判断后续字符串里还有没有字符
        vector<int> number_char(26,0);
        stack<char> stk;

        for(int i = 0;i<s.length();i++)
        {
            number_char[s[i] - 'a'] ++;
        }

        stk.push(s[0]);
        in_stack[s[0] - 'a'] = 1;
        number_char[s[0] - 'a']--;

        for(int i =1;i<s.length();i++)
        {
            if(stk.top() > s[i] && !number_char[stk.top() - 'a']  && !in_stack[s[i] - 'a'])
            {
                char temp = stk.top();
                stk.pop();
                in_stack[temp - 'a'] = 0;

                stk.push(s[i]);
                in_stack[s[i] - 'a'] = 1;
            }
            else if(stk.top() < s[i] && !in_stack[s[i] - 'a'] )
            {
                stk.push(s[i]);
                in_stack[s[i] - 'a'] = 1;
            }
            number_char[s[i] - 'a']--;
        }

        string s_out = "";
        while(!stk.empty())
        {
            char stk_top = stk.top();
            stk.pop();

            s_out = stk_top + s_out;
        }

        return s_out;


    }
};



int main(int argc, char** argv) {
	
	string str_test = "bcabc";
	Solution solution;
	
	string temp = solution.removeDuplicateLetters(str_test);
	
	
	return 0;
}
