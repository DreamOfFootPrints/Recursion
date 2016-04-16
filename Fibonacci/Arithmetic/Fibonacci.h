#include<iostream>
using namespace std;


long long Fibonacci(int n)
{
	if (n < 2)//注意是n《2
		return n;
	long long pre = 0;
	long long res = 1;
	for (int i = 2; i <= n; ++i)//注意是i<=n
	{
		int tmp = res;
		res += pre;
		pre = tmp;
	}
	return res;
}