#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cout<<"n=";
	cin>>n;
	int min=-INT_MAX;
	int x;
	while(n<=0||n>=200){
		cout<<"n=";
	cin>>n;
	}
	int a[n];
	vector<int >v;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
		if(a[i]>min&&a[i]<0){
			min=a[i];
		}
	}
	cout<<"Day so vua nhap:";
	for(int i=0;i<n;i++){
		if(i==0) {
			cout<<endl;
			cout<<a[i];
		}
		else cout<<"\t"<<a[i];
		if(a[i]==min) v.push_back(i);
	}
	cout<<endl;
	if(v.size()==0) cout<<"Day khong co so am nao!";
	else {
		cout<<"Vi tri dat so am lon nhat:";
		for(int i=0;i<v.size();i++){
		if(i==0) {
			cout<<endl;
			cout<<v[i];
		}
		else cout<<"\t"<<v[i];
	}
	}
}
