// n*m 공간을 a*a로 덮기

#include <iostream>

using namespace std;

int main(){
    long long n, m, a; // int로 받으면 중간 연산 결과도 int로 되니까
    cin >> n >> m >> a;

    long long ans = ((n + (a-1)) / a) * ((m + (a-1)) / a); // 최대 10**18이니 long long으로
    cout << ans;

    return 0;
}