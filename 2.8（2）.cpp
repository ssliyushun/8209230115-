#include<iostream>
using namespace std;
int main()
{
	float a;
	cout << "������һ������";
	cin >> a;
	if (a < 0)
	{
		cout << "����û��ƽ����";
	}
	else
	{
		float m(a), n;
		for (;;)
		{
			n = (m + a / m) / 2;
			if (m - n > -1e-10 && m - n < 1e-10) { break; }
			m = n;
		}
		cout << "������ƽ����Ϊ:" << n << endl;
	}
	return 0;
}