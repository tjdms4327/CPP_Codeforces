// n개의 방에 각각 pi명 있고 qi명까지 숙박 가능
// 두 명이 들어갈 수 있는 방의 수?

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int pi, qi;
    int ans = 0;
    for (int i = 0; i < n; i++){
        cin >> pi >> qi;
        if (qi - pi >= 2) ans++;
    }

    cout << ans << '\n';

    return 0;
}
