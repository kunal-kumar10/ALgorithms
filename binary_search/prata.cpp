#include<iostream>
#include<math.h>
using namespace std;


int time(int rank, int num){
	int req_time = rank*(((num)*(num+1))/2);
	return req_time;
}


int parata_count(int time, int rank){
	int count = (-1 + sqrt(1+(8*time)/rank))/2;
	return count;
}


bool CanPoss(int *rank, int n, int mid, int req_parata){
	int rem_parata = req_parata;

	for(int i=0;i<n;i++){
		if(parata_count(mid,rank[i]) >= rem_parata){
			return true;
		}
		else{

			rem_parata = rem_parata - parata_count(mid,rank[i]);

			if(rem_parata <=0){
				return true;
			}

		}
	}
	return false;
}



int main()
{
	int n=9, req_parata=8;
  int rank[9] = {8 ,1, 1, 1, 1, 1, 1, 1, 1};
  sort(rank, rank+ n);

	int max = rank[n-1]*((req_parata*(req_parata+1))/2);

	int s=0, e= max , mid= s+(e-s)/2;
	int ans=-1;

	while(s<e){
		if(CanPoss(rank,n,mid,req_parata)){
			e=mid-1;
			ans = mid;
		}
		else{
			s = mid+1;
		}
		mid = s + (e-s)/2;
	}

	cout << ans << endl;
  return 0;
}