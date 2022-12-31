#include<iostream>
using namespace std;

int Pivot_Search(int *arr, int n, int x, int index){

    if(arr[index]<=x && arr[n-1]>=x){
        int s=index;
        binary_search(arr,s,n-1, x);
    }
    else if(arr[index-1]>=x && arr[0]<=x){
        int e=index-1;
        binary_search(arr, 0,e, x);
    }
    
}

int binary_search(int *arr,int start_index,int end_index,int x){
    int s=start_index, e=end_index, mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int pivot(int *arr, int n){

    int s=0, e=n-1, mid= s+(e-s)/2;

    while(s<e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
}

int main()
{
  int arr[10] = {7,8,9,10,1,2,3,4,5,6};
  int index =  pivot(arr,10);
  cout << Pivot_Search(arr, 10,2,index);
  return 0;
}