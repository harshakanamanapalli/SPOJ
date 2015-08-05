#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,n;
	cin>>x>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i)a[i]+=a[i-1];
	}
	int b[x+1];
	memset(b,0,sizeof(b));
	b[0] = 1;
	for(int i=0;i<=x;i++){
		for(int j=0;j<n;j++){
			if(i - a[j] >= 0){
				b[i] = (b[i] | b[i - a[j]]);
			}
		}
	}
	if(b[x])cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
