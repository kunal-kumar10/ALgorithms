#include<stdc++.h>
using namespace std;

void display(int *arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

void insertion_sort(int *arr, int n, int start){
    if(start == n){
        return ;
    }
    int temp=arr[start], i;
    for(i=start-1; i>=0; i--){

        if(arr[i]>temp){
            arr[i+1] = arr[i];
        }
        else{
            break;
        }
    }
    arr[i+1] = temp;
    insertion_sort(arr,5,++start);
}


int main(){
    int arr[5] = {2,5,1,6,9};

    display(arr,5);
    insertion_sort(arr,5,1);
    display(arr,5);
    return 0;
}