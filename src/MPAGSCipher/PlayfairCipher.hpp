#ifndef MPAGSCIPHER_PLAYFAIRCIPHER_HPP
#define MPAGSCIPHER_PLAYFAIRCIPHER_HPP

#include "CipherMode.hpp"

#include <cstddef>
#include <string>
#include <vector>

/**
 * \file PlayfairCipher.hpp
 * \brief Contains the declaration of the PlayfairCipher class
 */

/**
 * \class PlayfairCipher
 * \brief Encrypt or decrypt text using the Playfair Cipher with the given key
 */
class PlayfairCipher {
  public:
    explicit PlayfairCipher(const std::string& key); //Will take key if it is inputted as a string - correct form and will operate cpher
    explicit PlayfairCipher(const std::size_t key); //Will take key if it is inputted as an integer - incorrect form and will cancel cipher
    std::string applyCipher(const std::string& inputText, //member function declaration
                            const CipherMode cipherMode) const;
    void setKey(const std::string& key); //Declare setKey function

  private:
    std::string key_priv{""};
};

#endif