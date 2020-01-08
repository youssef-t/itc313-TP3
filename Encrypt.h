#pragma once
#include <string>
#include <fstream>
#include <iostream>

class Encrypt {

public:

    Encrypt();

    std::string get_plain() const ;

    std::string get_cipher()const ;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    std::string encode();

    std::string decode();

protected:

    std::string m_plain;

    std::string m_cipher;

};