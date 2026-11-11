// 체인에 포함된 각 봉투는 바로 이전 봉투보다 너비와 높이가 모두 엄격하게 커야 한다
// 체인의 크기 = 체인에 포함된 봉투의 개수
// 체인 길이 최대화

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct envelope{
    int w, h, idx;
};

int main(){
    int n, w, h;
    cin >> n >> w >> h;

    vector<envelope> a;
    for (int i = 1; i <= n; i++){
        int wi, hi;
        cin >> wi >> hi;

        if (wi <= w || hi <= h) continue;

        a.push_back({wi, hi, i});
    }

    sort(a.begin(), a.end(), [](const envelope& x, const envelope& y){
        if (x.w != y.w) return x.w < y.w;
        return x.h < y.h;
    });
    if (a.empty()){ 
        cout << 0 << '\n';
        return 0;
    }

    vector<int> dp(a.size(), 1); // dp 생성
    vector<int> parent(a.size(), -1); // 경로 복원
    for (int i = 0; i < a.size(); i++){
        for (int j = 0; j < i; j++){
            if (a[j].w < a[i].w && a[j].h < a[i].h){
                if (dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
        }
    }
    
    int best = 0; // 최대 체인 번호 갖는 봉투 인덱스
    for (int i = 0; i < dp.size(); i++){
        if (dp[i] > dp[best]){
            best = i;
        }
    }

    vector<int> ans; // 체인 역추적
    while (best != -1){
        ans.push_back(a[best].idx);
        best = parent[best];
    }
    reverse(ans.begin(), ans.end());

    cout << ans.size() << '\n';
    for (int x : ans){
        cout << x << ' ';
    }
    cout << '\n';


    return 0;
}