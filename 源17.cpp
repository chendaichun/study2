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
		cout << "֥ʿ��������" << endl;
	}
	void coutage()
	{
		cout << "�����ǣ�" << age << endl;
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