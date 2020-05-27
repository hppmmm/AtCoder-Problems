#include <iostream>
using namespace std;

int main(){
    int N,K,X,Y;
    cin >> N >> K >> X >> Y;
    int total = 0;
    for(int i = 1; i <= N; i++){
        if(i > K) total += Y;
        else total += X;
    }
    cout << total << endl;
}