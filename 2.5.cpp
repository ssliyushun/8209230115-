#include<iostream>
using namespace std;
int main()
{
	int i(0), j(0), k(0), l(0);
	cout << "������һ���ַ���";
	for (char c; 1;)
	{
		cin >> noskipws;
		cin >> c;
		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) { i++; }
		else if (c >= 49 && c <= 57) { k++; }
		else if (c == 32) { j++; }
		else if (c == '\n') { break; }
		else { l++; }
	}
	cout << "Ӣ����ĸ����Ϊ" << i << endl;
	cout << "�ո����Ϊ" << j << endl;
	cout << "�����ַ�����Ϊ" << k << endl;
	cout << "�����ַ�����Ϊ" << l << endl;
	return 0;
}