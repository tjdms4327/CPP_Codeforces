// n개의 음료에서 각각 오렌지 주스의 비율은 pi
// 동일량 섞었을 때 마지막 결과에서 오렌지 주스 비율?

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    double sum_percentage = 0.0;
    for (int i = 0; i < n; i++){
        double pi;
        cin >> pi;
        sum_percentage += pi;
    }

    cout << sum_percentage/n << '\n';

    return 0;
}