#include <iostream>
#include <string>
#include <cmath>

int main(){
    // Idk at this point
    // New Branch. Again. Again
    const std::string albet("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::string strStartNumber;
    int startNumberBase;
    int baseNumber;
    std::string sum;

    std::cout << "Enter start number: ";
    std::cin >> strStartNumber;

    std::cout << "Enter start number's base: ";
    std::cin >> startNumberBase;

    std::cout << "Enter to what base 0 < n <= 36: ";
    std::cin >> baseNumber;

    if (0 >= baseNumber || 37 <= baseNumber || 0 >= startNumberBase || 37 <= startNumberBase) return 1;

    int startNumber = std::stoi(strStartNumber, nullptr, startNumberBase);

    while (startNumber != 0){
        int constant = startNumber % baseNumber;

        if (constant > 9){
            sum.insert(0, &albet[constant - 10], 1);
        } else{
            sum.insert(0, std::to_string(constant));
        }

        startNumber = (startNumber - constant) / baseNumber;
    }
    
    if (sum.size() == 0){
        std::cout << "0" << ", base: " << baseNumber;
    } else {
        std::cout << sum << ", base: " << baseNumber;
    }
    std::cin >> startNumber;
    return 0;
}
