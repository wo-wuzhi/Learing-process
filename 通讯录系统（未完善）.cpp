#include<iostream>
using namespace std;
#define MAX 1000

void showmenu()
{                                                      //������ɣ����������ַ������Ƶ绰����λ��
	cout<< "****************" << endl
		<< "**1.�����ϵ��**" << endl
		<< "**2.��ʾ��ϵ��**" << endl
		<< "**3.ɾ����ϵ��**" << endl
		<< "**4.������ϵ��**" << endl
		<< "**5.�޸���ϵ��**" << endl
		<< "**6.�����ϵ��**" << endl
		<< "**0.�˳�ͨѶ¼**" << endl
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
		cout << "ͨѶ¼����������ʧ��" << endl;
		return;
	}
	cout << "����������" << endl;
	cin >> a.arrhum[a.count].name;
	cout << "�������Ա�" << endl;
	string sex;
	while (true) 
	{
		cin >> sex;
		if (sex == "��" || sex == "Ů")
		{
		    a.arrhum[a.count].sex=sex;
			break;
		}
		cout << "��������������" << endl;
	}
	cout << "����������" << endl;
	int age;
	while(true)
	{ 
		cin >> age;
		if (age>=0&&age<=150)
		{
			a.arrhum[a.count].age = age;
			break;
		}
		cout << "��������������" << endl;
	}
	
	cout << "������绰����" << endl;
	cin >> a.arrhum[a.count].call;
	cout << "�������ͥ��ַ" << endl;
	cin >> a.arrhum[a.count].addr;
	a.count++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}

void show(all& b)
{
	if (b.count == 0)
	{
		cout << "��ǰ��δ�����ϵ��" << endl;
	}
	else
	{
		cout << "ͨѶ¼������" <<b.count << "��,��������" << endl;
		for (int c=0; c < b.count; c++)
		{
			cout << "                 " << endl
				<< "����: "<<b.arrhum[c].name<<"\t"
				<< "�Ա�: " << b.arrhum[c].sex << "\t"
				<< "����: " << b.arrhum[c].age << "\t"
				<< "�绰����: " << b.arrhum[c].call << "\t"
				<< "��ͥסַ: " << b.arrhum[c].addr << endl;
				
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
        cout << "���޴��ˣ�" << endl;
	}
	else
	{
		for (int i = c; i < a.count-1; i++)
		{
			a.arrhum[i] = a.arrhum[i + 1];
		}
		a.count--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
		system("cls");
}

void search(all& d,int e)
{
	if (e==-1)
	{
		cout << "���޴���!" << endl;
	}
	else
	{
	cout << "                 " << endl
		<< "����: " << d.arrhum[e].name << "\t"
		<< "�Ա�: " << d.arrhum[e].sex << "\t"
		<< "����: " << d.arrhum[e].age << "\t"
		<< "�绰����: " << d.arrhum[e].call << "\t"
		<< "��ͥסַ: " << d.arrhum[e].addr << endl;
	}
	system("pause");
	system("cls");
}

void change(all& a, int b)
{
	if (b == -1)
	{
		cout << "���޴��ˣ�" << endl;
	}
	else
	{
		cout << "1---�޸�����" << endl
			<< "2---�޸��Ա�" << endl
			<< "3---�޸�����" << endl
			<< "4---�޸ĵ绰����" << endl
			<< "5---�޸ļ�ͥסַ" << endl
			<< "����������������ֹ����" << endl;
		int c = 0;
		while(true)
		{
			cout << "����������" << endl;
            cin >> c;
			switch (c)
		  {
			case 1:
				{
					cout << "���޸�����" << endl;
					cin >> a.arrhum[b].name;
					break;
				}
			case 2:
			{
				cout << "���޸��Ա�" << endl;
				string sex;
				while (true)
				{
					cin >> sex;
					if (sex == "��" || sex == "Ů")
					{
						a.arrhum[b].sex = sex;
						break;
					}
					cout << "��������������" << endl;
				}
				break;
			}
			case 3:
			{
				cout << "���޸�����" << endl;
			    int age;
			    while (true)
			    {
				    cin >> age;
				    if (age >= 0 && age <= 150)
				    {
					a.arrhum[b].age = age;
					break;
				    }
				cout << "��������������" << endl;
			    }
				break;
			}
			case 4:
			{
				cout << "���޸ĵ绰����" << endl;
				cin >> a.arrhum[b].call;
				break;
			}
			case 5:
			{
				cout << "���޸ľ�ס��ַ" << endl;
				cin >> a.arrhum[b].addr;
				break;
			}
			default:
			{
				cout << "�޸����" << endl;
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
	cout << "���ٴ�ȷ���Ƿ�Ҫ���������ϵ��" << endl
		<< "1----��         2----��" << endl;
	int c = 0;
	cin >> c;
	switch (c)
	{
	case 1:
	{
		a.count = 0;
		cout << "ɾ���ɹ�" << endl;
		break;
	}
	case 2:
	{
		cout << "δ�����ϵ��" << endl;
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
			cout << "�����뽫Ҫɾ������ϵ��������" << endl;
			cin >> input.name;
            int checkresult=check(people, input.name);
			deletehum(people, checkresult);
			break;
		}
			
		case 4:
		{
			cout << "�����뽫Ҫ���ҵ���ϵ��������" << endl;
			cin >> input.name;
			int checkresult = check(people, input.name);
			search(people, checkresult);
			break;
		}

		case 5:
		{
			cout << "�����뽫Ҫ�޸ĵ���ϵ��������" << endl;
			cin >> input.name;
			int checkresult = check(people, input.name);
			change(people, checkresult);
			break;
		}
			
		case 6:
			deleteall(people);
			break;

		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;

		default:
			cout << "��Ч���֣�����������" << endl;
			break;
		}
	}

	
}