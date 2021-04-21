#include<iostream>
using namespace std;

#include<stack>

#include<stack>


//	bool isValid(string s) {
//		stack<char>st;
//		for (size_t i = 0; i<s.size(); ++i)
//		{
//			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//			{
//				st.push(s[i]);
//			}
//			if (st.empty())
//			{
//				return false;
//			}
//			if (s[i] == ')' || s[i] == '}' || s[i] == ']')
//			{
//				if (s[i]=='('&&s[i] != (st.top() + 1))//注意：{}和[]的ANSII相差为2
//				{
//					return false;
//				}
//				else if (s[i] != '('&&s[i] != (st.top() + 2))
//				{
//					return false;
//				}
//				st.pop();
//			}
//		}
//		return st.empty();
//	}
//
//
//int main()
//{
//	cout << isValid("{}");
//	return 0;
//}

//#include<queue>
//class MyStack {
//public:
//	queue<int>queue1;
//	queue<int>queue2;
//	/** Initialize your data structure here. */
//	MyStack() {
//
//	}
//
//	/** Push element x onto stack. */
//	void push(int x) {
//		if (queue1.empty())
//		{
//			queue2.push(x);
//		}
//		else
//		{
//			queue1.push(x);
//		}
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {
//		int tmp = 0;
//		if (queue1.empty())
//		{
//			cout << queue2.size() << endl;
//			cout << queue1.size();
//			for (size_t i = 0; i<queue2.size() - 1; ++i)  //错误，在循环时改变了条件
//			{
//				queue1.push(queue2.front());
//				queue2.pop();
//			}
//			tmp = queue2.front();
//			queue2.pop();
//			return tmp;
//		}
//		else
//		{
//			for (size_t i = 0; i<queue1.size() - 1; ++i)
//			{
//				queue2.push(queue1.front());
//				queue1.pop();
//			}
//			tmp = queue1.front();
//			queue1.pop();
//			return tmp;
//		}
//	}
//
//	/** Get the top element. */
//	int top() {
//		if (queue1.empty())
//			return queue2.back();
//		else
//			return queue1.back();
//
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		return !(queue1.size() || queue2.size());
//	}
//};
//
//int main()
//{
//	return 0;
//
//}

