#include <iostream>
#include <cctype>

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);

    int vowels = 0, consonants = 0, numerics = 0;

    for (char c : input) {
        if (std::isalpha(c)) {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
                c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (std::isdigit(c)) {
            numerics++;
        }
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    std::cout << "Numerics: " << numerics << std::endl;

    return 0;
}