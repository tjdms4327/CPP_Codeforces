// 한 명이라도 어렵다고 하면 다른 문제로 교체

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n ;

    bool hard = false;
    int judgement;
    for (int i = 0; i < n; i++){
        cin >> judgement;
        if (judgement == 1) hard = true;
    }
    
    
    if (hard) cout << "HARD\n";
    else cout << "EASY\n";

    return 0;
}