// k등 이상이면 다음 라운드 진출
// but 점수는 무조건 양수여야 한다
// 다음 라운드에 진출하는 참가자 수는?

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int A[50];
    for (int i = 0; i < n; i++) cin >> A[i];

    // 리스트는 내림차순으로 제공
    int standard = max(A[k-1], 1); // 기준값은 k이상, 0 초과니까

    int count = 0;
    for (int i = 0; i < n; i++){
        if (A[i] >= standard) count++;
        else break;
    }

    cout << count << '\n';
    return 0;
}