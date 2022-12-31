#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;


int main(){
    int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    vector<int> ans;

    int start_row=0, end_row= sizeof(arr)/(sizeof(arr[0])) -1;
    int start_col=0, end_col= sizeof(arr[0])/sizeof(int) -1;

    int count =0,total=sizeof(arr)/sizeof(int);

    while(count < total){

        for(int i=start_col; i<=end_col && count <total; i++){
            ans.push_back(arr[start_row][i]);
            count++;
        }
        start_row++;

        for(int i=start_row; i<= end_row && count< total; i++){
            ans.push_back(arr[i][end_col]);
            count++;
        }
        end_col--;

        for(int i= end_col; i>= start_col && count< total; i--){
            ans.push_back(arr[end_row][i]);
            count++;
        }
        end_row--;


        for(int i=end_row; i>= start_row && count< total; i--){
            ans.push_back(arr[i][start_col]);
            count++;
        }
        start_col++;
    }

    for(int i=0; i<ans.size();i++){
        cout << ans[i]<< " ";
    }
    return 0;
}