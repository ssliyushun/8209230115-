#include<iostream>
using namespace std;
int main()
{
	int a, b,c(2), d(1);
	cout << "������������������";
	cin >> a >> b;
	for(;;c++)
	{
		if (c == a || c == b)
		{
			if (a % b != 0&&b % a != 0)
			{
				cout << "û�д���1�����Լ��" << endl;
				break;
			}
			else 
			{
				cout << "���Լ��Ϊ��"<<((a>b)?b:a)<<endl;
				break;
			}
		}
		if(a%c==0&&b%c==0)
		{
			cout << "���Լ��Ϊ��" << c<<endl;
			break;
		}
	}
	for(;;d++)
	{
		if (d % a == 0 && d % b == 0)break;
	}
	cout << "��С������Ϊ��" << d << endl;
}