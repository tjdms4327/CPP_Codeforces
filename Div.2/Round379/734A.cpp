// 둘 중 게임을 더 많이 이긴 사람?

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string winners;
    cin >> n >> winners;

    int win_anton = 0;
    for (int i = 0; i < n; i++){
        if (winners[i] == 'A') win_anton++;
    }
    int win_danik = n - win_anton;

    if (win_anton > win_danik) cout << "Anton\n";
    else if (win_anton < win_danik) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}