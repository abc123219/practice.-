#include <iostream>

#include <windows.h>
using namespace std;
#define MAX_AGE = 34

#include <string>

#include <stdio.h>



void add() 
{
	char tmp;
	/*
	�����뻺������ ��ȡһ���ַ�,
	����ַ������� �س��� �ͼ��� ��ȡ�ַ�
	*/
	while ((tmp = getchar()) != '\n');

}

int main(void)
{
	/*
	
	string inftion;

	cout << "������ѧ������Ϣ:" << endl;
	while (getline(cin, inftion))	//��һ��,ֱ������س����Ž���
	{

		if (inftion.empty())//�ж�������Ƿ�Ϊ���ַ� �� �س�
		{
			cout << "�������" << endl;
			break;
		}
		else
		{
			cout << "*********************************"<<endl;
			cout << "����:" << size(inftion) << endl;
			cout << "����:" << inftion.length() << endl;
			cout << "********************************" << endl;
			cout << "������ѧ������Ϣ:" << endl;
			continue;

		}
	}
	*/

	/*int a, b, c;

	for (int i = 100; i <= 999; i++)
	{
		a = i % 10;			//���λ
		b = i / 10 % 10;	//��ʮλ
		c = i / 100;		//���λ

		if ((b * b * b)+ (a * a * a)+(c * c * c)==i)
		{
				cout << i << endl;
			
		}


	}
	*/

	

	int suv[32];
	int n;
	
	cout << "������һ������:";
	cin >> n;

	//�ж��û��Ƿ����������ַ�
	if (n == 0)
	{
		cout << "������һ�����������.";
	}

	int k = 0;//����suv���±�
	for (int i = n; i;)
	{
		suv[k] = i % 2;
		k++;
		i = i / 2;
	}
	k--;//��ȥһ���±�
	while (k>=0)
	{
		printf("%d",suv[k--]);
	}
	

	




	system("pause");

	return 0;
}


//break;// ����  ���� ѭ��
//continue;	���� ���� ѭ��


