#include<stdc++.h>
using namespace std;

const string s[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void print_digits(int n){
    if(n==0){
        return ;
    }
    int digit = n%10;
    print_digits(n/10);
    cout << s[digit]<< " ";
}

int main(){
    int n;
    cout << "Enter a number:"; 
    cin>> n;
    print_digits(n);
    return 0;
}