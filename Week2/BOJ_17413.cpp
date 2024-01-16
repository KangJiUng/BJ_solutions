// 백준 17413번 단어 뒤집기 2

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string S;
	vector<char> v;

	getline(cin, S);

	for (int i = 0; i < S.length(); i++)
		if (S[i] == '<') {
			while (S[i] != '>') {
				v.push_back(S[i]);
				i++;
			}
			v.push_back(S[i]); // '>'도 추가
			for (int j = 0; j < v.size(); j++) {
				cout << v[j];
			}
			v.clear();
		}
		else {
			v.push_back(S[i]);
			if (S[i] == ' ') {
				reverse(v.begin(), v.end());
				for (int j = 1; j < v.size(); j++) {
					cout << v[j];
				}
				cout << " ";
				v.clear();
			}
			if (S[i] == '<') {
				reverse(v.begin(), v.end());
				for (int j = 1; j < v.size(); j++) {
					cout << v[j];
				}
				v.clear();
			}
			else {
				reverse(v.begin(), v.end());
				for (int j = 1; j < v.size(); j++) {
					cout << v[j];
				}
				v.clear();
			}
		}
}