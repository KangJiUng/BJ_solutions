//���� 1654�� ���� �ڸ���

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int K, N;
    int length;
    vector<int> cables; // ������ ���̸� ������ ����

    cin >> K >> N;

    for (int i = 0; i < K; ++i) {
        cin >> length;
        cables.push_back(length);
    }

    sort(cables.rbegin(), cables.rend()); // ������ ���� �������� ����

    int low = 1;
    int high = cables[0]; // �̺� Ž���� ���� ���۰� �� ��(�������� ���������Ƿ� index 0) ����

    while (low <= high) {
        int mid = (low + high) / 2;
        int count = 0;

        for (int i = 0; i < K; ++i) { // ���� ���̷� ���� �� �ִ� ������ ���� ���
            count += (cables[i] / mid);
        }

        if (count >= N) {  // N�� �̻��� ������ ���� �� �ִ� ���(mid �� �Ʒ��δ� ������ N�� �̻��� ������)
            low = mid + 1;
        }
        else { // N���� ���� �� ���� ���
            high = mid - 1;
        }
    }

    // �ִ� ������ ���� ���
    cout << low - 1; //�Ǵ� high...
}
