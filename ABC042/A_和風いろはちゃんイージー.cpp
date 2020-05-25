#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> v;
    vector<int> haiku = {5,5,7};
    v.push_back(A);
    v.push_back(B);
    v.push_back(C);
    sort(v.begin(),v.end());

    bool can = equal(v.begin(),v.end(), haiku.begin());
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

}