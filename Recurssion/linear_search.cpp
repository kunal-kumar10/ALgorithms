#include<stdc++.h>
using namespace std;

bool isFound(int *arr, int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }

    bool ans = isFound(arr+1 , n-1 , key);
    return ans;
}

int main(){
    int arr[5] = {2, 10 , 43, 21, 24};

    if(isFound(arr,5,24)){
        cout << "Found"<< endl;
    }
    else{
        cout << "Not Found!!"<< endl;
    }
    return 0;
}