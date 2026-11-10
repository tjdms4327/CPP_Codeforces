// 

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count_cash = 0;
    for (int cash_value : {100, 20, 10, 5}){
        count_cash += n / cash_value;
        n %= cash_value;
    }
    count_cash += n;

    cout << count_cash << '\n';

    return 0;
}