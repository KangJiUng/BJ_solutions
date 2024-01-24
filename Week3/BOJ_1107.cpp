// ���� 1107�� ������

#include <iostream>
#include <algorithm>
using namespace std;

bool check[10]; //���峭 ��ư Ȯ�� �迭

int check_broken(int n) { //���峭 ���ڰ� ������ ä�� pass
	int len = 0;
	if (n == 0) {
		if (check[0]) return 0;
		else return 1; //�ڸ��� 1 ��ȯ
	}
	while (n > 0) {
		if (check[n % 10]) return 0;
		n /= 10;
		len++;
	}
	return len;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;

	cin >> N >> M;

	int result = abs(N - 100); //+, - ��ư���� �̵��ϴ� Ƚ���� �ʱⰪ���� ����

	for (int i = 0; i < M; i++) {
		int button_num;
		cin >> button_num;
		check[button_num] = true; //���峭 ���� ��ư�� true�� ����
	}

	if (N == 100) { //N�� 100�̸� ���� ä���̹Ƿ� �̵��� �ʿ� X
		cout << "0";
		return 0;
	}

	for (int i = 0; i <= 9999999; i++) { //���Ƿ�
		int len = check_broken(i); //���峭 ���ڰ� ������ ä���� �ڸ��� ���� ��ȯ

		if (len) {
			result = min(result, len + abs(N - i));
		}
	}
	cout << result;
}