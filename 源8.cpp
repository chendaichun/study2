#include<iostream>
using namespace std;
//交换指针，多重指针
void swapPtr(int** a,int** b)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}
int main9(void)
{
	int a = 1; int b = 2;
	int*  p1 = &a;
	int*  p2 = &b;
	swapPtr(&p1, &p2);
	cout << a << b;
	system("pause");
	return 0;
}