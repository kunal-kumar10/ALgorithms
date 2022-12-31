#include<iostream>
using namespace std;

int main()
{
  int arr[5] = {6,2,8,4,10};

  for(int i=0; i<4; i++){
    int num =0;

    for(int j=0; j<4-i;j++){

        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            num++;
        }
    }

    if(num == 0){
        break;
    }
  }

  for(int i=0; i<5; i++){
    cout << arr[i]<< " ";
  }
  return 0;
}