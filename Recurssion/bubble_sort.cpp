#include<stdc++.h>
using namespace std;

void bubble_sort(int *arr,int n){

    if(n==0){
        return ;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubble_sort(arr,--n);

}

void display(int *arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    int arr[5] = {2,5,1,6,9};

    display(arr,5);
    bubble_sort(arr,5);
    display(arr,5);
    return 0;
}