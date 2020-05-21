#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N = 0;
    int Alice = 0;
    int Bob = 0;
    cin >> N;
    int As[110] = {0};

    for(int i = 0; i < N; i++) cin >> As[i];
    sort(As,As + N, greater<int>());
    for(int i = 0; i < N; i++){
        if((i+1) % 2 == 1){
            Alice += As[i];
        } else {
            Bob += As[i];
        }
    }
    cout << Alice - Bob << endl;

}