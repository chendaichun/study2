#include<iostream>
using namespace std;
/*
* 完成实战案例
* 描述不清的案例太难受了
*/
struct students
{
	string name;
	int score;
};
struct teachers
{
	string name;
	students stu[5];
};
void printout()
{
	
}
int main3()
{
	teachers tea[3];
	for (int i = 0; i <= 2; i++)
	{
		cout << "请输入老师姓名：";
		cin >> tea[i].name;
		for (int j = 0; j <= 4; j++)
		{
			cout << "请输入第" << j + 1 << "个学生的姓名";
			cin >> tea[i].stu[j].name;
			cout << "请输入ta的分数：";
			cin >> tea[i].stu[j].score
				;
		}
	}
	return
		0;
}