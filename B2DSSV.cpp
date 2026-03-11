#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"N = ";
	cin>>n;
	while(n<=0||n>=100){
		cout<<"N = ";
		cin>>n;
	}
	string s;
	string tenngannhat="";
	int min=10000;
	getline(cin,s);
	for(int i=1;i<=n;i++){
		cout<<"Ho ten "<<i<<": ";
		getline(cin,s);
		int minten=s.size();
		if(minten<min){
		 min=minten;
		 tenngannhat=s;}
	}
	cout<<"Ho ten ngan nhat (dau tien) la: "<<tenngannhat;
	
	
}
