#include <bits/stdc++.h> 
bool cp(int n){
	int a=sqrt(n);
	return a*a==n;
}
using namespace std;
int main (){
	vector<int > v;
	cout<<"Nhap danh sach. Nhap 0 de ket thuc nhap!\n";
	int dem=0;
	while(1){
		int x;
		cout<<"Phan tu: ";
		cin>>x;
		if(x==0) break;
		else {
			v.push_back(x);
		}
	}
	cout<<"\nIn danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
		if(cp(v[i])) dem++;
	}
	cout<<"\nCac so chinh phuong trong DS:";
	for(int x:v){
		if(cp(x)) cout<<" "<<x;
	}
	cout<<endl;
	cout<<"Co "<<dem<<" so chinh phuong!";
}
