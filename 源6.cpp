#include<iostream>
using namespace std;
int ceshi(int a)
{
	int* p = &a;
	cout << p << endl;
	return 0;
}
int main(void)
{
	int a = 1000;
	int* p1 = &a;
	cout << p1 << endl;
	ceshi(a);
	return 0;
}