#include<stdc++.h>
using namespace std;

float first[10] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9};
const float second[10] = {0.00, 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09};

int square_root(int n,int s, int e){
    int mid = s+ (e-s)/2;
    int ans;
    if(mid*mid <= n && ((mid+1)*(mid+1))>n){
        return mid;
    }
    else if(((mid*mid)<n) && (mid+1)*(mid+1)<n){
        ans = square_root(n, mid+1, e);
    }
    else{
        ans = square_root(n, s, mid -1);
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number to find its square root: ";
    cin>> n;

    cout << square_root(n,0,n) << endl;
    return 0;
}