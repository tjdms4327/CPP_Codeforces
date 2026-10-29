// word 길이 > 10
// 맨 앞과 뒤 charater만 두고 그 사이 개수 구하기

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;

        int length = s.length();
        if (length > 10){
            cout << s[0] << length-2 << s[length-1] << '\n';
        } else cout << s << '\n';
    }
    return 0;
}