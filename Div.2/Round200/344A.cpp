// 자석 순서대로 추가할 때 그룹 수? (인력/척력 고려)

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string prev;
    cin >> prev;

    int count_group = 1;

    string cur;
    for (int i = 1; i < n; i++){
        cin >> cur;
        if (prev != cur) {
            count_group++;
            prev = cur;
        }
    }

    cout << count_group << '\n';

    return 0;
}