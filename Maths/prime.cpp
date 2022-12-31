#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<vector>
using namespace std;

bool prime(int n){
    bool ans = true;
    // for(int i=2; i<=(n/2); i++){
    //     if(n%i == 0){
    //         ans = false;                 // O(n)
    //         break;
    //     }
    // }

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            ans = false;
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>> n;

    for(int i=2; i<n; i++){           // O(sqrt(n))
        if(prime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    // cout << ans << endl;
    return 0;
}