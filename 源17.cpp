#include<iostream>
using namespace std;
//
class animal 
{
public:
	animal(const animal& a1) 
	{
		age = a1.age;
	}
	animal()
	{
		age = 0;
	}
	~animal()
	{
		cout << "芝士构析函数" << endl;
	}
	void coutage()
	{
		cout << "年龄是：" << age << endl;
	}
private:
	int age;
};
int main18()
{

	animal dog;
	animal cat = animal(dog);
	cat.coutage();
	system("pause");
	return 0;
}