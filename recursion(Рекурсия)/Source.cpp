#include<iostream>
using namespace std;
//������������ �������
int fact(int num) {
	if (num <= 1)
		return 1;
		return num * fact(num - 1);
}














int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//������
	cout << "������� �����: ";
	cin >> n;
	cout <<n<<"! = " << fact(n)<<endl;



	 








	return 0;
}