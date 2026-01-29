#include <bits/stdc++.h> 
using namespace std;
int main (){
	vector<int > v;
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
	}
	cout<<endl;
	cout<<"Cho x = ";
	int x;
	cin>>x;
	if(x>0){
		cout<<"x khong am. Them x vao cuoi DS!";
		v.insert(v.begin()+v.size(),x);
			cout<<"\nIn danh sach:";
	for(int x:v){
		cout<<" "<<x;
	}
	cout<<endl;
	}
	else {
			cout<<"x am. Them x vao dau DS!";
		v.insert(v.begin()+0,x);
			cout<<"\nIn danh sach:";
	for(int x:v){
		cout<<" "<<x;
	}
	cout<<endl;
	}
	}
