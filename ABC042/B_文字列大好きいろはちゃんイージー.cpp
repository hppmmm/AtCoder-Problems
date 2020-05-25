#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int N, L;
    std::string ans = "";
    std::cin >> N >> L;
    std::vector<std::string> v(N,"");
    for(int i = 0; i < N; i++){
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        ans += v[i];
    }
    std::cout << ans << std::endl;
}