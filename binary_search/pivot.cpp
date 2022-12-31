#include<iostream>
using namespace std;

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
  int arr[8]= {7,8,1,2,3,4,5,6};
  cout << pivot(arr, 8) << endl;

  return 0;
}