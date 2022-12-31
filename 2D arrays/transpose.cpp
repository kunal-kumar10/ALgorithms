#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void display(int arr[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<(3-1); i++){
        for(int j=i+1; j<3 ; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    display(arr);
    return 0;
}