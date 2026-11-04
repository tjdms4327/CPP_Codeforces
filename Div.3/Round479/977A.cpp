// 마지막 자리가 0 아니면, 1 빼기
// 마지막 자리가 0 이면, 10으로 나누기
// n에서 시작해서 k번 동작

#include <iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++){
        if (n % 10 == 0) n /= 10;
        else n -= 1;
    }

    cout << n << '\n';

    return 0;
}