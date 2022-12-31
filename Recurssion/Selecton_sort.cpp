#include<stdc++.h>
using namespace std;

void display(int *arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

void selecton_sort(int *arr, int n,int start){

    if(start == n){
        return ;
    }
    int index = 0, min= arr[start],x=0;
    for(int i=start+1; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
            index = i;
            x++;
        }
    }
    if(x==0){
        return ;
    }
    swap(arr[start],arr[index]);
    // display(arr,5);
    selecton_sort(arr, n, ++start);
}

int main(){
    int arr[5] = {2,5,1,6,9};

    display(arr,5);
    selecton_sort(arr,5,0);
    display(arr,5);
    
    return 0;
}