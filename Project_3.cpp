#include <iostream>
using namespace std;
int main(){

int a, b, c;

cout<<"Enter the first integer number: "<<endl;
cin>>a;

cout<<"Enter the second integer number: "<<endl;
cin>>b;

cout<<"Enter the third integernumber: "<<endl;
cin>>c;

if (a>b && a>c && b>c){
	cout<<"The numbers presented in descending order are: "
	<<a<<" "<<b<<" "<<c<<endl;
}

else if (a>b && a>c && c>b){
	cout<<"The numbers presented in descending order are: "
	<<a<<" "<<c<<" "<<b<<endl;
}

else if (b>a && b>c && a>c){
	cout<<"The numbers presented in descending order are: "
	<<b<<" "<<a<<" "<<c<<endl;
}

else if (b>a && b>c && c>a){
	cout<<"The numbers presented in descending order are: "
	<<b<<" "<<c<<" "<<a<<endl;
}

else if (c>a && c>b && a>b){
	cout<<"The numbers presented in descending order are: "
	<<c<<" "<<a<<" "<<b<<endl;
}

else if (c>a && c>b && b>a){
	cout<<"The numbers presented in descending order are: "
	<<c<<" "<<b<<" "<<a<<endl;
}

	return 0;
}