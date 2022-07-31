#include <iostream>
#include <math.h>
using namespace std;
int main(){

//counter = number of students...total of 25

int counter=0, option;
float p_score, f_score, f_sum =0, p_sum=0, f_sum_square=0, p_sum_square=0;
float f_deviation, p_deviation;

while (counter<25){

counter=counter+1;

cout<<"Enter the student's grade: ";
cin>>p_score;

cout<< "When did the student turn in the assignment? enter the corresponding number "<<endl
<<"[1] By 04/20"<<endl
<<"[2] From 04/21 to 05/02"<<endl 
<<"[3] From 03/05 to 30/05"<<endl 
<<"[4] From 31/05 to 30/06"<<endl;
cin>>option;



if (option==1){
f_score=p_score+10;
cout<<"The student's final grade is: "<<f_score<<endl<<endl;
}

else if(option==2){
f_score=p_score;
cout<<"The student's final grade is: "<<f_score<<endl<<endl;
}

else if(option==3){
f_score=p_score/2;
cout<<"The student's final grade is: "<<f_score<<endl<<endl;
}

else if (option==4){
f_score=0;
cout<<"The student's final grade is: "<<f_score<<endl<<endl;
}

else{
cout<<"The entered value does not correspond to a valid option "<<endl<<endl;
counter=counter-1;
}

f_sum=f_sum+f_score;
f_sum_square=f_sum_square+pow (f_sum, 2);

p_sum=p_sum+p_score;
p_sum_square=p_sum_square+pow (p_sum,2);

}

p_deviation=sqrt((p_sum_square-(pow(p_sum,2)/counter))/(counter-1));
f_deviation=sqrt((f_sum_square-(pow(f_sum,2)/counter))/(counter-1));


cout<<"The average of the provisional scores is: "<<(p_sum/counter)<<endl
	<<"The average of the final grades is: "<<(f_sum/counter)<<endl
	<<"The Standard Deviation of the provisional grades is: "<< p_deviation<<endl
	<<"The Standard Deviation of the final grades is: "<< f_deviation<<endl;


	return 0;
}