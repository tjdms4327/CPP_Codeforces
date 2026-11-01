// 다른 알파벳 수가 홀수면 남자

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string name;
    cin >> name;

    set<char> st;
    for (char c : name){
        st.insert(c);
    }

    size_t count = st.size();
    if (count % 2 == 0) cout << "CHAT WITH HER!" << '\n';
    else cout << "IGNORE HIM!" << '\n';

    return 0;
}