// n까지 자연수 중 홀수를 오름차순 나열
// 그 다음 짝수를 오름차순 나열

#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;

    long long half = (n+1) / 2;
    if (k <= half) { // 홀수 파트
        cout << 2*k - 1 << '\n';
    } else {
        k -= half;
        cout << 2*k << '\n';
    }

    return 0;
}