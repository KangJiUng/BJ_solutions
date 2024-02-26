// ���� �ڵ� ç���� ���� 1: �ﰢ ������

#include <string>
#include <vector>
#include<iostream>
#include<cstring>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int snail[n][n];
    int sum = 0;
    memset(snail, 0, sizeof(snail));

    for (int i = 1; i <= n; i++) { // �����̿� ä���־���ϴ� ����
        sum += i;
    }

    int count = 0;
    int X = -1;
    int Y = 0;

    while (count != sum) {  // ��� ���ڸ� ��� ä������ ������
        for (int i = 0; i < n; i++) { // �Ʒ��� �̵��ϸ� ä������
            X += 1; // ���ε��� +1
            if (snail[X][Y] == 0) { // ���ڰ� ���ٸ�(�迭�� ������ִٸ�)
                snail[X][Y] = count + 1;
                count += 1;
            }
            else { // �̹� ���ڰ� �ִٸ� �� ĭ���� �̵� �� ����(�ﰢ���� ������)
                X -= 1;
                break;
            }
        }

        for (int i = 0; i < n - 1; i++) { // ���������� �̵��ϸ� ä�� ����
            if (count == sum) { 
                break;
            }

            Y += 1; // ���ε��� +1
            if (snail[X][Y] == 0) {
                snail[X][Y] = count + 1;
                count += 1;
            }
            else {
                Y -= 1;
                break;
            }
        }

        for (int i = 0; i < n - 2; i++) { // �밢�� ���� �̵��ϸ� ä������
            X -= 1;
            Y -= 1;
            if (snail[X][Y] == 0) {
                snail[X][Y] = count + 1;
                count += 1;

            }
            else {
                X += 1;
                Y += 1;
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n && snail[i][j] != 0; j++) { // ���� �ȿ� �ִ� ���ڵ��� ������� ���Ϳ� ����
            answer.push_back(snail[i][j]);
        }
    }

    return answer;
}