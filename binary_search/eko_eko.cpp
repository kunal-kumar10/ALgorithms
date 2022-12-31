#include <iostream>
using namespace std;
 
void input_value(int *arr, int n){
	for(int i=0; i<n ; i++){
		cin >> arr[i];
	}
}
 
bool ifCanCut(int *trees, int n, int mid , int req_len){
	int len_cut = 0;
	for(int i=0; i<n; i++){
		if(trees[i]>mid){
			len_cut += (trees[i]-mid);
		}
	}
	
	if(len_cut == req_len){
		return true;
	}
	return false;
}
 
int main() {
	int trees_num = 4, req_len=7;
	int trees[4] = {20 ,15 ,10 ,17};

	sort(trees, trees_num + trees);
	

	int s = trees[0], e=trees[trees_num-1], mid = s + (e-s)/2;
	int ans = -1;
	
	while(s<e){
		if(ifCanCut(trees,trees_num, mid, req_len)){
			e=mid-1;
			ans = mid;
		}
		else{
			s = mid+1;
		}
		mid = s+ (e-s)/2;
	}
	cout << ans;
	return 0;
} 