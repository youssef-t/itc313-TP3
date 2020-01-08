#include "Encrypt.h" // Encrypt.h comporte iostream et fstream


Encrypt::Encrypt(){

}


//getters
std::string Encrypt::get_plain() const {
	return m_plain;
}

std::string Encrypt::get_cipher() const{
	return m_cipher;
}


bool Encrypt::read(bool isPlain, std::string filename){
	//ouvrerture du fichier nommé filename
	std::ifstream monFichier(filename.c_str());

	//test s'il y a pas eu de problèmes
	if(monFichier){
		//L'ouverture s'est bien passée, on peut donc lire

		isPlain ? std::cout << "LECTURE MESSAGE NON CHIFFRE:\n" : std::cout << "LECTURE MESSAGE CHIFFRE:\n" ;
        
        std::string ligne; //Une variable pour stocker les lignes lues

    while(getline(monFichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        std::cout << ligne << std::endl;
	}
	else{
		std::cout << "Erreur: impossible d'ouvrir le fichier. (valeur retourne false)" << std::endl;
		return false ;
	}
	return true ;
}

bool Encrypt::write(bool isPlain, std::string filename){
	//Ouverture du fichier nommé filename
	std::ofstream monFichier(filename.c_str());
	
	//test s'il y a pas eu de problèmes
	if(monFichier){
		if(isPlain){
			std::cout << "ECRITURE DU MESSAGE NON CHIFFRE..." << std::endl;
			monFichier << m_plain << std::endl ;
		}
		else{
			std::cout << "ECRITURE DU MESSAGE CHIFFRE..." << std::endl;
			monFichier << m_cipher << std::endl ;
		}
	}
	else {
		std::cout << "Erreur: impossible d'ouvrir le fichier (valeur retourne false)" << std::endl;
		return false;
	}

	return true ;
}



std::string Encrypt::encode(){
	//Variable temporaire pour retourner le message chiffré
	std::string cipher = m_cipher;
	//copier le message non chiffré dans la variable contenant le message chiffré
	m_cipher = m_plain ;
	return cipher;
}


std::string Encrypt::decode(){
	//Variable temporaire pour retourner le message 
	std::string plain = m_plain;
	//copier le message chiffré dans la variable contenant le message non chiffré
	m_plain = m_cipher ;
	return plain;
}