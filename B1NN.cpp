#include<bits/stdc++.h>
using namespace std;

bool isLeapYear(int year){
	return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}
int main(){
	int n;
	do {
		cout<<"Nhap nam:";cin>>n;
	}
	while(n<0||n>20000);
	if(isLeapYear(n)){
		cout<<n<<" la nam nhuan\n";
	}
	else{
		cout<<n<<" khong la nam nhuan\n";
	}
}
