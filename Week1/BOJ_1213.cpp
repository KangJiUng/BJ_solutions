//���� 1213�� �Ӹ���� �����
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() {
	int cnt = 0;
	string s, front, mid, back;
	map<char, int> mp;

	cin >> s;

	for (char c : s) mp[c]++; //�� ���ĺ��� ���� ����(����) �Ҵ�

	if (s.length() % 2 == 0) { //���ڿ��� ���̰� ¦���� ���
		for (auto iter : mp) {
			if (iter.second % 2 != 0) { //���ĺ��� ������ Ȧ���� ��찡 ����
				cout << "I'm Sorry Hansoo"; //�Ӹ���� ���� �Ұ�
				exit(0); //�ݺ��� ����
			}
		}
	}
	else { //���ڿ��� ���̰� Ȧ���� ���
		for (auto iter : mp) {
			if (iter.second % 2 != 0) { //���ĺ��� ������ Ȧ���� ��� ī��Ʈ
				mid = iter.first;
				cnt++;
			}
			if (cnt >= 2) { //Ȧ������ ���ĺ� ���� 2�� �̻�
				cout << "I'm Sorry Hansoo"; //�Ӹ���� ���� �Ұ�
				exit(0);
			}
		}
	}

	for (auto iter : mp) { //front, back ����
		for (int i = 0; i < iter.second / 2; i++) { //���ĺ� ������ 1/2��ŭ ����
			front += iter.first; //string �ڷ����� + ��� ����
			back += iter.first;
		}
	}
	reverse(back.begin(), back.end()); //�Ӹ���� �ϼ��� ���� back ���ڿ� reverse
	cout << front + mid + back;
}