#include<iostream>
using namespace std;
int main10()
{
	int arr[5] = { 1,2,3,4,5 };

	int start = 0; int end = 4; 

	
	
	for (;end>start;)//���������Է�����ѭ��
	{
			int temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;      //ע�⽻���߼��������д��벻�ܽ���λ��
			start++; end--;

	}
	
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j];
	}
	                                 //Ҳ����while���
	system("pause");
	return 0;
}
/*  while (start < end)
    {
        // ��ȷ�Ľ�����ʽ
        int temp = arr[start];
        arr[start] = arr[end];  // �ȸ�ֵstartλ��
        arr[end] = temp;        // ����temp��ֵendλ��
        
        // �ƶ�ָ��
        start++;
        end--;
    }*/