#include <iostream>
#include <string>

void fahrenheit() {
    std::cout << "Hello, let me convert the temperature to fahrenheit for you" << std::endl;
    std::string temp_cel_str;
    std::cout << "What is the temperature in celcius: " << std::endl;
    std::getline(std::cin, temp_cel_str);
    
    try {
        float temp_cel_float = std::stof(temp_cel_str);
        float answer = (temp_cel_float * 9 / 5) + 32;
        std::cout << temp_cel_float << " in fahrenheit is " << answer << std::endl;
    } catch (const std::invalid_argument&) {
        std::cout << "That is not a number, try again" << std::endl;
    } catch (const std::out_of_range&) {
        std::cout << "That number is out of range, try again" << std::endl;
    }
}

int main() {
    fahrenheit();
    return 0;
}