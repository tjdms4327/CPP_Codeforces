// 문자열에 H, Q, 9가 있으면 YES

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    if (s.find('H') != string::npos ||
        s.find('Q') != string::npos ||
        s.find('9') != string::npos)
        cout << "YES\n";
    else cout << "NO\n";

    return 0;
}