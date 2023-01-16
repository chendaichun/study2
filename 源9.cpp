#include<iostream>
using namespace std;
//高端的数据交换方法
void swap(int* a ,int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
int main10()
{
	int a = 1; int b = 2;
	swap(&a, &b);
	cout << a << b;
	return 0;
}