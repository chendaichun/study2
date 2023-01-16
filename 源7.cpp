#include<iostream>
#include<cmath>
using namespace std;
//
bool poornum(long long a)
{
	int a1 = sqrt(a);
	for (int i = 2; i <= a1; i++)
	{
		if (a % i == 0)
		{
			return false;
			break;
		}
	
	}
	return true;
}
int main8()
{
	
	long long int n = 0;
	cout << "此程序用于寻找小于某数的质数，那么请输入上限：";
	cin >> n;
	int i1 = 2;
	while (i1<=n) 
	{
		if (poornum(i1))
		{
			cout << i1 << " ";
		}
		i1++;
	}
	system("pause");
	return 0;
}
