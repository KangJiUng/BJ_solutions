#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> sequence, int k) {
	vector<int> answer;

	int len = sequence.size(); // ���ŵ� �κ� ������ ����
	int sum = 0, min = len; // start�� end������ �κ� ������ ��
	pair<int, int> p = { 0, sequence.size() - 1 }; // �κ� ������ start�� end�� ����

	for (int start = 0, end = 0; start < min;) {
		if (sum == k && len > (end - start)) { // k�� ���� ���� �κ� ������ ���̰� �������� ª����
			p.first = start;
			p.second = end - 1; // end�� �κ� ������ �� �ڸ�, �� ���� ������ ������ ���� �ε��� ���� ����Ű�� ����
			min = (end - start);
		}
		else if (sum < k && end < min) { // k���� ���� ������ �� ���� ���� ��Ŵ
			sum += sequence[end++];
		}
		else { // k���� ���� ũ�� ���� ���� ������ ���
			sum -= sequence[start++];
		}
	}

	answer.push_back(p.first);
	answer.push_back(p.second);

	return answer;
}