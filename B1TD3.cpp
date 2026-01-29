#include <bits/stdc++.h>
using namespace std;
int main (){
	double tong=1;
	int n;
	cout<<"n = ";
	cin>>n;
	if(n>0&&n<20){
		double x;
	cout<<"x = ";
	cin>>x;
	double tongtu=1.0;
		for(int i=1;i<n;i++){
			tongtu*=x;
			tong+=(tongtu/(i+1));
		}
		cout<<"Tong S = ";
		cout<<tong;
	}
	else {
		cout<<"n khong thoa man!";
	}
}
