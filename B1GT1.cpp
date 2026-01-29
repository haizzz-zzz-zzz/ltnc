#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll gt(ll n){
	if(n==0) return 1;
	else return n*gt(n-1);
}
int main (){
	char x;
	do{
		ll n;
		cout<<"Cho so nguyen n (n<10) = ";
		cin>>n;
		while(n<0||n>=10){
			cout<<"Cho so nguyen n (n<10) = ";
			cin>>n;
		}
		cout<<n<<"! = "<<gt(n)<<endl;;
		cout<<"Ban co tim tiep khong? (C/K) ";
		cin>>x;
	}while(x=='C'||x=='c');
}
