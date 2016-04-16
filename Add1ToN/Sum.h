#include<iostream>
using namespace std;




int Process1(int index,int n)//可以应用最多的递归,是从前往后递归的过程
{
	if (index >= n)
		return n;
	int res = index;
	res += Process1(index + 1, n);
	return res;
}

int Process2(int n)//从后往前的递归
{
	return n == 1 ? 1 : n + Process2(n - 1);
}


int Sum(int n)
{
	if (n <= 0)
		return -1;
	//return Process1(0, n);
	return Process2(n);
	
}