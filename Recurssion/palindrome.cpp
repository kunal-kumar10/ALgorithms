#include<stdc++.h>
using namespace std;

// bool checkPalindrome(string s,int i,int j){
//     int ans;
//     if(i>j){
//         ans = true;
//         return ans;
//     }

//     if(s[i] == s[j]){
//         ans = checkPalindrome(s, ++i,--j);
//     }
//     else{
//         return false;
//     }
//     return ans;
// }

bool checkPalindrome(string s,int i){
    int ans;
    int j= s.length()-1-i;
    if(i>j){
        ans = true;
        return ans;
    }

    if(s[i] == s[j]){
        ans = checkPalindrome(s, ++i);
    }
    else{
        return false;
    }
    return ans;
}

int main(){
    string s = "baxrab";
    cout << checkPalindrome(s,0)<< endl;
    return 0;
}