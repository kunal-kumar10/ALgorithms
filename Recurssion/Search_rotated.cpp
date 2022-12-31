#include<stdc++.h>
using namespace std;

int pivot(vector<int> &arr,int start,int end){
    int mid = start + (end-start)/2;
    int ans;
    if(end<=start){
        return mid;
    }
    else if(arr[mid-1]>arr[mid]){
        return mid;
    }
    else if(arr[mid]>arr[0]){
        ans = pivot(arr,mid+1, end);
    }
    else{
        ans = pivot(arr,start,mid);
    }
    return ans;
}

int  search(vector<int> &arr, int start, int end,int key){

    int mid = start + (end-start)/2;
    int ans = -1;
    // cout << start<< end << mid<< endl;
    if(end<start){
        return ans;
    }
    else if(arr[mid]==key){
        ans = mid;
        return ans;
    }
    else if(arr[mid]>key){
        ans = search(arr,start,mid-1,key);
    }
    else{
        ans = search(arr,mid+1, end, key);
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
    int start = pivot(arr,0,n-1);

    int key;
    cin >> key;
    int ans;
    if(key<arr[0]){
         ans=search(arr,start,n-1,key);
    }
    else{
        ans= search(arr,0,start-1,key);
    }

    cout << ans<< endl;
    return 0;
}