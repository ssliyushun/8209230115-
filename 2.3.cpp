#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "�����������ε�������:";
	cin >> a >> b >> c;
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		cout << "���ܹ���������" << endl;
	}
	else
	{
		d = a + b + c;
		cout << "�ܳ�Ϊ��"  << d << endl;
		if(a==b||a==c||b==c)
		{
			cout << "�ǵ���������" << endl;
		}
		else
		{
			cout << "���ǵ���������" << endl;
		}
	}
	return 0;
}//�ܽ᣺���ֻ��߿�������