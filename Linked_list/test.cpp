#include<stdc++.h>
using namespace std;

int dec_selection_sort(vector<int> &arr){
    int ans =0;
    int n= arr.size();
    
    for(int i=0; i<n-1; i++){
        int max = arr[i];
        int index = i;
        
        for(int j=i+1; j<n ;j++){
            if(max < arr[j]){
                max = arr[j];
                index = j;
            }
        }
        
        if(max > arr[i]){
            swap(arr[i],arr[index]);
            ans++;
        }
    }
    return ans;
}

int selection_sort(vector<int> &arr){
    int ans =0;
    int n= arr.size();
    
    for(int i=0; i<n-1; i++){
        int max = arr[i];
        int index = i;
        
        for(int j=i+1; j<n ;j++){
            if(max > arr[j]){
                max = arr[j];
                index = j;
            }
        }
        
        if(max < arr[i]){
            swap(arr[i],arr[index]);
            ans++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(9);
    selection_sort(arr);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}