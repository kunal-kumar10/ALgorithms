#include<stdc++.h>
using namespace std;

void print_num(int n){
    if(n == 0){
        return ;
    }
    print_num(n-1);
    cout << n << " ";
    
}

int main(){
    print_num(5);

    return 0;
}