// ���� 1388��: �ٴ� ���

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
	int cnt = 0;

	cin >> N >> M;

	vector<vector<char>> floor(N, vector<char>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> floor[i][j];
		}
	}

	for (int i = 0; i < N; i++) { // '-'�� ���� �࿡�� Ž���ϹǷ�
		char previous = '.'; // ���� �ٲ�鼭 or �ٸ� ���ڷ� �ٲ�� ���� Ȯ���� ���� ����
		for (int j = 0; j < M; j++) {
			if (floor[i][j] == '-') {
				if (floor[i][j] != previous) { // ��� ��� �ٲ�
					cnt++;
				}
			}
			previous = floor[i][j]; // �湮������ ǥ��
		}
	}

	for (int j = 0; j < M; j++) { // '|'�� ���� ������ Ž���ϹǷ�
		char previous = '.';
		for (int i = 0; i < N; i++) {
			if (floor[i][j] == '|') {
				if (floor[i][j] != previous) {
					cnt++;
				}
			}
			previous = floor[i][j];
		}
	}

	cout << cnt;
	return 0;
}