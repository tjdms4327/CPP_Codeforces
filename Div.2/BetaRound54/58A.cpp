// 문자열 s에서 일부를 지워 hello를 만들 수 있는가

#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    string hello = "hello";
    int hello_idx = 0;
    bool make = false;

    for (char c : s){
        if (c == hello[hello_idx]){
            hello_idx++;
            if (hello_idx == hello.size()) {
                make = true;
                break;
            }
        }
    }

    if (make) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}