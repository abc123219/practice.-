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

	
	/*
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
	*/
	
	/*
	i  j
	123 456 789
	��ת789 456 123

	321 654 987			987 654 321
	789 456 123			789 456 123
	*/
	char str[256];
	int i = 0;//�±�
	cout << "������һ�仰:";
	gets_s(str);

	while (str[i])//str[i]������'\0'    '\0'==0  0=��
	{
		//�����ո�
		//��ѭ��������,str[i]���ڵ�һ���ַ�
		while (str[i] == ' ')i++;
		int j = i;

		//��ѭ��������,str[j]�������һ���ַ�����һ���ַ�
		while (str[j] && str[j] != ' ')j++;

		//������ת�����ַ�
		//ȷ�����ʵķ�Χ
		for (int k1 = i, k2 = j - 1; k1 < k2; k1++, k2--)
		{
			char tmp = str[k1];
			str[k1] = str[k2];
			str[k2] = tmp;
		}
		
		i = j;
	}
	cout << str << endl;

	//��ǰi=������'\0'
	//�����ת
	for (int k1 = 0, k2 = i - 1; k1 < k2; k1++, k2--)
	{
		char tmp = str[k1];
		str[k1] = str[k2];
		str[k2] = tmp;
	}
		
	
	cout << str << endl;
	
	system("pause");

	return 0;
}


//break;// ����  ���� ѭ��
//continue;	���� ���� ѭ��


