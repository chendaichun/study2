#include <iostream>
using namespace std;
//
int func()
{
	cout << "shishi";
	return 0;
}
int func(int a = 10, float b = 9.00f) 
{
	return a - b;
}
void func(int& a, int& b) 
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int main12()
{
	int a = 90, b = 100;
	func(a, b);
	cout << b << a;
	return 0;
}