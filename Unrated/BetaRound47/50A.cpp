// m*n matrix에 2*1 block을 얼마나 넣을 수 있는가
// block 회전 가능

#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int answer = (m*n) / 2;
    cout << answer << '\n';

    return 0;
}