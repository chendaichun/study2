#include<iostream>
using namespace std;
//

int main16() 
{
	class people 
	{
	protected:
		int age;
		int weight;
	public:
		people()
		{
			age = 0;
			weight = 50;
		}
		~people() 
		{
			delete this;
		}
		void getInfamation()
		{
			cout << "������" << age << endl;
			cout << "������" << weight <<  endl;
		}
		void giveInfamation(int a,int b)
		{
			age = a; weight = b;
		}
	};
	people* zy = new people;
	cout << zy;
	zy->giveInfamation(18, 180);
	zy->getInfamation();
	system("pause");
	return 0;
}