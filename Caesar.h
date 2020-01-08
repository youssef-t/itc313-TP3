#pragma once
#include "Encrypt.h"



class Caesar: public Encrypt {

public:
//Décalage par défaut est 3
    Caesar(int decalage = 3);

    std::string encode()  ;

    std::string decode()  ;

private:
    int m_decalage ;
};

