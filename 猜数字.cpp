#include<iostream>
using namespace std;
int main3()
{
	int num = rand() % 100 + 1;

	cout << "请输入一个数字" << endl;

	int a = 0;

	cin >> a;

	while (1)
	{
		if (num > a)
		{
			cout << "猜小了" << endl;
			cin >> a;
		}
		else if (num < a)
		{
			cout << "猜大了" << endl;
			cin >> a;
		}
		else
		{
			cout << "恭喜，猜对了" << endl;
			break;
		}
		
	}
	

	system("pause");
	return 0;
}