// ���� 20291�� ���� ����

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
	int N;
	string file_name;
	map<string, int> file_extension; // Ȯ����-Ȯ���� ������ �����ϱ� ���� map ����

	cin >> N;

	for (int i = 0; i < N; i++) {
		int cnt = 0;
		cin >> file_name;
		file_name.erase(0, file_name.find('.') + 1); // ó������ .���� ����

		if (file_extension.find(file_name) == file_extension.end()) { // Ȯ���ڸ��� map�� ������
			file_extension.insert(make_pair(file_name, cnt)); // map�� ����
			file_extension[file_name]++; // ���� �� ���� +1
		}
		else {
			file_extension[file_name]++; // Ȯ���ڸ��� map�� ������, �� Ȯ���� ���� +1 
		}
	}
	for (const auto map : file_extension) {
		cout << map.first << " " << map.second << '\n';
	}

	return 0;
}