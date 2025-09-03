#include<iostream>
using namespace std;
int main11()
{
	int arr[] = { 3,5,8,7,1,2,4,9,6 };

	for (int j = 0; j <sizeof(arr) / sizeof(arr[0])-1; j++)
	{
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0])-i-1; i++)  //外层运行后内层固定的大数变多，循环次数减少
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (int a = 0; a < sizeof(arr) / sizeof(arr[0]); a++)
	{
		cout << arr [a];
	}
	
	system("pause");
	return 0;
}