// watermelon의 무게 w
// 짝수 무게인 두개로 나누기

#include <iostream>
using namespace std;

int main(){
    int w;
    cin >> w;

    if ((w%2==0) && (w>2)){
        cout << "YES\n";
    }
    else cout << "NO\n";

    return 0;
}
