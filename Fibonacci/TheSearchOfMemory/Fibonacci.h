#include<iostream>
using namespace std;

bool g_InvalidInput = false;
long long Fibonacci(int n)
{
	long long Process(int n, int* map, int lenMap);
	g_InvalidInput = false;
	if (n < 0)
	{
		g_InvalidInput = true;
		return n;
	}
	int* map = new int[n+1]();//表示map[i]开头的结果
	int ret=Process(n,map,n+1);//注意是n+1
	return ret;
}


long long Process(int n,int* map,int lenMap)
{
	if (n < 2)
	{
		return n;
	}
	int res = 0;
	if (map[n] != 0)
	{
		res = map[n] == -1 ? 0 : map[n];
	}
	else
	{
		return Process(n - 1, map, lenMap) + Process(n - 2, map, lenMap);
	}
	return res;

}