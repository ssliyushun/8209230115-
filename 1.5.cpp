#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	int i(0),k;
	cout << "�����뻪���¶ȣ�";
	cin >> a;
	b = (5.0 / 9.0) * (a - 32.0);
	k = b;
	for(;k>0;i++)
	{
		k = k / 10;
	}
	i += 2;
	cout << "���϶�Ϊ��" <<setprecision(i)<< b << endl;
	return 0;
}