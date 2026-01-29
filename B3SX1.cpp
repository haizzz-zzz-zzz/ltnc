#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
		cout<<"Nhap n = ";
		cin>>n;
	while(n<=0||n>=100){
		cout<<"Nhap n = ";
		cin>>n;
	}
		
	vector <double> v;
	for(int i=0;i<n;i++){
		double b;
		cout<<"A["<<i+1<<"] = ";
		cin>>b;
		v.push_back(b);
	}
	double x;
	cout<<"Cho so x = ";
	cin>>x;
	cout<<"Them x vao cuoi day!\n";
	v.insert(v.begin()+v.size(),x);
	cout<<"Day so:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
	cout<<endl;
	cout<<"Day sap xep tang:";
	sort(v.begin(),v.end());
	for(double x:v){
		cout<<" "<<x;
	}	
}
