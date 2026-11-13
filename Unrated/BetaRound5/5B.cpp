// 가운데 정렬 + 테두리 만들기
// 가운데 정렬 안되면 왼쪽 여백을 1칸 적게 배치하는 경우와 오른쪽 여백을 1칸 적게 배치하는 경우를 번갈아 적용
// 처음은 왼쪽에 더 가깝게 배치 시작

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    vector<string> v;

    string s;
    int max_len = 0;
    while (getline(cin, s)){
        v.push_back(s);
        max_len = max(max_len, (int)s.size());
    }

    cout << string(max_len+2, '*') << '\n';

    int add_pos = 1; // right에서 시작
    for (const string& s : v){ // 복사하지 않고 참조
        int length = (int) s.size();

        int space = max_len - length;
        int left_space = space / 2;
        int right_space = space / 2;
        if (space % 2 == 1){
            if (add_pos == 0) left_space++;
            else right_space++;
            add_pos = 1 - add_pos;
        }
        cout << '*' << string(left_space, ' ') << s << string(right_space, ' ') << '*' << '\n';
    }

    cout << string(max_len+2, '*') << '\n';

    return 0;
}