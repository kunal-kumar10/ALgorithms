#include<stdc++.h>
using namespace std;

int peak_index(vector<int> &arr,int start,int end){
    int mid = start + (end-start)/2;
    int ans;
    if((arr[mid]>arr[mid+1]) && (arr[mid]>arr[mid-1])){
        return mid;
    }
    else if(arr[mid]>arr[mid+1]){
        ans = peak_index(arr, start,mid);
    }
    else{
        ans = peak_index(arr, mid, end);
    }
    return ans;
}

int main(){
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin>> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    cout << peak_index(arr,0,n-1)<< endl;
    return 0;
}