#include<iostream>
using namespace std;


int Process1(int index,int n)
{
	if (index == n)
		return n;
	int res = index;
	res *= Process1(index + 1,n);
	return res;
}

long long Process2(int n)
{
	return n == 1 ? 1 : n*Process2(n - 1);
}


int Mul(int n)
{
	if (n <= 0)
		return -1;
	//return Process1(1, n);
	return Process2(n);
}