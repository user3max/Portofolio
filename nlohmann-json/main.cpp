#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>

using json = nlohmann::json;

int main()
{
	std::ifstream j_object("myFile.json");
	json j = json::parse(j_object); //here we parse json file

	auto it_action = j.find("arg"); //find("example"), instead of example you put key that you want to find in json file 

	std::cout << std::boolalpha;
	std::cout << "Key \"arg\" was found: " << (it_action != j.end()) << std::endl; //(it_action != j.end()) return TRUE or FALSE
	//if (it_action != j.end()) is TRUE we can find value for this key in json with next code sequence
	if(it_action != j.end()) //we use if to make sure we don't get an error when (it_action != j.end()) is FALSE
	{
		std::cout << "Value at key \"arg\" : " << *it_action << std::endl;
		//*it_action return value at key arg
	}
	else
		std::cout << "Key \"arg\" was not found!" << std::endl;

	return 0;
}
