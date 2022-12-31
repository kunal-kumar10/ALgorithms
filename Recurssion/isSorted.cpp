#include<stdc++.h>
using namespace std;


bool isSorted(int *arr, int start, int end){

    if(start>=end){
        return true;
    }

    if((arr[start]>arr[start+1]) || (arr[end]<arr[end-1])){
        return false;
    }

    bool ans = isSorted(arr,start+1, end-1);
    return ans;
}

int main(){
    int arr[4] = {2,3,5,6};
    cout << isSorted(arr,0,3)<<endl;
    return 0;
}