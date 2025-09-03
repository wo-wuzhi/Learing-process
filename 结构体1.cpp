#include<iostream>
using namespace std;
#include<ctime>    //随机数（1/3）

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	student Sarr[5];
};

static void put(teacher Tarr[], int len1,int len2)
{
	string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < len1; i++)
	{
		Tarr[i].name = "teacher_";
		Tarr[i].name += word[i];
		cout << "老师" << Tarr[i].name << endl;
		for (int j = 0; j < len2; j++)
		{   
			
			Tarr[i].Sarr[j].name = "student_";
			Tarr[i].Sarr[j].name += word[len1+i*len2+ j];
			cout << "\t学生" << Tarr[i].Sarr[j].name ;
			int random = rand() % 41 + 60;    //随机数（2/3）
			Tarr[i].Sarr[j].score = random;
			cout << "\t学生分数" << Tarr[i].Sarr[j].score << endl;
		}
	}
}

int main13()
{
	srand((unsigned int)time(NULL));   //随机数（3/3）
	teacher Tarr[3];
    student Sarr[5];
	int len1 = sizeof(Tarr) / sizeof(Tarr[0]);
	int len2 = sizeof(Sarr) / sizeof(Sarr[0]);
	put(Tarr, len1, len2);

	system("pause");
	return 0;
}