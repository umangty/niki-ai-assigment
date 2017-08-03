#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void mul(ll A[2][2], ll B[2][2]){
	ll x = ((A[0][0]*B[0][0])%mod + (A[0][1]*B[1][0])%mod)%mod;
	ll y = ((A[0][0]*B[0][1])%mod + (A[0][1]*B[1][1])%mod)%mod;
	ll z = ((A[1][0]*B[0][0])%mod + (A[1][1]*B[1][0])%mod)%mod;
	ll w = ((A[1][0]*B[0][1])%mod + (A[1][1]*B[1][1])%mod)%mod;
	A[0][0] = x;
	A[0][1] = y;
	A[1][0] = z;
	A[1][1] = w;
}

void power(ll A[2][2], ll n){
	if(n==0 || n==1) return;
	ll temp[2][2] = {{1,1},{1,0}};
	power(A, n/2);
	mul(A, A);
	if(n%2 != 0) mul(A, temp);
}

int main(){
	int tc;
	ll n;
	cin>>tc;
	while(tc--){
		cin>>n;
		ll ans[2][2] = {{1,1}, {1,0}};
		if(n==0) cout<<0<<endl;
		else{
			power(ans, n+1); // calulate (ans)^(n+1) in O(lg(n)) 
			cout<<(ans[0][0])%mod<<endl;
		}	
	}
}