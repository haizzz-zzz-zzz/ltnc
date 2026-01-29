#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cout<<"Nhap xau:";
	getline(cin,s);
	if(s.empty()) cout<<"Xau rong!";
else{	stringstream ss(s);
	string w;
	cout<<"Chuan hoa:";
	vector<string> v;
	while(ss>>w){
		v.push_back(w);
		v.push_back(" ");
	}
	v.pop_back();
	for(string x:v){
		cout<<x;
	}
	
	
}
}
