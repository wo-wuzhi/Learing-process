#include<iostream>
using namespace std;
int main6() 
{
	for (int num = 1; num <= 100; num++) {
		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0) { 
			cout << "������" << endl;
		}
		else
			cout << num << endl;
	}

	//����д��

	for (int num = 1; num <= 100; num++) {
		(num % 10 == 7 || num / 10 == 7 || num % 7 == 0) ? (cout << "������" << endl) : (cout << num << endl);
     }
	system("pause");
	return 0;
}