#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main (){
	ll tong=0;
	ll n;
	cout<<"N = ";
	cin>>n;
	while(n<=5||n>=1000){
		cout<<"Nhap lai!\n";
		cout<<"N = ";
		cin>>n;
	}
		for(int i=1;i<=n;i++){
			tong+=(i*(i+1)*(i+2));
		}
		cout<<"Tong S = ";
		cout<<tong;
	}
