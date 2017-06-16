#include <iostream>
#include <random>


using namespace std;

// impliment rando choice pfunction
// returns true with the probability given as parameter
bool RandomChoice(double probability){
    return rand()/(RAND_MAX + 0.1) > probability;
}

int main()
{
	
	// set seed
	srand(static_cast<unsigned int>(time(NULL)));
	
    cout << boolalpha << RandomChoice(0.5) << endl;
	
}