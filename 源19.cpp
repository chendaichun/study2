#include<iostream>
using namespace std;
//
class math
{
public:
	void getName() {
		{
			cout << "�Ѷ���" << hard;
		}
	};
	void getHard() {
		{
			cout << "������" << name;
		}
		
	};
	~math() {};
	math(string name1="��ѧ����",int hard1 = 5):name(name1),hard(hard1) {}
private:
	string name;
	int hard;
};

int main()
{
	math a("�ߵ���ѧ");
	a.getHard();
	a.getName();
	system("pause");
	return 0;
}