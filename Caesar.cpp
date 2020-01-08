#include "Caesar.h"

#define A 65
#define Z 90
#define a 97
#define z 122

Caesar::Caesar(int decalage) : m_decalage(decalage % 26 ){

}

std::string Caesar::encode() {
    std::string code = m_plain ;

    //sachant qu'en ASCII A = 65 et Z = 90 et a = 97 et z = 122
    for(int i=0; i < (int)code.length() ; i++){
        if((code[i] > a-1 && code[i] < z+1) && (code[i] > A && code[i] < Z)){
            code[i] += m_decalage;
            if(code[i] > z)
                code[i] = a + (code[i] - z - 1) ;  //pour assurer que toutes lettres restent des lettres
            else if(code[i] > Z)
                code[i] = A + (code[i] - Z - 1 ) ;

            m_cipher[i] = code[i];
        }
    }
    return code;
}

std::string Caesar::decode() {
    std::string code = m_cipher;

    //sachant qu'en ASCII A = 65 et Z = 90 et a = 97 et z = 122
    for(int i=0 ; i < (int)code.length() ; i++){
        if((code[i] > a-1 && code[i] < z+1) && (code[i] > A && code[i] < Z)){
            code[i] -= m_decalage;
            if(code[i] < a)
                code[i] = z - ( a - code[i] - 1) ;  //pour assurer que toutes lettres restent des lettres
            else if(code[i] > A)
                code[i] = Z - ( A - code[i] - 1) ;

            m_cipher[i] = code[i];
        }
    }
    return code;
}

