// 이웃한 요소 위치 바꾸기
// 1을 중앙에 배치

#include <iostream>
#include <cstdlib> // 절댓값 사용

using namespace std;

int main() {
    int cur;
    int x, y;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> cur;
            if (cur == 1) {
                x = i;
                y = j;
            }
        }
    }

    int ans = abs(x - 2) + abs(y - 2);
    cout << ans << '\n';

    return 0;
}