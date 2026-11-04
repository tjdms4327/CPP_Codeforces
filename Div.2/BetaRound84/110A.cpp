// 행운의 숫자는 4, 7
// nearly lucky number은 4 또는 7의 개수가 행운의 숫자

#include <iostream>
#include <string>

using namespace std;

int main(){
    string num;
    cin >> num;

    int count_lucky = 0;
    for (size_t i = 0; i < num.size(); i++){
        if (num[i] == '4' || num[i] == '7') count_lucky++;
    }

    if (count_lucky == 4 || count_lucky == 7) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}