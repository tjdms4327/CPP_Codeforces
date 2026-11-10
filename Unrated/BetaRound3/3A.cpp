// s에서 t까지 최소 이동

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    int x_move = t[0] - s[0];
    int y_move = t[1] - s[1];
    cout << max(abs(x_move), abs(y_move)) << '\n';
    
    while (x_move != 0 || y_move != 0){
        if (x_move > 0) {
            cout << 'R';
            x_move--;
        } else if (x_move < 0){
            cout << 'L';
            x_move++;
        }

        if (y_move > 0){
            cout << 'U';
            y_move--;
        } else if (y_move < 0){
            cout << 'D';
            y_move++;
        }

        cout << '\n';
    }
    return 0;
}