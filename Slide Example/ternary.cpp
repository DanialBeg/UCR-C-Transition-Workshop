#include <iostream>
#include <string>

int main(int argC, char** argV)
{	
	std::string msg = "";
	int percent;

	std::cout << "Enter your fuel percentage: ";
	std::cin >> percent;

	msg = percent == 100 ? "Full."                     :
		  percent >= 75  ? "More than 3/4."              : 
		  percent >= 50  ? "More than half."             :
		  percent >= 25  ? "More than 1/4."              :
		  percent >= 1   ? "Should consider filling up." :
		                   "Nice paperweight."           ;
	
	std::cout << msg << std::endl;
	return 0;
}
