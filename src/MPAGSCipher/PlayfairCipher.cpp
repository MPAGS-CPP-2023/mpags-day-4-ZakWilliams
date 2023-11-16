#include "PlayfairCipher.hpp"

#include <algorithm>
#include <iostream>
#include <string>

PlayfairCipher::PlayfairCipher(const std::size_t key) : key_priv{0}
{
    std::cout << "PlayfairCiper took a integer/size_t key, which is incorrect" << std::endl;
}

//member function definition - applycipher
std::string PlayfairCipher::applyCipher(
    const std::string& inputText,
    const CipherMode cipherMode) const
{
    std::cout << "PlayfairCiper took a string key, which is correct" << std::endl;
    // Change J → I

    // If repeated chars in a digraph add an X or Q if XX

    // if the size of input is odd, add a trailing Z

    // Loop over the input in Digraphs

    // - Find the coords in the grid for each digraph

    // - Apply the rules to these coords to get 'new' coords

    // - Find the letter associated with the new coords

    // return the text
    return inputText;
}

//member function definition 
void PlayfairCipher::setKey(const std::string& key)
{
    //store original key
    key_priv = key;
    std::cout << key_priv << std::endl;

    // Append the alphabet
    key_priv += "ABCEDFGHIJKLMNOPQRSTUVWXYZ";

    // Make sure the key is upper case
    std::transform(key_priv.begin(), key_priv.end(), key_priv.begin(), ::toupper);

    // Remove non-alpha characters
    auto iter1 = std::remove_if(key_priv.begin(), key_priv.end(), [](char c) { return !std::isalpha(c);}); // Implement 'remove_if'
    key_priv.erase(iter1,key_priv.end()); // Actually remove

    // Change J -> I, IULIUS
    std::transform(key_priv.begin(), key_priv.end(), key_priv.begin(), [](char c) {return (c == 'J') ? 'I' : c;});

    // Remove duplicated letters
    std::string used_letters{""};
    auto dup_checker = [&](char c) {
        if (used_letters.find(c) == std::string::npos) { //if the letter does not appear in the used_letters string, then
            used_letters += c;//Add it to used letters string
        } 
        return used_letters.find(c) != std::string::npos; // returns true if a copy of the letter is found in used_letters
    };

    auto iter2 = std::remove_if(key_priv.begin(), key_priv.end(), dup_checker);
    key_priv.erase(iter2, key_priv.end());

    // Store the coords of each letter
    

    // Store the playfair cipher key map

}