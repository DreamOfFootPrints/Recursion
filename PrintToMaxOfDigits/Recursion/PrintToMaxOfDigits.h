#include<iostream>
using namespace std;



void PrintNum(char* num)
{
	char* cur = num;
	while (*cur == '0')
	{
		cur++;
	}
	printf("%s\n", cur);
}

void Process(char num[], int index, int n)
{
	if (index >=n)
	{
		PrintNum(num);
		return;
	}
	for (int i = 0; i <= 9; ++i)
	{
		num[index] = i+'0';
		Process(num, index + 1, n);
	}

}

void PrintToMaxOfDigits(int n)
{
	if (n <= 0)
		return;
	char* num = new char[n + 1];
	for (int i = 0; i < n; ++i)
	{
		num[i] = '0';
	}
	num[n] = '\0';
	Process(num,0, n);
	
}
