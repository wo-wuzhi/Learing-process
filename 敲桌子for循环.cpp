#include<iostream>
using namespace std;
int main6() 
{
	for (int num = 1; num <= 100; num++) {
		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0) { 
			cout << "敲桌子" << endl;
		}
		else
			cout << num << endl;
	}

	//两种写法

	for (int num = 1; num <= 100; num++) {
		(num % 10 == 7 || num / 10 == 7 || num % 7 == 0) ? (cout << "敲桌子" << endl) : (cout << num << endl);
     }
	system("pause");
	return 0;
}