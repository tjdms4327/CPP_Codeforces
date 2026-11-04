// x까지 최소 걸음 (걸음당 1, 2, 3, 4, or 5)

#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;

    int stride = (x + 4) / 5; // 올림 나눗셈
    cout << stride;

    return 0;
}