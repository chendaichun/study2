#include<iostream>
using namespace std;
//复习罢了，实在是太无聊了
class phone 
{
public:
	int prince;
	int profemance;
	int caculategood()
	{
		return profemance / prince;
	}
};
int main14()
{
	phone redmik50;
	phone honor80;
	redmik50.profemance = 40075;
	honor80.profemance = 0.81 * 37000;
	redmik50.prince = 2299;
	honor80.prince = 2599;
	cout << "这款手机性价比更高";
	if (redmik50.caculategood() > honor80.caculategood())
	{
		cout << "redmik50";

	}
	else if (redmik50.caculategood() < honor80.caculategood())
	{
		cout << "honor80";
	}
	else 
	{
		cout << "一样好";
	}
	return 0;
}