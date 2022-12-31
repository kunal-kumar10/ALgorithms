#include<stdc++.h>
using namespace std;

const int m = 1e9 +7;

int FsExp(int a, int b){
    int ans = 1;

    while(b){
        if(b&1){
        ans=(1LL* ans *(a%m))%m;
    }

    a = (1LL * (a%m)*(a%m))%m;
    b=b>>1;
    }
    return ans;
}

int main(){
    cout << FsExp(32,36);
    return 0;
}