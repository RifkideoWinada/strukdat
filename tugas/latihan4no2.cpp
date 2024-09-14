#include <iostream>
#include <string>
#include <algorithm>

bool find_word(const std::string& sentence, const std::string& word) {
    size_t start_pos = 0;
    while ((start_pos = sentence.find(word, start_pos)) != std::string::npos) {
        // If the word is found, return true
        return true;
        start_pos++;
    }
    // If the word is not found, return false
    return false;
}

int main() {
    std::string sentence;
    std::string word;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Enter a word to search for: ";
    std::cin >> word;

    if (find_word(sentence, word)) {
        std::cout << "The word '" << word << "' is found in the sentence." << std::endl;
    } else {
        std::cout << "The word '" << word << "' is not found in the sentence." << std::endl;
    }

    return 0;
}