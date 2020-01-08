#include "Caesar2.h"


Caesar::Caesar(int decalage) : m_decalage(decalage % 240){

}

std::string Caesar::encode() {
    std::string code = m_plain ;

    for(int i=0; i < (int)code.length() ; i++){
            code[i] += m_decalage;
            m_cipher[i] = code[i];
        }

    return code;
}

std::string Caesar::decode() {
    std::string code = m_cipher;

    for(int i=0 ; i < (int)code.length() ; i++){
            code[i] -= m_decalage;
            m_cipher[i] = code[i];
        }

    return code;
}

