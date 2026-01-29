#include <bits/stdc++.h>
using namespace std;
int main (){
	double tong=0;
	int n;
	cout<<"N = ";
	cin>>n;
	if(n>0&&n<100){
		for(int i=1;i<=n;i++){
			tong+=(1.0/(i*(i+1)));
		}
		cout<<"Tong S = ";
		cout<<tong;
	}
	else {
		cout<<"So n khong thoa man!";
	}
}
