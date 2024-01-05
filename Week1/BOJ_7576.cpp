//���� 7576�� �丶��

#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

//���ÿ����÷ο� �߻����� �������� ���(�Ǵ� �����Ҵ��� ������ش�.)
int N, M;
int days = 0;
int tomato[MAX][MAX];
int visited[MAX][MAX]; //�湮 ���� �� �ҿ� �ϼ��� ����ϴ� �迭
int dx[] = { 1, 0, -1, 0 }; //�����¿� �̵��� ���� �迭
int dy[] = { 0, 1, 0, -1 };
bool check = false; //�丶�䰡 ��� �;����� Ȯ���ϴ� bool ����
queue<pair<int, int>> q;

int main() {
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomato[i][j];
			visited[i][j] = -1; //�湮 ���� �ʱ�ȭ

			if (tomato[i][j] == 1) { //�;��ִ� �丶�䰡 �ִ� ���
				q.push({ i, j }); //queue�� push
				visited[i][j]++; //�湮������ ǥ��
			}
		}
	}

	while (!q.empty()) { //queue�� �� ������(���� �丶�䰡 ���� ������)
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) { //�����¿��� �丶�� ���� Ȯ��
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && ny >= 0 && N > nx && M > ny) { //���� ������
				if (visited[nx][ny] == -1 && tomato[nx][ny] == 0) { //�湮���� �ʾҰ� ���� ���� �丶���� ���
					q.push({ nx, ny }); //���� ���� ���� �丶���̹Ƿ� q�� push
					visited[nx][ny] = visited[x][y] + 1; //�ҿ� �ϼ� +1
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (days < visited[i][j]) { //0���� ���� �ɸ� ���� �ִ� ���
				days = visited[i][j]; //days�� ����(�ִ� �ϼ�)
			}
			if (tomato[i][j] == 0 && visited[i][j] == -1) { //���� ���� �丶�䰡 �ְ�, �� �丶�並 �湮���� ���� ���
				days = -1;
				check = true; //�丶�䰡 ��� ���� ����
				break;
			}
		}
		if (check) break;
	}
	cout << days;
}
