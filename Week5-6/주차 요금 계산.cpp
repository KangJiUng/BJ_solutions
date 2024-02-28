// 2022 KAKAO BLIND RECRUITMENT: ���� ��� ���

#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<string, vector<string>> get_in; // �� ������ ���� �ð� ����
    map<string, int> time_of_use; // �� ������ ���� �̿� �ð� ����

    for (string record : records) {
        stringstream ss(record);
        string time, carNum, info;
        ss >> time >> carNum >> info;

        // ���� ������ ���
        if (info == "IN") {
            get_in[carNum].push_back(time);
        }
        else {
            
        }
    }

    return answer;
}