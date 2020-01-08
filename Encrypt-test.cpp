#include "Encrypt.h" 

int main(){
	Encrypt e;
	std::string message = "Les sanglots longs Des violons De l'automne Blessent mon coeur D'une langueur Monotone.";
	e.setPlain(message);
	std::cout << "Affichage message non chiffré: " << e.getPlain() << std::endl;
	return 0;
}
