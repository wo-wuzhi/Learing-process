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
	"刘备",45,"男",
	"张飞",46,"男",
	"关羽",40,"男",
	"吕布",48,"男",
	"貂蝉",32,"女"
	};

	int len = sizeof(arr) / sizeof(arr[0]);

	maopao(arr, len);

	for (int u = 0; u < len; u++)
	{
		cout << "姓名 " << arr[u].name << "  年龄 " << arr[u].age << "  性别 " << arr[u].sex << endl;
	}

	system("pause");
	return 0;
}
	

	
