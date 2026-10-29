// 총 n문제
// 각 문제의 첫번째 수가 1이면 Petya가 맞힐 수 있다고 확신
// 두 번째 수는 Vasya, 세번째 수는 Tonya의 view
// 세 명 중 두 명 이상 확신하면 문제를 푼다

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int answer = 0;
    for (int i = 0; i < n; i++){
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2) answer++;
    }

    cout << answer << '\n';

    return 0;
}