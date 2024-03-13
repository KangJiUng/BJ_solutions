// ���� 16173�� ������ �f��

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<vector<int>> game_map(N, vector<int>(N)); // 2���� ���� �ʱ�ȭ ��� ����
	queue<pair<int, int>> q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> game_map[i][j];
		}
	}

	q.push(make_pair(0, 0)); // ť�� ������ �߰�

	while (!q.empty()) { // ť�� �� ������ �ݺ�
		int x = q.front().first; // X ��ǥ ����
		int y = q.front().second; // Y ��ǥ ����
		int step = game_map[x][y]; // ĭ�� ����
		q.pop(); // ���� ��ġ pop

		if (step == -1) { // ���� �ִ� ��ġ�� -1�̸� ���� ����
			cout << "HaruHaru";
			return 0;
		}
		if (step == 0) { // ���� �ִ� ��ġ�� 0�̸� ���̻� �̵��� �� �����Ƿ� ����
			continue;
		}

		if (x + step < N) { // ������ ����
			q.push(make_pair(x + step, y));
		}
		if (y + step < N) { // ���� ����
			q.push(make_pair(x, y + step));
		}
	}

	cout << "Hing"; // ť�� �� ����������� -1�� ���� �Ұ���
	return 0;
}