#include <iostream>
using namespace std;
int main(){

int  counter=0; 
float  grade, highestl=0, lesser=10, sum=0, soma=0, mean, difference;

cout<<"When you want to stop the program enter a score greater than 10 "<<endl;

while (grade<=10){

cout<<"Enter the grade: ";
cin>>grade;

if (grade>=0 && grade<=10){
counter = counter+1;
}

if (highest<grade && grade<=10){
highest = grade;
}

else if (lesser>grade && grade>=0){
lesser = grade;
}

if (grade>=0 && grade<=10){
sum=sum+grade;
}


// Loop
}

mean=sum/counter;
difference=highest-lesser;

cout<< endl
	<<"The highest grade in the group is: "<<highest<<endl
	<<"The lowest grade in the group is: "<<lesser<<endl
	<<"between the highest and lowest grade in the group is: "<<difference<<endl
	<<"The arithmetic mean of the group is: "<<mean<<endl;


	return 0;
}
