// Limak weight a <= Bob weight b
// Limak *=3 per year ; Bob*=2 per year
// Limak가 Bob보다 커지는 순간?

#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int year_count = 0;
    while (a <= b){
        a *= 3;
        b *= 2;
        year_count ++;
    }

    cout << year_count << '\n';

    return 0;
}