#include "easyfind.hpp"
#include <list>

int main(void)
{
	std::list<int> myList(5);
    myList.push_back(10);
    myList.push_back(11);
    myList.push_back(12);
    myList.push_back(13);
    myList.push_back(14);

	try
	{
        std::list<int>::iterator maillon;
		maillon = easyfind(myList, 12);
        std::cout << "Contain : " << *maillon << std::endl;
        maillon = easyfind(myList, 26);
	}
	catch (std::string error)
	{
		std::cout << "ERROR : " << error << std::endl;
	}
	return (0);
}
