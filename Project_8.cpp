#include <iostream>
using namespace std;
int main(){

int num1, num2, i, result, p_sum=0;
 
 cout<<"Enter first number: ";
 cin>>num1;

 cout<<"enter second number that is higher than the first number: ";
 cin>>num2;

//do-while loop to check all numbers between num1 and num2
do{
num1=num1+1;
result = 0;
 
 	//beginning of the loop to find out if only one number is prime
 	for (i = 2; i <= num1 / 2; i++) {
    	if (num1 % i == 0) {
       	result=result+1;
       	break;       
    	}
 	} // end of the loop to find out if only one number is prime
 
 
	//treating the prime number result
 	if (result == 0){
    p_sum=p_sum+1;
 	}

} // end of do-while loop
while(num1<(num2-1));

cout<<endl<<"The total of prime numbers between these two numbers is: "<<p_sum<<endl;


    return 0;
}

