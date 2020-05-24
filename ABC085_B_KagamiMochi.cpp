#include <iostream>
#include <algorithm>
#include <set>
// use set
using namespace std;
int main(){
    int N;
    cin >> N;
    int array[110];
    for(int i = 0; i < N; i++) cin >> array[i];
    set<int> st;

    for(int i = 0; i < N; i++) st.insert(array[i]);
    cout << st.size() << endl;

}


/**
int main(){
    int N;
    cin >> N;
    int array[110];
    for(int i = 0; i < N; i++) cin >> array[i];
    int bucket[110] = {0};

    for(int i = 0; i < N; i++){
        bucket[array[i]]++;
    }

    int count = 0;
    for(int i = 1; i <= 100; i++){
        if(bucket[i]) count++;
    }
    cout << count << endl;
}
**/

/** before
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int N;
    int array[110] = {0};
    cin >> N;
 
    for(int i = 0; i < N; i++){
        cin >> array[i];
    }
    int count = 0;
    int buf = 1000;
    sort(array,array + N,greater<int>());
    for(int i = 0; i < N; i++){
        if(buf != array[i]){
            count++;
            buf = array[i];
        } 
    }
 
    cout << count << endl;
 
}
 **/