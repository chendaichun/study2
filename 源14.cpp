#include<iostream>
using namespace std;
//立方体类
class cube 
{
public:
	int m_H, m_L, m_W;
	void caculateS()
	{
		cout << 2 * m_H * m_W + 2 * m_L * m_W + 2 * m_L * m_H << endl;
	}
	void caculateV()
	{
		cout << m_H * m_L * m_W << endl;
	}
};
int caculateS(int a, int b, int c)
{
	return 2 * a * b + 2 * a * c + 2 * b * c;
}
int caculateV(int a, int b, int c)
{
	return a * b * c;
}

int main15()
{
	cube a;
	cin >> a.m_H;
	cin >> a.m_L;
	cin >> a.m_W;
	a.caculateS();
	a.caculateV();
	cout << caculateS(a.m_H, a.m_L, a.m_W) << endl;
	cout << caculateV(a.m_H, a.m_L, a.m_W) << endl;
	system("pause");
	return 0;
}