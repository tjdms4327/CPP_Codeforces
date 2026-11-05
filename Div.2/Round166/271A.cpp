// 현재로부터 가장 가까운 모든 자릿수 수가 다른 year

#include <iostream>
#include <set>

using namespace std;

int main(){
    int year;
    cin >> year;

    if (year >= 1987 && year < 2013) {
        cout << 2013 << '\n';
        return 0; // 즉시 종료
    } else year++;

    set<int> distinct;
    while (true) {
        distinct.insert(year%10);
        distinct.insert(year/10%10);
        distinct.insert(year/100%10);
        distinct.insert(year/1000);

        if (distinct.size() == 4) break;
        
        year++; 
        distinct.clear();
    }

    cout << year << '\n';

    return 0;
}