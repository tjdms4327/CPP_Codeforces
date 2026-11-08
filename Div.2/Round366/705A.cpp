// 첫 번째 층은 Hate, 두 번째 층은 Love, 세 번째 층은 Hate
// 이후에도 이 순서가 반복

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    string ans = "I hate ";
    for (int i = 2; i <= n ; i++){
        ans += "that ";
        if (i % 2 == 0) ans += "I love ";
        else ans += "I hate ";
    }
    ans += "it\n";

    cout << ans;

    return 0;
}