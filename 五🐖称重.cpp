#include<iostream>
using namespace std;
int main9()
{
	int arr[5] = { 100,150, 400,250,300 };

	int max = 0;

	for (int i = 0; i <5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}cout << max << endl;
	system("pause");
	return 0;
}