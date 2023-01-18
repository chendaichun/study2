
#include "iostream"
using namespace std;

//����һ��Point��
class Point {
public:
	Point(int xx = 0, int yy = 0) :x(xx), y(yy) {}     //���캯��
	~Point() { };                              //��������
	Point(const Point& p);                //���ƹ��캯��
	int getX()const { return x; }
	int getY()const { return y; }
private:
	int x, y;//˽�г�Ա

};

Point::Point(const Point& p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;

}
//�β���ΪPoint�����ĺ���
void fun1(Point p)
{
	cout << p.getX() << endl;

}

//������Ķ���
Point fun2()
{
	Point a(1, 2);
	return a;
}

int main19()
{
	Point a(4);    //��һ������A,�ù������������أ������yĬ��Ϊ0

	Point b(a);      //��ʱ����copy���캯�������1����a��ʼ��b����һ�ε���copy���캯��
	cout << b.getX() << endl;

	fun1(b);  //��ʱ����copy���캯������Ķ����ں�����Ϊʵ�Σ��ڶ��ε���copy���캯��

	b = fun2();//��ʱ����copy���캯������������ֵΪ��Ķ��󣬵����ε���copy���캯��
	cout << b.getX() << endl;
	return 0;
}