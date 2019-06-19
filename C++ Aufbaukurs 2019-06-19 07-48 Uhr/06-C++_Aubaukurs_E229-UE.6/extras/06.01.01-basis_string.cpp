


#include<iostream>
#include<string> 


int main()
{
    std::string str; 
 
 	std::cout << "Ein String eingeben > ";
   	getline(std::cin,str);
 
    std::cout << "Der eingegeben String ist > ";
    std::cout << str << std::endl;
 	getchar();
    std::cout << "\nEs wird ein < s > hinten angelegt.";
	str.push_back('s'); 												// * push_front existiert fuer Strings nicht.
 	std::cout << "\nDer String nach der push_back Operation > ";
 	std::cout << str << std::endl;
  	getchar();
 	std::cout << "\nDas < s > wird wieder geloescht.";
    str.pop_back();
    std::cout << "\nDer String nach der pop_back Operation > ";
    std::cout << str << std::endl;

    return 0;
 
}
