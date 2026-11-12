// 사람 더하거나 빼기, 모든 사람에게 메세지 전송
// 총 전송 트래픽 양?

#include <iostream>
#include <string>

using namespace std;

int main(){
    int people = 0;
    int traffic = 0;

    string s;
    while (getline(cin, s)){
        if (s[0] == '+') people++;
        else if (s[0] == '-') people--;
        else {
            int idx_slice = s.find(':');
            int message_size = s.size() -1 - idx_slice;
            traffic += people * message_size;
        }
    }    

    cout << traffic << '\n';

    return 0;
}