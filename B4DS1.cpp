#include <bits/stdc++.h> 
using namespace std;
int main (){
	int n;
	cout<<"Cho n = ";
	cin>>n;
	vector<int > v;
	for(int i=0;i<n;i++){
		int x;
		cout<<"Phan tu "<<i+1<<": ";
		cin>>x;
		v.push_back(x);
	}
	cout<<"\nIn danh sach:";
	for(int i=0;i<v.size();i++){
		cout<<" "<<v[i];
	}
	cout<<endl;
	cout<<"Cho x = ";
	int x;
	cin>>x;
	cout<<"Them x vao dau va cuoi danh sach!";
	v.insert(v.begin()+0,x);
	v.insert(v.begin()+v.size(),x);
	cout<<"\nIn danh sach:";
	for(int x:v){
		cout<<" "<<x;
	}
	cout<<endl;
}
