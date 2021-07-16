#include<iostream>
using namespace std;
 #include<string>
//
//void Teststring2()
//{
//	string s;
//	// 测试reserve是否会改变string中有效元素个数
//	s.reserve(100);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// 测试reserve参数小于string的底层空间大小时，是否会将空间缩小
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}
//
//int main()
//{
//	string s = "hello";
//	Teststring2();
//	return 0;
//}

//int main()
//{
//	string s("sij");
//	cout << s << endl;		
//	cout << s.capacity() << endl;
//	// s.clear();
//	// cout << s << endl;
//
//	s.resize(8, 'h');
//	cout << s << endl;
//	cout << s.size() << endl;
//	s.reserve(10);
//	cout << s.size() << endl;
//
//	//s.append("hello");
//	//cout << s << endl;
//
//	return 0;
//}


// 用迭代器遍历
//int main()
//{
//	string s = "whatyou";
//	s.push_back('d');
//	s.append("oing");
//	cout << s << endl;
//	///*string::iterator it = s.begin();
//	//while (it != s.end())
//	//{
//	//	cout << *it++ << " " ;
//	//}
//	//cout << endl;
//
//	//for (auto &ch : s)
//	//	cout << ch << " ";*/
//	//string::reverse_iterator it = s.rbegin();
//	//while (it != s.rend())
//	//{
//	//	cout << *it++<<" ";
//	//}
//	return 0;
//}

//void main( )
//{
//	string strText = "How are you?";
//	string strSeparator = " ";
//	string strResult;
//	int size_pos = 0;
//	int size_prev_pos = 0;
//	while ((size_pos = strText.find_first_of(strSeparator, size_pos)) != string::npos)
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//		size_prev_pos = ++size_pos;
//	}
//	if (size_prev_pos != strText.size())
//	{
//		strResult = strText.substr(size_prev_pos, size_pos - size_prev_pos);
//		cout << strResult << " ";
//	}
//	cout << endl;
//	//return 0;
//}

//int main()
//{
//	string str = "Hello Bit.";
//
//	string::iterator it = str.begin();
//
//	while (it != str.end())
//	{
//		if (*it != ' ')
//			cout << *it;
//		else
//			str.erase(it);
//		it++;
//	}
//	return 0;
//}

//int main(int argc, char *argv[])
//{
//
//	string a = "hello world";
//
//	string b = a;
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	string c = b;
//
//	c = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	a = "";
//
//	if (a.c_str() == b.c_str())
//
//	{
//
//		cout << "true" << endl;
//
//	}
//
//	else cout << "false" << endl;
//
//	return 0;
//
//}
//
#include<algorithm>


class Solution {
public:
	string addStrings(string num1, string num2) {
		int tmp = 0, ans;
		int i = num1.size() - 1, j = num2.size() - 1;
		string s;
		while (i >= 0 && j >= 0)
		{
			ans = num1[i] + num2[j] + tmp-'0'-'0';
			s.push_back(ans % 10 + '0');
			tmp = ans / 10;
			--i, --j;
		}
		while (i >= 0)
		{
			ans = num1[i--] + tmp-'0';
			s.push_back(ans % 10 + '0');
			tmp = ans / 10;
		}
		while (j >= 0)
		{
			ans = num2[j--] + tmp-'0';
			s.push_back(ans % 10 + '0');
			tmp = ans / 10;
		}
		if (tmp)
			s.push_back(tmp + '0');
		// 然后倒置
		reverse(s.begin(), s.end());
		return s;
	}
};

int main()
{
	string s1="1";
	string s2 = "99";
	Solution so;
	cout<<so.addStrings(s1, s2);
	
	
	return 0;
}


