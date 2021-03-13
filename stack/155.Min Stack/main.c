#include<algorithm>
#include<vector>

//辅助栈的思路
//还可以用
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> minstack;
    vector<int> min_vector;

    MinStack() {
        //stack<int> minstack;
        //vector<int> min_vector;
    }
    
    void push(int x) {
        minstack.push(x);
        min_vector.push_back(x);
        sort(min_vector.begin(),min_vector.end());
    }
    
    void pop() {
        int top_value = minstack.top();
        for(auto begin = min_vector.begin();begin!=min_vector.end();begin++)
        {
            if(*begin == top_value)
            {
                min_vector.erase(begin);
                break;
            }
        }
        //sort(vector.begin(),vector.end());
        minstack.pop();
    }
    
    int top() {
        return minstack.top();
    }
    
    int getMin() {
        return min_vector[0];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */