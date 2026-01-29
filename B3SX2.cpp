#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
		cout<<"Nhap n = ";
		cin>>n;
	if(n<=4||n>=100){
		cout<<"Ket thuc!";
		return 0;
	}
	else {
		
	vector <double> v;
	for(int i=0;i<n;i++){
		double b;
		cout<<"so["<<i+1<<"] = ";
		cin>>b;
		v.push_back(b);
	}

	v.insert(v.begin()+1,x);
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
	cout<<endl;
	cout<<"Day sap xep:";
	sort(v.begin(),v.end());
	for(double x:v){
		cout<<" "<<x;
	}	
}
}
