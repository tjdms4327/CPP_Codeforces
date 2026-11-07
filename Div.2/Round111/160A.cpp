// 가져갈 동전 가치 합이 나머지보다 엄격하게 클 것
// 최소 개수의 동전

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int tot = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        tot += cur;
        a[i] = cur;
    }
    sort(a.begin(), a.end(), greater<int>());

    int cur = 0;
    for (int i = 0; i < n; i++){
        cur += 2 * a[i];
        if (cur > tot){
            cout << i+1 << '\n';
            break;
        } 
    }


    return 0;
}