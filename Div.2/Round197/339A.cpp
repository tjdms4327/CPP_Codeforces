//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    int num[50];
    int j = 0;
    for (size_t i = 0; i < s.size(); i += 2){
        num[j] = s[i] - '0'; // 정수로 변환
        j++;
    }
    sort(num, num+j);

    cout << num[0];
    for (size_t i = 1; i < j; i++) cout << '+' << num[i];
    cout << '\n';

    return 0;
}