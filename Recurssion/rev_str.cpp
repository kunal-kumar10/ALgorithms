#include<stdc++.h>
using namespace std;

string rev_str(int i, int j, string &s){
    
    if(i>=j){
        return "";
    }
    swap(s[i],s[j]);
     rev_str(++i, --j, s);
    return s;
}

int main(){
    string s="abcde";
    rev_str(0,s.length()-1,s);
    cout << s << endl;
    return 0;
}