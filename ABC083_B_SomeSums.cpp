#include <iostream>
using namespace std;

int ABC(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    int temp = 0;
    for(int i = 1; i < N + 1; i++){
        temp = ABC(i);
        if (A <= temp && temp <= B){
            sum += i;
        }
    }
    cout << sum << endl;
}