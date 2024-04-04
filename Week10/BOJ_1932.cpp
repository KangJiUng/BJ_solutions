// ���� 1932��: ���� �ﰢ��

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int max_sum = 0;
    int triangle[501][501];

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> triangle[i][j];
        }
    }

    for (int i = 0; i < n; i++) { // ���� ���� ����...
        for (int j = 0; j <= i; j++) {
            if (j == 0) { // ù° ��(�� ����)�� �밢�� ���� ������ ���õ�
                triangle[i][j] += triangle[i - 1][0];
            }
            else if (i == j) { // ��� ���� �ε��� ���ڰ� ���� ���(�� ������)�� �밢�� ���� ������ ���õ�
                triangle[i][j] += triangle[i - 1][j - 1];
            }
            else { // �밢�� �� ���� �� �� �ϳ� ����
                triangle[i][j] += max(triangle[i - 1][j - 1], triangle[i - 1][j]);
            }
            max_sum = max(max_sum, triangle[i][j]); // �ִ� ����
        }
    }

    cout << max_sum << '\n';

    return 0;
}



