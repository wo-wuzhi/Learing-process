#include<iostream>
using namespace std;
int main3()
{
	int num = rand() % 100 + 1;

	cout << "������һ������" << endl;

	int a = 0;

	cin >> a;

	while (1)
	{
		if (num > a)
		{
			cout << "��С��" << endl;
			cin >> a;
		}
		else if (num < a)
		{
			cout << "�´���" << endl;
			cin >> a;
		}
		else
		{
			cout << "��ϲ���¶���" << endl;
			break;
		}
		
	}
	

	system("pause");
	return 0;
}