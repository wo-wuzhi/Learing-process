#include<iostream>
using namespace std;
#define MAX 1000

void showmenu()
{                                                      //（待完成）限制输入字符、限制电话号码位数
	cout<< "****************" << endl
		<< "**1.添加联系人**" << endl
		<< "**2.显示联系人**" << endl
		<< "**3.删除联系人**" << endl
		<< "**4.查找联系人**" << endl
		<< "**5.修改联系人**" << endl
		<< "**6.清空联系人**" << endl
		<< "**0.退出通讯录**" << endl
		<< "****************" << endl;
}

struct hum
{
	string name;
	string sex;
	int age;
	int call;
	string addr;
};

struct all
{
	hum arrhum [MAX];
	int count;
};

void creat(all &a)
{
	if (a.count == MAX)
	{
		cout << "通讯录已满，操作失败" << endl;
		return;
	}
	cout << "请输入姓名" << endl;
	cin >> a.arrhum[a.count].name;
	cout << "请输入性别" << endl;
	string sex;
	while (true) 
	{
		cin >> sex;
		if (sex == "男" || sex == "女")
		{
		    a.arrhum[a.count].sex=sex;
			break;
		}
		cout << "错误，请重新输入" << endl;
	}
	cout << "请输入年龄" << endl;
	int age;
	while(true)
	{ 
		cin >> age;
		if (age>=0&&age<=150)
		{
			a.arrhum[a.count].age = age;
			break;
		}
		cout << "错误，请重新输入" << endl;
	}
	
	cout << "请输入电话号码" << endl;
	cin >> a.arrhum[a.count].call;
	cout << "请输入家庭地址" << endl;
	cin >> a.arrhum[a.count].addr;
	a.count++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}

void show(all& b)
{
	if (b.count == 0)
	{
		cout << "当前还未添加联系人" << endl;
	}
	else
	{
		cout << "通讯录中已有" <<b.count << "人,详情如下" << endl;
		for (int c=0; c < b.count; c++)
		{
			cout << "                 " << endl
				<< "姓名: "<<b.arrhum[c].name<<"\t"
				<< "性别: " << b.arrhum[c].sex << "\t"
				<< "年龄: " << b.arrhum[c].age << "\t"
				<< "电话号码: " << b.arrhum[c].call << "\t"
				<< "家庭住址: " << b.arrhum[c].addr << endl;
				
		}
	}
	system("pause");
	system("cls");
}

int check(all& a, string& b)
{
	for (int i = 0; i < a.count; i++)
	{
		if (b == a.arrhum[i].name)
		{
			return i;
		}
	}
	return -1;
}

void deletehum(all &a, int c)
{
	if (c == -1)
	{
        cout << "查无此人！" << endl;
	}
	else
	{
		for (int i = c; i < a.count-1; i++)
		{
			a.arrhum[i] = a.arrhum[i + 1];
		}
		a.count--;
		cout << "删除成功" << endl;
	}
	system("pause");
		system("cls");
}

void search(all& d,int e)
{
	if (e==-1)
	{
		cout << "查无此人!" << endl;
	}
	else
	{
	cout << "                 " << endl
		<< "姓名: " << d.arrhum[e].name << "\t"
		<< "性别: " << d.arrhum[e].sex << "\t"
		<< "年龄: " << d.arrhum[e].age << "\t"
		<< "电话号码: " << d.arrhum[e].call << "\t"
		<< "家庭住址: " << d.arrhum[e].addr << endl;
	}
	system("pause");
	system("cls");
}

void change(all& a, int b)
{
	if (b == -1)
	{
		cout << "查无此人！" << endl;
	}
	else
	{
		cout << "1---修改姓名" << endl
			<< "2---修改性别" << endl
			<< "3---修改年龄" << endl
			<< "4---修改电话号码" << endl
			<< "5---修改家庭住址" << endl
			<< "按任意其余数字终止更改" << endl;
		int c = 0;
		while(true)
		{
			cout << "请输入数字" << endl;
            cin >> c;
			switch (c)
		  {
			case 1:
				{
					cout << "请修改姓名" << endl;
					cin >> a.arrhum[b].name;
					break;
				}
			case 2:
			{
				cout << "请修改性别" << endl;
				string sex;
				while (true)
				{
					cin >> sex;
					if (sex == "男" || sex == "女")
					{
						a.arrhum[b].sex = sex;
						break;
					}
					cout << "错误，请重新输入" << endl;
				}
				break;
			}
			case 3:
			{
				cout << "请修改年龄" << endl;
			    int age;
			    while (true)
			    {
				    cin >> age;
				    if (age >= 0 && age <= 150)
				    {
					a.arrhum[b].age = age;
					break;
				    }
				cout << "错误，请重新输入" << endl;
			    }
				break;
			}
			case 4:
			{
				cout << "请修改电话号码" << endl;
				cin >> a.arrhum[b].call;
				break;
			}
			case 5:
			{
				cout << "请修改居住地址" << endl;
				cin >> a.arrhum[b].addr;
				break;
			}
			default:
			{
				cout << "修改完成" << endl;
				system("pause");
				system("cls");
				return;
			}
		  }
		}
	}
}

void deleteall(all& a)
{
	cout << "请再次确认是否要清空所有联系人" << endl
		<< "1----是         2----否" << endl;
	int c = 0;
	cin >> c;
	switch (c)
	{
	case 1:
	{
		a.count = 0;
		cout << "删除成功" << endl;
		break;
	}
	case 2:
	{
		cout << "未清空联系人" << endl;
		break;
	}
	}
	system("pause");
	system("cls");
}

int main()
{
	int num = 0;
	all people;
	people.count = 0;
	hum input;
   
	while (true)
	{
		showmenu();
		cin >> num;

		switch (num)
		{
		case 1:
			creat(people);
			break;

		case 2:
			show(people);
			break;

		case 3:
		{
			cout << "请输入将要删除的联系人姓名：" << endl;
			cin >> input.name;
            int checkresult=check(people, input.name);
			deletehum(people, checkresult);
			break;
		}
			
		case 4:
		{
			cout << "请输入将要查找的联系人姓名：" << endl;
			cin >> input.name;
			int checkresult = check(people, input.name);
			search(people, checkresult);
			break;
		}

		case 5:
		{
			cout << "请输入将要修改的联系人姓名：" << endl;
			cin >> input.name;
			int checkresult = check(people, input.name);
			change(people, checkresult);
			break;
		}
			
		case 6:
			deleteall(people);
			break;

		case 0:
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;

		default:
			cout << "无效数字，请重新输入" << endl;
			break;
		}
	}

	
}