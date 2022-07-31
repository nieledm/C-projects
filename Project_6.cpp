#include <iostream>
#include <random>

int main(){

using std::cout;
using std::endl;
using std::cin;

constexpr int MIN = 100;
constexpr int MAX = 1000;

constexpr int RAND_NUMS_TO_GENERATE = 10;

    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);

    int stop;
    stop=1;

    while (stop!=0){
    
        cout<<endl<<
        	"The number drawn is : "<< distr(eng) <<endl<<endl
        	<<"If you wish to stop the draw, enter zero: ";
        	cin>>stop;
    }
    

    return 0;
}
