#include<iostream>
using namespace std;


bool canPlaceCows(int *cows, int n,int num, int dist){
	int co_ord = cows[0], cow_count =1;

	for(int i=0; i<n; i++){
		if(cows[i]-co_ord>=dist){
			co_ord = cows[i];
			cow_count++;
		}
	}

	if(cow_count == num){
		return true;
	}
	return false;
}


int main()
{
  int cows[5] = {4, 2, 1, 3, 6};
  sort(cows, cows+5);

	int max = cows[4] - cows[0];
	int ans;
	int s=1, e=max, mid= s+(e-s)/2;
	while(s<=e){
		if(canPlaceCows(cows, 5, 2, mid)){
			s = mid+1;
			ans = mid;
		}
		else{
			e = mid -1;
		}

		mid= s+(e-s)/2;
	}

	cout << ans << endl;
  return 0;
}