#include <bits/stdc++.h>
using namespace std;

using ll=long long ;

ll gcd(int a,int b){
	while(b!=0){
		int tam=a%b;
		a=b;
		b=tam;
	}
	return abs(a);
}
int main (){
	char x;
	ll a,b;
	do{
		cout<<"Cho so nguyen a = ";
		cin>>a;
		cout<<"Cho so nguyen b = ";
		cin>>b;
		cout<<"Ket qua UCLN (a,b) = "<<gcd(a,b);
		cout<<"\nBan co muon tim tiep khong(C/K)? ";
		cin>>x;
	}while(x=='C'||x=='c');
}
