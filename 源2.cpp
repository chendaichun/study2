#include<iostream>
using namespace std;
/*
* ���ʵս����
* ��������İ���̫������
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
		cout << "��������ʦ������";
		cin >> tea[i].name;
		for (int j = 0; j <= 4; j++)
		{
			cout << "�������" << j + 1 << "��ѧ��������";
			cin >> tea[i].stu[j].name;
			cout << "������ta�ķ�����";
			cin >> tea[i].stu[j].score
				;
		}
	}
	return
		0;
}