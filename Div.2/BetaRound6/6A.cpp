// 4개 막대로 만들 수 있는 삼각형?

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> sticks(4);
    cin >> sticks[0] >> sticks[1] >> sticks[2] >> sticks[3];

    sort(sticks.begin(), sticks.end());

    bool triangle = false;
    bool segment = false;
    for (int i = 0; i < 4; i++){
        int a = sticks[i];
        for (int j = i+1; j < 4; j++){
            int b = sticks[j];
            for (int k = j+1; k < 4; k++){
                int c = sticks[k];
                if (a+b == c) segment = true;
                else if (a+b > c) {
                    triangle = true;
                    break;
                }
            }
        }
    }

    if (triangle) cout << "TRIANGLE\n" ;
    else if (segment) cout << "SEGMENT\n";
    else cout << "IMPOSSIBLE\n";

    return 0;
}