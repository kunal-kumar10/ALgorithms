#include<stdc++.h>
using namespace std;

bool isPresent(int *arr, int start, int end, int key){
    int mid = start + (end-start)/2;
    bool ans;
    if(start>end){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        ans = isPresent(arr, start, end-1, key);
    }
    else{
        ans = isPresent(arr, start+1, end,key);
    }
    return ans;
}

int main(){
    int arr[6]= {2,4,5,10,14,16};

    if(isPresent(arr,0,5,2)){
        cout << "Present"<< endl;
    }
    else{
        cout << "Absent"<< endl;
    }
    return 0;
}