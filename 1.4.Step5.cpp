/*
	1.4 �������� ��������. ��� 5

	���� ��� ����� �����. ������� ���������� �� ��� (��������� ������ ������� ����� ���� ����� �����). 
	��� ���������� � ���� ������ ���������� �����, ������� �� ������, ��� ����� ������.

	������ ������� ������:
	�������� ��� �����.
	������ �������� ������:
	�������� ����� �� ������.
	Sample Input: 1 2 3
	Sample Output: 3
*/
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	while (true) {
		cin >> a >> b >> c;
		if (a < b) {
			a = b;
		}
		if (a < c) {
			a = c;
		}
		cout << a << endl << endl;
	}
}