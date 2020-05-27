#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    int N, temp;
    cin >> N;
    vector<int> A;
    for(int i = 0; i < N; i++){
        cin >> temp;
        A.push_back(temp);
    }
    // 配列だとaccumulateを使用できないため、vectorを使用した。
    double average = accumulate(A.begin(), A.end(), 0) / double(A.size());
    average = round(average); //平均を四捨五入する。
    
    int ans = 0;
    for(int i = 0; i < N; i++){
        ans += (average - A[i])*(average - A[i]);
    }
    cout << ans << endl;
}

// ごり押し方式でやろうとしたけどうまくいかなかった。
// int main(){
//     int N;
//     int temp = 0;
//     cin >> N;
//     int A[N];
//     for(int i = 0; i < N; i++){
//         cin >> temp;
//         A[N] = temp;
//     }
//     int minCost = 100000000;

//     for(int i = -100; i < 101; i++){
//         for(int n = 0; n < N; n++){
//             cout << A[n] << endl; //何を入れてもここで16がでてくる。。。
//             temp += (A[n]-i) * (A[n]-i);
//         }
//         if(temp < minCost) minCost = temp;
//         temp = 0;
//     }
//     cout << minCost << endl;
// }