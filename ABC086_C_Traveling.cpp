#include <iostream>
using namespace std;

int main(){
    int N;
    int t[110000], x[110000], y[110000];
    cin >> N;
    t[0] = x[0] = y[0] = 0;

    for(int i = 1; i < N+1; i++) cin >> t[i] >> x[i] >> y[i];
    bool can = true;
    int dist = 0;
    int dt = 0;
    for(int i = 1; i < N+1; i++){
        dt = t[i]-t[i-1];
        dist = std::abs(x[i]-x[i-1]) + std::abs(y[i]-y[i-1]);
        if (dt < dist){
            can = false;
            break;
        }
        if (dist%2 != dt%2){
            can = false;
            break;
        }  
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;
}