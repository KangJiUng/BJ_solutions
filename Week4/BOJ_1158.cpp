//���� 1158�� �似Ǫ�� ����

#include <iostream>
#include <list>
using namespace std;

int main(void) {
    int N, K;
    list<int> L;

    cin >> N >> K;

    if (N == 1) { // N�� 1�̸� �׳� <1>�� ����ϰ� ����
        cout << "<1>";
        return 0;
    }
    else {
        for (int i = 1; i <= N; i++) { // 1~N ������ ���� ����Ʈ�� �߰�
            L.push_back(i);
        }

        list<int>::iterator iter = L.begin();

        cout << "<";

        while (L.size()) {
            for (int i = 1; i < K; i++) { // 1��° ������� K-1��° �������
                if (++iter == L.end()) { // ���� �ݺ��ڰ� ����Ʈ�� ���̸�
                    iter = L.begin(); // �ݺ��ڸ� �ٽ� ó������
                    continue;
                }
            }

            cout << *iter << ", "; // �ݺ��ڴ� * �����ڸ� ����Ͽ� �����̳� ������ ���Ҹ� ����Ű�� ������ �� �־����

            iter = L.erase(iter);

            iter = (iter == L.end()) ? L.begin() : iter; // ������ ���� �ڸ��� �̹� end�� ��� begin���� ����
        }

        cout << ">";
    }
}