#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:"<< testUnint << endl;
	cout << "output in Oct unsigned int type:" << oct << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//Ϊʲô���Ϊ-2?: ����Ϊ65534������short int�ķ�Χ��
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16�������
	//��ע���˽��Ƶ�������˵ڶ���cout�С�
	cout << "����ʵ����3.14159��ת����intΪ��" << static_cast<int>(3.14159) << endl;
	system("pause");
	return 0;
}
