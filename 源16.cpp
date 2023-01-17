#include<iostream>
using namespace std;
//研究一下堆区
int main()
{
	int* p = new int;
	*p = 1000;
	cout << p << endl;
	float* p1 = new float;
	int* p2 = new int[5];
	system("pause");
	return 0;
}