#include <iostream>

int main() {
    double temp;
    char unit;

//   Entry text
    std::cout << "***** Temperature Convertor *****" << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in celsius: ";
        std::cin >> temp;
        double temp1 = temp;
        temp1 = (1.8 * temp) + 32.0;
        std::cout << temp << " Celsius are " << temp1 << " Fahrenheit." << std::endl; 
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in fahrenhit: ";
        std::cin >> temp;
        double temp1 = temp;
        temp1 = (temp - 32) / 1.8;
        std::cout << temp << " Fahrenheit are " << temp1 << " Celsius." << std::endl; 
    }
    else{
        std::cout << "You entered the wrong unit, Enter C or F.\n Exiting...";
        return 1;
    }
//   Exit text 
    std::cout << "**********************************";

    return 0;
}
