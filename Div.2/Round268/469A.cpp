// 클리어할 수 있는 레벨 번호들 제시
// 모든 레벨 클리어 가능?

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, p, q;

    cin >> n;
    vector<int> visited(n+1, false);

    cin >> p;
    for (int i = 0; i < p; i++){
        int a;
        cin >> a;
        visited[a] = true;
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        int a;
        cin >> a;
        visited[a] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";

    return 0;
}