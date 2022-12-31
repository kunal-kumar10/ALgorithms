#include<iostream>
using namespace std;

bool ifPoss(int *arr, int n, int m, int mid){
    int student=0, page_sum=0;

    for(int i=0; i<n; i++){
        if(page_sum + arr[i]<=mid){
            page_sum+=arr[i];
        }
        else{
            student++;

            if(student>m || arr[i]>mid){
                return false;
            }
            page_sum = arr[i];
        }

    }
    return true;
}


int main()
{
  int page[4] = {10,20,30,40};

  int total_pages=0, ans=-1;
  for(int i=0; i<4; i++){
    total_pages+=page[i];
  }

  int s=0, e=total_pages, mid= s + (e-s)/2;

  while(s<=e){

    if(ifPoss(page,4, 2, mid)){
        e = mid-1;
        ans = mid; 
    }
    else{
        s= mid+1;
    }
    mid = s + (e-s)/2;

  }
  cout << ans << endl;
}