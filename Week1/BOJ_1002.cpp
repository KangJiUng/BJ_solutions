// ���� 1002��: �ͷ�

#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) { //�� �� ������ �Ÿ� ����
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
	int T;
	int x1, y1, r1, x2, y2, r2;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double d = distance(x1, y1, x2, y2); //�� ���� �߽� ������ �Ÿ�

		if (x1 == x2 && y1 == y2) { //(x1, y1)�� (x2, y2)�� ��ǥ�� ������ ���
			if (r1 == r2) { //�������� ���� ���
				cout << "-1" << endl; //��ǥ�� ���� ������ ����
			}
			else if(r1 != r2) { //�������� �ٸ� ���
				cout << "0" << endl; //��ǥ�� ���� 0��
			}
		}
		else { //(x1, y1)�� (x2, y2)�� ��ǥ�� �ٸ� ���
			if (r1 + r2 < d || abs(r1 - r2) > d) { //���� ������ �ְų� �ϳ��� �����ϴ� ���
				cout << "0" << endl; //��ǥ�� ���� 0��
			}
			else if (r1 + r2 == d || abs(r1 - r2) == d) { //���� ���� �����ϰų� �����ϴ� ���
				cout << "1" << endl; //��ǥ�� ���� 1��
			}
			else if (abs(r1 - r2) < d && abs(r1 + r2) > d) { //���� �� ������ ������ ���
				cout << "2" << endl; //��ǥ�� ���� 2��
			}
		}
	}
}