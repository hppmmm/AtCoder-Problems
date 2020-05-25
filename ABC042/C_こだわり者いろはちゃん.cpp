#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // N円の商品を買う。 K個の数が嫌い。
    int N, K;
    int temp;
    cin >> N >> K;
    int hateNumbers[10];
    int hateNumber;
    for(int i = 0; i < K; i++){
        cin >> hateNumber;
        // 嫌いな数の要素数を１にする。
        hateNumbers[hateNumber] = 1;
    }
    bool can = false;

    while(!can){
        temp = N;
        while(temp != 0){
            if(hateNumbers[temp%10] == 1) {
                N++;
                break;
            } 
            temp /= 10;
        }
        if(!temp){
            break;
        }
    }
    cout << N << endl;
}


// ごり押し方式

// int main(){
//     // N円の商品を買う。 K個の数が嫌い。
//     int N, K;
//     int temp;
//     int hateNunbers[10];
//     cin >> N >> K;
//     for (int i = 0; i < K; i++) {
//       cin >> hateNunbers[i];
//    }
//    int num = N;
//    while(1){
//        string s = to_string(num);
//        bool can = true;

//        for(int i = 0;i < K; i++){
//            if(count(s.begin(),s.end(), hateNunbers[i]+'0')){
//                can = false;
//                num++;
//                break;
//            }
//        }
//        if (can) {
//          cout << num << endl;
//          return 0;
//       }
//    }
// }