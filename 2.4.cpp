#include<iostream>
using namespace std;
int main()
{
	double a, b ,c;
	cout << "��������������������:";
	cin >> a >> b;
	c = a + b;
	cout << "�ӷ����Ϊ��" << c<<endl;
	c = a - b;
	cout << "�������Ϊ" << c << endl;
	c = a * b;
	cout << "�˷����Ϊ" << c << endl;
	if (b == 0)
	{
		cout << "����Ϊ�㣬���ɳ�" << endl;
	}
	else
	{
		c = a / b;
		cout << "�������Ϊ" << c << endl;
	}
	if (b == 0)
	{
		cout << "����ȡ��" << endl;
	}
	else
	{

		c = int(a) % int(b);//��Ϊȡ�����Ϊ����������ǿ��ת��doubleΪint
		cout << "ȡ����Ϊ" << c << endl;
	}

}//������Ƿ���ʲô��˼()δ����