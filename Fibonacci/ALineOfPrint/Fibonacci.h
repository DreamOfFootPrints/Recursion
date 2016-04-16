#include<iostream>
using namespace std;


long long Fibonacci(int n)
{
	return n < 2 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);//可以不判断负号，思考为什么？
}