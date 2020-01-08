#pragma once
#include "Encrypt.h"


class Caesar2: public Encrypt {

public:
//Décalage par défaut est 3
    Caesar2(int decalage = 3);

    std::string encode();

    std::string decode();

private:
    int m_decalage ;
};

