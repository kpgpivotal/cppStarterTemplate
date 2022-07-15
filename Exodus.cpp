#include <iostream>
#include "soldier.hpp"

using namespace std;

int main(int argc, char **argv) {

	if (__cplusplus == 201703L)
		cout << "C++17\n";
	else if (__cplusplus == 201402L)
		cout << "C++14\n";
	else if (__cplusplus == 201103L)
		cout << "C++11\n";
	else if (__cplusplus == 199711L)
		cout << "C++98\n";
	else
		cout << "pre-standard C++\n";



	Soldier agent{"Mat"};
	agent.fight();

	return 0;
}
