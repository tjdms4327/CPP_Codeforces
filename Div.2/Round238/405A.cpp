// 중력이 아래 방향에서 오른쪽 방향으로 바뀜
// sol) 오름차순 정렬

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    for (int x : a){
        cout << x << ' ';
    }
    cout << endl;

    return 0;
}