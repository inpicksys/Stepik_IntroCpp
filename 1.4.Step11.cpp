/*
	1.4 �������� ��������. ��� 11

	��������� ����� ����� �� ���������, ����������� ��� ���������. 
	���� ��� ��������� ������ ��������� �����, ����������, 
	����� �� ����� ������� � ������ ������ �� ������ ����� �����.

	������ ������� ������
	��������� �������� �� ���� ������ ����� �� 1 �� 8 ������, 
	�������� ����� ������� � ����� ������ ������� ��� ������ ������, ����� ��� ������ ������.
	������ �������� ������
	��������� ������ ������� YES, ���� �� ������ ������ ����� ����� ����� ������� �� ������ 
	��� NO � ��������� ������.
	Sample Input 1: 1 1 2 2
	Sample Output 1: YES
*/
#include <iostream>

using namespace std;

int main() {
	while (true) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int x, y;
		x = x1 - x2;
		y = y1 - y2;
		if (x * x == y * y || x1 == x2 || y1 == y2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	return 0;
}