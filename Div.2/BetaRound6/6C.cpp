// Alice는 왼쪽에서, Bob은 오른쪽에서 출발
// 동시에 같은 초콜릿 먹으면, Alice 차지

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> time(n);
    for (int i = 0; i<n; i++){
        cin >> time[i];
    }

    int left=0, right = n-1; // index
    int alice_time=0, bob_time=0;
    int a=0, b=0;
    while (left<=right){
        if (alice_time <= bob_time){
            alice_time += time[left];
            left++;
            a++;
        } else {
            bob_time += time[right];
            right--;
            b++;
        }
    }

    cout << a << ' ' << b << '\n';

    return 0;
}