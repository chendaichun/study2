#include<iostream>
using namespace std;
class students
{
public:
	void givename(string name)
	{
		s_name = name;
	}
	void givenum(int number)
	{
		s_number = number;
	}
	string s_name;
	int s_number;
};
int main13()
{
	students a;
	string name;
	cin >> name;
	a.givename(name);
	int num;
	cin >> num;
	a.givenum(num);
	cout << a.s_name << a.s_number;
	return 0;
}