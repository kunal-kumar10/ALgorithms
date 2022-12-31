#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<vector>
using namespace std;

// Used to find the number of prime no.s within a given range.
// T.C : O(n*log(logn))
int prime(int n){

    vector<bool> prime(n+1,true);
    prime[0]=0;
    prime[1]=false;
    int count=0;

    for(int i=2; i*i<n; i++){
        if(prime[i]){
            // count++;
            for(int j=i*i; j<n+1; j= j+i){
                prime[j] = false;
            }
        }
    }
    for(int i=2; i<n+1; i++){
        if(prime[i]==true){
            count++;
        }
    }

    // for(int i=0; i<n+1;i++){
    //     if(prime[i]){
    //         cout<<i<<" ";
    //     }
    // }
    // cout << endl;
    return count;   
}

int main(){
    int n,count=0;
    cin>>n;

    cout << prime(n)<< endl;
    return 0;
}