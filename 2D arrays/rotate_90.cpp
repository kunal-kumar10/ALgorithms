#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void display(int arr[][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    for(int i=0; i<(4-1); i++){
        for(int j=i+1; j<4; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }


    for(int i=0; i<(4/2); i++){
        for(int j=0; j<4; j++){
            swap(arr[j][i],arr[j][3-i]);
        }
    }

    display(arr);
    return 0;
}