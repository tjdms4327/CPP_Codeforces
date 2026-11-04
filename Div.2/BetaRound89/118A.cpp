// 자음만 남기고 . 넣기
// 자음은 소문자로

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "AOYEUIaoyeui";

    string non_vowels;
    for (size_t i = 0; i < s.size(); i++){
        if (vowels.find(s[i]) == string::npos) { // vowels 안에 없으면
            non_vowels += '.';
            non_vowels += tolower(s[i]);
        }
    }

    cout << non_vowels << '\n';

    return 0;
}