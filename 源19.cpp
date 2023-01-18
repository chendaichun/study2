#include<iostream>
using namespace std;
//
class math
{
public:
	void getName() {
		{
			cout << "难度是" << hard;
		}
	};
	void getHard() {
		{
			cout << "名字是" << name;
		}
		
	};
	~math() {};
	math(string name1="数学分析",int hard1 = 5):name(name1),hard(hard1) {}
private:
	string name;
	int hard;
};

int main()
{
	math a("高等数学");
	a.getHard();
	a.getName();
	system("pause");
	return 0;
}