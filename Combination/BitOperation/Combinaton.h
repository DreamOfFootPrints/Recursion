#include<iostream>
using namespace std;


void Process2(char arr[],int length,int m )
{
	cout << "{";
	for (int i = 0; i < length; ++i)
	{
		if (m&(1 << i))
		{
			cout << arr[i];
		}
	}
	cout << "}" << endl;
}

void Combination(char arr[],int length)
{
	for (int i = 0; i < (1<<length); ++i)
	{
		Process2(arr, length, i);
	}
}