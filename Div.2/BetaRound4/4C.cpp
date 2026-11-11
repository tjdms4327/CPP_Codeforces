// 해당 이름이 DB에 없으면 OK
// 있으면 뒤에 숫자 붙여서 새 이름 출력

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    int n; cin >> n;

    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++){
        string name; 
        cin >> name;

        if (mp[name] == 0){
            cout << "OK\n";
            mp[name] = 1;
        } else {
            int num = mp[name];
            string newname = name + to_string(num);

            while (mp[newname] > 0){
                num++;
                newname = name + to_string(num);
            }
            
            cout << newname << '\n';
            mp[name]++;
            mp[newname] = 1;
        }

    }

    return 0;
}