// 각자 자신이 pi에게 선물 준 거 기억
// 각 친구에게 선물 준 친구의 번호?

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int present[101];

    for (int i = 1; i <= n; i++){
        int pi;
        cin >> pi;
        present[pi] = i;
    }

    for (int i = 1; i<= n; i++){
        cout << present[i] << ' ';
    }
    cout << '\n';
    
    return 0;
}