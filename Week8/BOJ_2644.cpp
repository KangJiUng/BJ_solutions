#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n, m, mem1, mem2, parent, child;
    cin >> n;
    cin >> mem1 >> mem2;
    cin >> m;

    vector<vector<int>> relation(n + 1); // ���� ���� 2���� ����(�� ��忡 ���� ���õ� ��带 �����ϱ� ���� 2����)
    vector<int> distance(n + 1, 0); // �� mem ������ �Ÿ� ���� ����
    queue<int> q;

    for (int i = 0; i < m; i++) {
        cin >> parent >> child;
        relation[parent].push_back(child); // ����� Ʈ�� ����
        relation[child].push_back(parent);
    }

    q.push(mem1); // ã�ƾ� �ϴ� �� �� �� �� ���� ����

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        if (x == mem2) {  // ã�ƾ� �ϴ� �� �� ������ �� �� ã���� ��
            cout << distance[x] << '\n';
            return 0;
        }

        for (int i = 0; i < relation[x].size(); i++) { 
            int y = relation[x][i];

            if (distance[y] == 0) { // ���� �湮���� ���� �����
                q.push(y);
                distance[y] = distance[x] + 1;
            }
        }
    }
    cout << "-1" << '\n'; // ���� Ʈ���� �����Ƿ� ģô���� x
    return 0;
}
