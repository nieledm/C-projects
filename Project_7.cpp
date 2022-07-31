#include <iostream>
using namespace std;
int main(){

float expense, v_ticket=5.50, n_ticket=94, profit, highest, highest_ticket, highest_value;

expense=200.00;

//iticket goes from 5 to 1 from 0.5 to 0.5
//decrease of 0.5
//increases the number of tickets by 26 with each 0.5 cent reduction

std::cout << "|\tValor do ingresso\t|\tNumero de ingressos\t|\tLucro esperado\t|" << std::endl;
while (v_ticket>=1.5){
	v_ticket=v_ticket-0.5;
	n_ticket=n_ticket+26;
	profit= (v_ticket*n_ticket)-expense;

std::cout << "|        \t" << v_ticket << "\t        |          \t" << n_ticket <<"\t        |       \t" <<profit<< "\t|" << std::endl;
	
	if(highest<profit){
		highest=profit;
		highest_ticket=n_ticket;
		highest_value=v_ticket;
	}

}
std::cout << endl<<endl<<"The highest expected profit is : "<<highest << std::endl;
std::cout <<"With a total of "<<highest_ticket <<" tickets sold "<< std::endl;
std::cout <<"With the ticket o the value of "<<highest_value << std::endl;

	return 0;
}