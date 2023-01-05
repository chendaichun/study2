#include<iostream>
using namespace std;
/*

*/
struct students 
{
	string name;
	int age;
	int number;
};
void printStudents(students stu1)
{
	stu1.age = 18;
	cout << stu1.age << endl << stu1.name << endl << stu1.number << endl;
}
void printStudents1(students* p)
{
	p->age = 18;
	cout << p->age << endl << p->name << endl << p->number << endl;
}
int main(void)
{
	students a1 = { "²ÌĞìÀ¤",60,12345 };
	printStudents(a1);
	cout << a1.age << endl;
	printStudents1(&a1);
	cout << a1.age << endl;
	system("pause");
	return 0;
}