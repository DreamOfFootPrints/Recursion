#include<iostream>
#include<vector>
#include<assert.h>
using namespace std;



void Process1(char str[],int m,vector<char> &result)
{
	assert(str != NULL);
	if (m == 0)
	{
		static int count = 1;
		cout << "第" << count++ << "组合为：";
		vector<char> ::iterator iter = result.begin();
		for (; iter != result.end(); ++iter)
		{
			cout << *iter;
		}
		cout << endl;
		return;
	}
	if (*str == '\0')
	{
		return;
	}
	result.push_back(*str);
	Process1(str + 1, m - 1, result);
	result.pop_back();
	Process1(str + 1, m, result);
}


void Combination(char str[])
{
	assert(str != NULL);
	vector<char> result;
	int len = strlen(str);
	for (int i = 1; i <= len; ++i)
	{
		Process1(str,i,result);
	}
}


