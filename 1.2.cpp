#include<iostream>
using namespace std;
int main()
{
	double r, h, V;
	cout << "������뾶��׶�ߣ�" ;
	cin >> r >> h;
	const float PI = 3.14;
	V = (PI * r * r * h) / 3;
	cout << "Բ׶�����Ϊ��" << V << endl;
	return 0;
}