#include<iostream>
using namespace std;
int main10()
{
	int arr[5] = { 1,2,3,4,5 };

	int start = 0; int end = 4; 

	
	
	for (;end>start;)//设置条件以防无限循环
	{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;      //注意交换逻辑，此三行代码不能交换位置
			start++; end--;

	}
	
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j];
	}
	                                 //也可用while语句
	system("pause");
	return 0;
}
/*  while (start < end)
    {
        // 正确的交换方式
        int temp = arr[start];
        arr[start] = arr[end];  // 先赋值start位置
        arr[end] = temp;        // 再用temp赋值end位置
        
        // 移动指针
        start++;
        end--;
    }*/