// a에 1을 더하기 가능
// a가 b로 나누어떨어지도록 하는 최소 연산 횟수?

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;

        int quotient = a / b;
        if (a % b == 0) cout << "0\n";
        else cout << (quotient+1) * b - a << '\n';
    }

    return 0;
}