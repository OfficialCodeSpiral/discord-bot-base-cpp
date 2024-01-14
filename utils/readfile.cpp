#include <string>
#include <sstream>
#include <fstream>

std::string readFile(std::string file){
	std::string idk;

	std::stringstream sstr;
	std::fstream input(file, std::ios::in);
	sstr << input.rdbuf();
	idk = sstr.str();

	return idk;
}