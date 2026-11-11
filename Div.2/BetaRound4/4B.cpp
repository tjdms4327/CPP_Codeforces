// 
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int d, sumTime;
    cin >> d >> sumTime;
    
    vector<int> minTime(d);
    vector<int> maxTime(d);

    int minSum = 0, maxSum = 0;
    for (int i = 0; i < d ; i++){
        cin >> minTime[i] >> maxTime[i];

        minSum += minTime[i];
        maxSum += maxTime[i];
    }

    if (sumTime < minSum || sumTime > maxSum){
        cout << "NO\n";
        return 0;
    }

    vector<int> schedule = minTime;
    int remain = sumTime - minSum;

    for (int i = 0; i < d; i++){
        int add = min(remain, maxTime[i] - minTime[i]);
        schedule[i] += add;
        remain -= add;

        if (remain==0) break;
    }

    cout << "YES\n";
    for (int i = 0; i < d; i++){
        cout << schedule[i] << " ";
    } cout << '\n';

    return 0;
}