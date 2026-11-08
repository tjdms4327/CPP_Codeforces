// 다른 색 4개가 필요
// 추가 구매 몇 개?

#include <iostream>
#include <set>

using namespace std;

int main(){
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> s = {s1, s2, s3, s4};
    cout << 4 - s.size() << '\n';

    return 0;
}