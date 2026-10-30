// 초깃값 x = 0
// ++는 1 더하기, --는 1 빼기

#include <iostream>
#include <string>

using namespace std;

int main(){
    int x = 0;
    int n;
    cin >> n;

    for (int i = 0 ; i < n ; i++){
        string s;
        cin >> s;

        if (s.find("++") != string::npos) x++; // if (s[1]=='+') 로도 가능. X++든 ++X든 s[1]은 '+'이니까
        else x--;
    }

    cout << x << '\n';
    return 0;
}