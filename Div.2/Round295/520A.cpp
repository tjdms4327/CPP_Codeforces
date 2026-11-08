// 모든 알파벳이 한 번 이상 등장하면 pangram

#include <iostream>
#include <cctype>
#include <set>

using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    for (char &c : s){ // 소문자화
        c = tolower(c);
    }

    set<char> set_s(s.begin(), s.end());
    if (set_s.size() == 26) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}