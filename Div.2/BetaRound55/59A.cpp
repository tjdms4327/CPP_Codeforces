// letter 최소한으로 바꿔서 전부 대문자 or 소문자화

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    int count_upper = 0;
    for (size_t i = 0; i < s.size(); i++) {
        if (isupper(s[i])) count_upper++;
    }
    int count_lower = s.size() - count_upper;

    if (count_upper > count_lower){
        for (size_t i = 0; i < s.size(); i++) {
            if (islower(s[i])) s[i] = toupper(s[i]);
        }
    } else {
        for (size_t i = 0; i < s.size(); i++) {
            if (isupper(s[i])) s[i] = tolower(s[i]);
        }
    }

    cout << s << '\n';

    return 0;
}