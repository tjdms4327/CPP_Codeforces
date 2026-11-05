//매 초마다 BG -> GB

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    string line;
    cin >> line;

    for (int i = 0; i < t; i++){
        for (int j = 0; j < n - 1; j++) {
            if (line[j] == 'B' && line[j + 1] == 'G') {
                swap(line[j], line[j + 1]);
                j++;
            }
        }
    }

    cout << line << '\n';

    return 0;
}