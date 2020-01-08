#include <iostream>
#include "Caesar.h"

int main(){
    Caesar caesar;
    std::string message;
    message = "Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.";
    caesar.setPlain(message);
    std::cout << "Message avant chiffrement: " << caesar.getPlain() << std::endl;
    std::cout << "Message après chiffrement: " << caesar.encode() << std::endl;
    caesar.write(true,"test.txt");
    caesar.write(false,"text.txt");

    return 0;
}
