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
	从输入缓冲区里 读取一个字符,
	如果字符不等于 回车符 就继续 读取字符
	*/
	while ((tmp = getchar()) != '\n');

}

int main(void)
{
	/*
	
	string inftion;

	cout << "请输入学生的信息:" << endl;
	while (getline(cin, inftion))	//读一行,直到输入回车符才结束
	{

		if (inftion.empty())//判断输入的是否为空字符 如 回车
		{
			cout << "输入结束" << endl;
			break;
		}
		else
		{
			cout << "*********************************"<<endl;
			cout << "长度:" << size(inftion) << endl;
			cout << "长度:" << inftion.length() << endl;
			cout << "********************************" << endl;
			cout << "请输入学生的信息:" << endl;
			continue;

		}
	}
	*/

	/*int a, b, c;

	for (int i = 100; i <= 999; i++)
	{
		a = i % 10;			//求个位
		b = i / 10 % 10;	//求十位
		c = i / 100;		//求百位

		if ((b * b * b)+ (a * a * a)+(c * c * c)==i)
		{
				cout << i << endl;
			
		}


	}
	*/

	

	int suv[32];
	int n;
	
	cout << "请输入一个整数:";
	cin >> n;

	//判断用户是否输入错误的字符
	if (n == 0)
	{
		cout << "请输入一个不是零的数.";
	}

	int k = 0;//数组suv的下标
	for (int i = n; i;)
	{
		suv[k] = i % 2;
		k++;
		i = i / 2;
	}
	k--;//减去一个下标
	while (k>=0)
	{
		printf("%d",suv[k--]);
	}
	

	




	system("pause");

	return 0;
}


//break;// 跳出  本层 循环
//continue;	跳出 本次 循环


