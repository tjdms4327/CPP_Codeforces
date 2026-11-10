// row는 알파벳, col은 숫자
//  RXCY 형식을 Excel 형식으로 / Excel 형식을 RXCY 형식으로 변환

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        if (s[0]=='R' && s.find('C')!=string::npos && s.find('C') > 1 && isdigit(s[1])){ // RXCY형식
            int c_idx = s.find('C');
            int y = stoi(s.substr(1, c_idx-1));
            int  x = stoi(s.substr(c_idx+1));
            string ans;
            while (x > 0){
                x--;
                ans += x % 26 + 'A';
                x /= 26;
            }
            reverse(ans.begin(), ans.end());

            cout << ans << y << '\n';
            
        } else { // Excel 형식
            int x = 0;
            string y;
            for (size_t i = 0; i < s.size(); i++){
                if (s[i] >= 'A' && s[i] <= 'Z'){
                    int d = s[i] - 'A' + 1;
                    x *= 26;
                    x += d;
                } else {
                    y = s.substr(i);
                    break;
                }
            }
            cout << 'R' << y << 'C' << x << '\n';

        }
    }

    return 0;
}