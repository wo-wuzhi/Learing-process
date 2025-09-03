#include<iostream>
using namespace std;
int main1(){
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入小猪a，b，c的体重" << endl;
	cin >> a ;
	cin >> b;
	cin >> c;
	if (a > b) 
	{
		if (a > c) {
			cout << "a最重" << endl;
		}
		else {
			cout << "c最重" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "b最重" << endl;
		}
		else
		{
			cout << "c最重" << endl;
		}
	}
	system("pause");
	return 0;


}
