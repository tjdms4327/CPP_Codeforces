// 서로 다른 문자의 총 개수

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char> set_s;
    for (char c : s){
        if (c >= 'a' && c <= 'z') set_s.insert(c);
    }

    cout << set_s.size() << '\n';

    return 0;
}