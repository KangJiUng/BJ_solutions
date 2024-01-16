// ���� 1931�� ȸ�ǽ� ����

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first < b.first; //������ �ð��� ������ ���� �ð��� ���� ������ ����
    }
    return a.second < b.second; //������ �ð��� ���� ������ ����
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int cnt = 0;
    vector<pair<int, int>> pv; //ȸ�� ���۽ð�, ������ �ð�

    cin >> N;

    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        pv.push_back(make_pair(start, end));
    }

    sort(pv.begin(), pv.end(), compare); 

    int endtime = 0; //ó�� ȸ�Ǵ� ������ �ð��� ��� �켱 ���õ�

    for (int i = 0; i < pv.size(); i++) {
        if (pv[i].first >= endtime) { //���� ȸ���� ���۽ð��� ���� ȸ���� ������ �ð����� ũ�ų� ������
            endtime = pv[i].second; //���� ȸ���� ������ �ð��� ����� ����
            cnt++; //ȸ�� �߰�
        }
    }

    cout << cnt << "\n";
}

