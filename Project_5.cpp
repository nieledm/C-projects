#include <iostream>
#include <math.h>
using namespace std;
int main(){

int number, n1, n2, n3, n4; 
int rest, first_part, second_part, sum, calculation;

for(number=1000; number<=9999; number++){

//unraveling the number
n1 = number / 1000;
rest = number % 1000;
n2 = rest / 100;
rest = rest % 100;
n3 = rest / 10;
n4 = rest % 10;

//performing the sum
first_part = (n1 * 10 ) + n2;
second_part = (n3 * 10 ) + n4;
sum = first_part + second_part;
calculation = pow(sum,2);

if (calculation == number){
cout<<number<<endl;
}


}
	return 0;
}