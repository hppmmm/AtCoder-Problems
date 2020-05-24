#include <iostream>
using namespace std;

int main(){
    int N, Y;
    cin >> N >> Y;
    int itiman = -1, gosen = -1, sen = -1;
    for(int x = 0;x <= N; x++){
        for(int y = 0;y <= N-x; y++){
            if(Y == 10000*x + 5000*y + (N-x-y)*1000){
                itiman = x;
                gosen = y;
                sen = N-x-y;
                x = 3000;
                y = 3000;
            }
        }
    }
    cout << itiman << " " << gosen << " " << sen << endl; 
}