#include<iostream>
using namespace std;


bool g_InvalidInput = false;
int NQueen(int n)
{
	int Process1(int row, int* res, int len,int n);
	g_InvalidInput = false;
	if (n <= 0)
	{
		g_InvalidInput = true;
		return 0;
	}
	int* resArray = new int[n]();
	return Process1(0, resArray,n, n);
}

int Process1(int row, int* resArray, int len, int n)
{
	bool Invalid(int row, int col, int* resArray, int len, int n);
	if (row == n)
	{
		return 1;
	}
	int res = 0;
	for (int col = 0; col < len; ++col)
	{
		if (Invalid(row, col, resArray, len, n))
		{
			resArray[row] = col;
			res += Process1(row + 1, resArray, len, n);
		}
	}
	return res;
}

bool Invalid(int row,int col,int* resArray,int len,int n)
{
	int Abs(int num);
	for (int i = 0; i < row; ++i)
	{
		if (resArray[i] == col ||Abs(i-row)==Abs(resArray[i]-col) )//取绝对值是因为有左下方和右上方
		{
			return false;
		}
	}
	return true;
}

int Abs(int num)
{
	return num < 0 ? -num : num;
}

