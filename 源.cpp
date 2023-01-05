#include<iostream>
using namespace std;
/*
	上一个study太丑了，太乱了，就新建一个继续学习
*/
struct students 
{
	string name;
	int age;
	int stuNum;
};
struct teacher
{
	string name;
	int age;
	struct students stu;

};
int main1(void)
{
	teacher num1;
	num1.name = "刘卫国";
	num1.stu.name = "邹洋";
	cout << num1.stu.name << endl;
	struct teacher* p = &num1;
	cout << p->name;
	return 0;
}