// ���� 10451��: ���� ����Ŭ

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        int cnt = 0;

        cin >> N;

        vector<int> graph(N + 1);
        vector<bool> visited(N + 1, false);

        for (int i = 1; i <= N; ++i) {
            cin >> graph[i];
        }

        for (int i = 1; i <= N; ++i) { // ������ ���Ϳ� ����� ���� �ϳ��� �����鼭 �ݺ�
            if (!visited[i]) {
                int node = i; // �׳� i�� ���� �ȵ�
                while (!visited[node]) { // �湮���� ���� node��
                    visited[node] = true;  // �湮 ó��
                    node = graph[node]; // �������� ������Ű���� ����
                }
                cnt++; // ����Ŭ Ƚ�� �߰�
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
