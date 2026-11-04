// 바나나 가격은 첫 바나나부터 k, 2k, 3k, ...
// 바나나 w개 사려면 필요한 달러는? (현재 n달러 있음)

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_price = k * (w * (w+1) / 2);
    int need = max(0, total_price - n);

    cout << need;

    return 0;
}