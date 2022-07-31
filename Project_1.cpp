#include <iostream>
using namespace std;
int main(){

float marco1, marco2, time=0, distance=0;
int speed=0; velocidade = 0;

marco1 != marco2;

//As long as the marco are different execute the while
while ( marco1 != marco2) {
cout<<"Enter the landmark of the first city: ";
cin>>marco1;

cout<<"Enter the landmark of the first city: ";
cin>>marco2;

cout<<endl;

	//calculation of all speeds
	while(speed< 80){
	speed = speed + 10;
	distance = marco2 - marco1;
	time = distance / speed;
	cout<<"O tempo gasto para percorrer a distancia de: " <<distance
		<<" with a speed of: "<< speed
		<<" was: "<< time<<endl;

	}//end of the second while
cout<<endl;
}//end of the first while

	return 0;
}