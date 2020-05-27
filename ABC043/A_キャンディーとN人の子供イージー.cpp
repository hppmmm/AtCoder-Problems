#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    cout << N*(N+1)/2 << endl;
}

// ごり押し
// int main(){
//     int N;
//     cin >> N;
//     int sum = 0;
//     for(int i = 1; i <= N; i++) sum += i;
//     cout << sum << endl;
// }