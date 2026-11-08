// xor 문제

#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    string result = "";
    for (size_t i = 0; i < s1.size(); i++){
        result += '0' + (s1[i] ^ s2[i]);
    }

    cout << result << '\n';

    return 0;
}