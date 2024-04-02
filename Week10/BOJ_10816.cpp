// ���� 10816��: ���� ī��2
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N, M, n;
    map<long long, long long> cards;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> n;
        cards[n]++; // �ش� ���ڸ� �ε����� ���� value�� ++
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> n;
        cout << cards[n] << ' '; // �״�� value �� ���
    }

    return 0;
}

/* lowerbound upperbound ���
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N, M, n;
    long long cards[500002];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> n;
        cards[i] = n;
    }

    sort(cards, cards + N);

    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> n;
        cout << upper_bound(cards, cards + N, n) - lower_bound(cards, cards + N, n) << ' ';
    }
}
*/