//���� 11725�� Ʈ���� �θ� ã��

#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

int node[MAX]; //�� ��忡 ���� �θ� ��带 �����ϴ� �迭
bool visited[MAX] = { false }; //�� ��带 �湮������ ǥ���ϴ� �迭
vector<int> v[MAX]; //������ Ʈ��(��� ���Ḹ)�� �����ϴ� ����

void dfs(int k) {
    visited[k] = true; //�湮������ ǥ��
    for (int i = 0; i < v[k].size(); i++) {
        int parent = v[k][i]; 
        if (!visited[parent]) { //�湮���� ���� �����
            node[parent] = k; //���� ��忡 ����� ��带 �θ� ���� �켱 ����
            dfs(parent); //���ȣ��
        }
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++) { //��° �ٺ��� N-1���� �ٿ� Ʈ�� �󿡼� ����� �� ������ �־���
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    for (int i = 2; i <= N; i++) {
        cout << node[i] << "\n";
    }
}