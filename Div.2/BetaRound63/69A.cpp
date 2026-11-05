// 모든 힘 벡터의 합이 0인지 확인

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    int xi, yi, zi;
    for (int i = 0; i < n; i++){
        cin >> xi >> yi >> zi;
        x += xi; y += yi; z += zi;
    }

    if (x==0 && y==0 && z==0) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}