#include<stdc++.h>
using namespace std;


//Program to find the multiples of 5,7 b/w 1 & 1000.
int multiples(int n,int a, int b){
    int ans; 


    //Approah 1
    // for(int i=1; i<=1000; i++){
    //     if(i%5==0 && i%7==0){
    //         ans.push_back(i);
    //     }
    //     else if(i%5==0){
    //         ans.push_back(i);
    //     }
    //     else if(i%7==0){
    //         ans.push_back(i);
    //     }
    // }


    int c1 = n/5;
    int c2 = n/7; 
    int c3 = n/(5*7);
    ans = c1 + c2 - c3;
    return ans;
}

void display(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i]<< " ";
    }
}
int main(){
    cout << multiples(100,5,7);
    return 0;
}