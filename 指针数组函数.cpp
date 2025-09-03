#include<iostream>
using namespace std;

static void maopao(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main12()
{
	int arr[10] = { 2,5,8,3,1,6,4,9,7,0 };
	int len = sizeof(arr) / sizeof(arr[0]);

	maopao(arr, len);
	
	for (int a = 0; a < 10; a++)
	{
		cout << arr[a];
	}

	system("pause");
	return 0;
}