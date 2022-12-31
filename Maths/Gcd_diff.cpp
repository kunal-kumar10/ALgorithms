#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<vector>
using namespace std;


int gcd(int a,int b){
    while(a>=0 && b>=0){

        if(a==0){
            return b;
        }
        else if(b==0){
            return a;
        }
        else{
            if(a>=b){
                a= a-b;
            }
            else{
                b = b-a;
            }
        }
        // cout << a << " " << b<< endl;
    }
    return a;
}

int main(){
    int a,b;
    cin>> a>> b;
    cout << gcd(a,b)<< endl;
    return 0;
}