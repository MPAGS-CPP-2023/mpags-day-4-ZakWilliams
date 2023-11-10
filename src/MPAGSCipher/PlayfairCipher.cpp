#include "PlayfairCipher.hpp"

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

    // Make sure the key is upper case

    // Remove non-alpha characters

    // Change J -> I

    // Remove duplicated letters

    // Store the coords of each letter

    // Store the playfair cihper key map

}