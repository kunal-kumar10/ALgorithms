#include<stdc++.h>
using namespace std;

int pivot(vector<int> &arr ,int start, int end){

    int mid = start + (end-start)/2;
    int ans;
    if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
        return mid;
    } 
    else if(arr[mid]>arr[0]){
        ans = pivot(arr, mid+1,end);
    }
    else{
        ans =pivot(arr, start, mid);
    }
    return ans;
}

int main(){
    vector<int> arr;
    cout << "Enter the number of elements in array: ";
    int n;
    cin>> n;

    for (int i=0; i<n; i++){
        int temp;
        cin>> temp;
        arr.push_back(temp);
    }

    cout << arr[pivot(arr, 0, n)]<< endl;
    return 0;
}