#include<iostream>
using namespace std;


void FullPermutation(char arr[], int length)
{
	void Process1(char arr[], int index, int length);
	if (arr == NULL || length <= 0)
	{
		return;
	}
	Process1(arr, 0, length);

}


void Process1(char arr[],int index,int length)
{
	bool IsSwap(char arr[], int left, int right);
	if (index == length - 1)
	{
		static int count = 1;
		cout << "第" << count << "次全排列为：" << arr << endl;
		return;
	}
	for (int i = index; i < length; ++i)
	{
		if (IsSwap(arr, index, i))//增加一个比较的函数，判断是否应该发生交换
		{
			std::swap(arr[i], arr[index]);
			Process1(arr, index + 1, length);
			std::swap(arr[i], arr[index]);
		}
	}
}


bool IsSwap(char arr[], int left, int right)
{
	for (int i = left; i < right; ++i)
	{
		if (arr[i] == arr[right])
		{
			return false;
		}
	}
	return true;
}
