#include<stdc++.h>
using namespace std;

void display(int *arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int cnt =0;

    for(int i=s+1; i<=e; i++){
        if(pivot>arr[i]){
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s, j=e;

    while(i<j){
        if(arr[i]>=pivot && arr[j]<pivot){         // arr[i]>=pivot : for equality checks
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]<pivot){
            i++;
        }
        else if(arr[j]>=pivot){                //arr[j]>=pivot : for equality checks
            j--;
        }
    }

    return pivotIndex;
}


void quickSort(int *arr, int s, int e){
    //Base Case
    if(s>=e){
        return ;
    }

    int p = partition(arr, s, e);

    //Left array Part
    quickSort(arr, s, p-1);

    //Right array part
    quickSort(arr,p+1,e);
}



int main(){
    int arr[5] = {2,1,5,3,4};
    display(arr,5);
    quickSort(arr,0,4);
    display(arr,5);
    return 0;
}