#include <iostream>

int main(){
    int n, count;
    int a[210];

    std::cin >> n;
    for(int i = 0; i < n; i++ ) std::cin >> a[i];

    while(true){
        bool oddEx = false;
        for(int i = 0; i < n; i++ ) {
            if(a[i]%2 != 0) oddEx = true;
        }

        if(oddEx) break;

        for(int i = 0; i < n; i++ ) a[i] /= 2;
        count++;
    }
    std::cout << count << std::endl;
    return 0;
}