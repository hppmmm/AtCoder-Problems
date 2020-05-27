#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    string text = "";
    cin >> S;
    // 文字が空欄の時に「B」が来ても何もしない。
    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'B' && text.size() != 0){
            // text.size()-1 番目以降の文字を1文字削除
            text.erase(text.size()-1,1);
        } else if(S[i] != 'B'){
            text += S[i];
        }
    }
    cout << text << endl;
}