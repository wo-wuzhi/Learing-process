#include<iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

static void maopao(hero arr[], int len)
{
	for (int i = 0; i < len-1; i++)

	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main14()
{
	hero arr[5] =
	{
	"����",45,"��",
	"�ŷ�",46,"��",
	"����",40,"��",
	"����",48,"��",
	"����",32,"Ů"
	};

	int len = sizeof(arr) / sizeof(arr[0]);

	maopao(arr, len);

	for (int u = 0; u < len; u++)
	{
		cout << "���� " << arr[u].name << "  ���� " << arr[u].age << "  �Ա� " << arr[u].sex << endl;
	}

	system("pause");
	return 0;
}
	

	
