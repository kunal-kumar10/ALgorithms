#include<iostream>
using namespace std;

int min_index(int *arr, int n, int index){
    int min = arr[index], value;

    for(int i=index; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
            value = i;
        }
    }
    return value;
}

int main()
{
  int arr[] = {29,72,98,13,87,66,52,51,36};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<(n-1); i++){
        swap(arr[i],arr[min_index(arr,n,i)]);
    }

  return 0;
}