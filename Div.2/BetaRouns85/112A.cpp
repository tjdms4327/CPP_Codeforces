// 두 문자열이 대소문자 상관없이 사전식으로 비교

#include <iostream>
#include <string>
#include <cctype> // 소문자 만들기

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    for (size_t i = 0; i < A.size(); i++){   // A.size()의 반환 자료형은 size_t니까 타입 맞춰주기
        A[i] = tolower(A[i]);
        B[i] = tolower(B[i]);
    }

    if (A < B) cout << -1 << '\n';
    else if (A > B) cout << 1 << '\n';
    else cout << 0 << '\n';

    return 0;
}