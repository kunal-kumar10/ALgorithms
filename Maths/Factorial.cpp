#include<stdc++.h>
using namespace std;

const int m = 1e9;

int factorial(int n){
    int ans = 1;

    for(int i=2; i<=n; i++){
        ans = ((ans%m)*i)%m;
    }

    return ans;
}
int main(){
    int n;
    cin>>n;
    cout << factorial(n)<< endl;
    return 0;
}