#include<iostream>
using namespace std;
int main()
{
  int arr[7]={1,2,3,4,5,6,7};


  //Method 1
//   int temp[2];

//   for(int i=0;i<2;i++){
//     temp[i] = arr[i];
//   }

//   for(int i=2; i<7; i++){
//     arr[i-2] = arr[i];
//   }

//   for(int i=5; i<7;i++){
//     arr[i] = temp[i-5];
//   }


//Method 2
  // int d=2, i=0;
  // while(i<d){
  //   int temp;
  //   temp = arr[0];
  //   for(int i=1; i<7;i++){
  //     arr[i-1] = arr[i];
  //   }
  //   arr[6] = temp;
  //   i++;
  // }


  for(int i=0; i<7;i++){
    cout << arr[i]<< " ";
  }
  return 0;
}