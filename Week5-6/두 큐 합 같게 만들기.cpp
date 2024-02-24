// 2022 KAKAO TECH INTERNSHIP �� ť �� ���� �����

#include <string>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    queue<int> q1, q2;
    long long sum1 = 0, sum2 = 0;

    for (auto x : queue1) { // �ݺ��� ��� auto�� ����� ���� ���
        sum1 += x;
        q1.push(x);
    }

    for (auto x : queue2) {
        sum2 += x;
        q2.push(x);
    }

    // �ּ� Ƚ�� -> ť�� ���̸�ŭ �� �� �� ���� ���� �־��� ��� x 2 (ť�� 2��)
    int N = 4 * queue1.size() + 1; 
     
    for (int i = 0; i < N; i++) {
        if (sum1 == sum2) { // �� ť�� ���� ������ ������
            return i; // Ƚ�� �״�� ��ȯ
        }
        // ������ ū ���� ���Ҹ� ���� ���� ť�� �ѱ�� ���� ť������ pop
        if (sum1 < sum2) {
            int x = q2.front();
            sum1 += x; 
            sum2 -= x;
            q1.push(x);
            q2.pop();
        } 
        else { 
            int x = q1.front();
            sum2 += x;
            sum1 -= x;
            q2.push(x);
            q1.pop();
        }
    }
    return -1; // �ݺ����� �� ���Ƶ� ������ ���� ������ -1 ��ȯ
}