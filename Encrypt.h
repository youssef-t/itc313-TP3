#pragma once
#include <string>
#include <fstream>
#include <iostream>

class Encrypt {

public:

    Encrypt();

    std::string getPlain() const ;

    std::string getCipher()const ;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    virtual std::string encode();

    virtual std::string decode();

    void setPlain(std::string code);
    void setCipher(std::string code);

protected:

    std::string m_plain;

    std::string m_cipher;

};