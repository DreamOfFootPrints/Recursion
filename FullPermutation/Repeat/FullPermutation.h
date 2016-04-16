#include<iostream>
using namespace std;


void FullPermutation(char arr[], int length)
{
	void Process1(char arr[], int index, int length);
	if (arr == NULL || length <= 0)
		return;
	Process1(arr, 0, length);
}

void Process1(char arr[],int index, int length)
{
	if (index == length - 1)
	{
		static int count1 = 1;
		cout << "第" << count1++ << "全排列是:" << arr << endl;
	}
	for (int i = index; i < length; ++i)
	{
		std::swap(arr[index], arr[i]);
		Process1(arr, index + 1, length);
		std::swap(arr[index], arr[i]);
	}
}
