// 같은 팀이 연속 7명 이상 서 있도록

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cur = 1;
    for (size_t i = 1; i < s.size(); i++){
        if (s[i-1] == s[i]){
            cur++;
            if (cur >= 7) break;
        } else cur = 1;
    }

    if (cur >= 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}