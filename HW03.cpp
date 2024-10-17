#include <iostream>

#include "functions_HW03.h"



int main() {

// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	//std::string user_name;
	char* user_name;
	std::cin >> user_name;

	int random_val = random_value();

	int attempts = check_value(random_val);

	std::cout << "attempt = " << attempts << std::endl << std::endl;

	high_scores(user_name, attempts);

	return 0;
}
