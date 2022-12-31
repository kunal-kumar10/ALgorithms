#include<stdc++.h>
using namespace std;

// int power(int a,int b){
//     int ans = 1;
//     if(b == 0){
//         return 1;
//     }

//     if(b&1){
//         ans*=a;
//     }
//     b = b>>1;
//     a= a*a;

//     ans*=power(a,b);

//     return ans;
// }

int power(int a,int b){
    int ans=1;

    if(b==1){
        return a;
    }

    if(b&1){
        ans = a*power(a,(b/2))*power(a,(b/2));
    }
    else{
        ans = power(a,(b/2))*power(a,(b/2));
    }

    return ans;
}
int main(){
    int a,b;
    cout << "Enter two numbers to find its power: ";
    cin>> a>> b;
    cout << power(a,b)<< endl;

    return 0;
}