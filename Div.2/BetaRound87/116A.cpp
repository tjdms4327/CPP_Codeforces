// 정류장에서 ai명 내리고, bi명 탑승 (내리는 승객 수는 전차 내 승객 수보다 많을 수 없다)
// 첫 정류장 전에는 비어 있고, 마지막 정류장에서 모두 내린다
// 최소 수용 인원?

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int in_bus = 0;
    int ans = 0;

    int ai, bi;
    for (int i = 0; i < n; i++){
        cin >> ai >> bi;
        in_bus += bi - ai;
        ans = max(ans, in_bus);
    }

    cout << ans << '\n';

    return 0;
}