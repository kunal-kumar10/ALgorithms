#include<stdc++.h>
using namespace std;

const int N=1000000;

vector<int> create_sieve(int n){
    vector<bool> prime(n+1 , true);
    prime[0] = false;
    prime[1]=false;
    vector<int> ans;

    for(int i=2; i<=n; i++){
        if(prime[i]){
             ans.push_back(i);
            for(int j = i*i ; j<=n; j+=i){
                prime[j]=false;
            }
        }
    }
    return ans;
}

void display(vector<int> arr){
    for(int i=0; i< arr.size(); i++)
    cout << arr[i]<< " ";
}

int main(){
    int l, r;
    cout << "Enter the value of l: "; 
    cin>> l;
    cout << "Enter the value of r: ";
    cin>>r;

    vector<int> primes = create_sieve(sqrt(r));
    vector<int> sieve(r-l+1, true);

    for(int i=0; i<primes.size(); i++){
        int first_multiple = (l/primes[i])*primes[i];

        if(first_multiple<l){
            first_multiple+=primes[i];
        }

        for(int j=max(primes[i]*primes[i], first_multiple); j<=r ; j+=primes[i]){
            sieve[j-l] = false;
        }
    }

    vector<int> ans;
    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            ans.push_back(i+l);
        }
    }
    display(ans);
   
    return 0;
}