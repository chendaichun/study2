#include<iostream>
using namespace std;
/*
	��һ��study̫���ˣ�̫���ˣ����½�һ������ѧϰ
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
	num1.name = "������";
	num1.stu.name = "����";
	cout << num1.stu.name << endl;
	struct teacher* p = &num1;
	cout << p->name;
	return 0;
}