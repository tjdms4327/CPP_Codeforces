// 높이가 h보다 작거나 같게
// 숙이면 너비는 2
// 최소 총 너비 구하기

#include <iostream>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int width = 0;
    int ai;
    for (int i = 0; i < n; i++){
        cin >> ai;
        if (ai <= h) width++;
        else width += 2;
    }

    cout << width << '\n';
    
    return 0;
}