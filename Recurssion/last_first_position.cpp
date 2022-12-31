#include<stdc++.h>
using namespace std;

int firstOccurence(vector<int> &arr,int start,int end,int k){
    int mid = start + (end -start)/2;
    int ans;
    if(mid>end || mid<0){
        return -1;
    }

    if(arr[mid]==k && arr[mid-1]!=k){
        return mid;
    }
    else if(arr[mid]<k){
        ans=firstOccurence(arr,mid+1, end, k);
    }
    else{
        ans = firstOccurence(arr,start,mid-1,k);
    }
    return ans;
}

int LastOccurence(vector<int> &arr,int start,int end,int k){
    int mid = start + (end -start)/2;
    int ans;
    if(mid>end || mid<0){
        return -1;
    }

    if(arr[mid]==k && arr[mid+1]!=k){
        return mid;
    }
    else if(arr[mid]>k){
        ans=LastOccurence(arr,start, mid-1, k);
    }
    else{
        ans = LastOccurence(arr, mid+1,end,k);
    }
    return ans;
}

pair<int,int> firstAndLastPosition(vector<int> &arr,int start,int end,int k){
    pair<int,int> ans;
    ans.first = firstOccurence(arr,start,end,k);
    ans.second = LastOccurence(arr,start,end,k);

    return ans;
}

int main(){
    vector<int> arr;
    cout << "Enter the number of elements in array: ";
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        int temp;
        cin>> temp;
        arr.push_back(temp);
    }

    int key;
    cout << "Enter the element to find its extreme positions: ";
    cin >> key;

    pair<int,int> ans = firstAndLastPosition(arr,0,n-1,key);
    cout << ans.first<< endl;
    cout<< ans.second<< endl;
    return 0;
}