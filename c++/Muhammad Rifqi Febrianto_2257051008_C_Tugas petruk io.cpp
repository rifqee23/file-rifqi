#include <iostream>
#include <fstream>

int main(){
//	std::ofstream inFile("petruk.txt");
//	
//	inFile << "Saya rifqi";
//    inFile.close();
//    
//    std::string teks;
//	std::ifstream outFile("petruk.txt");
//	
//	while(std::getline(outFile, teks)){
//		std::cout << teks << "\n";
//	}
	std::string teks[4];
	
	for(int i = 0; i < 4; i++){
		std::cin >> teks[i];
	}
	
	std::ofstream readFile("barang.txt");
	
	for(int i = 0; i < 4; i++){
		readFile << teks[i] << "\n";
	}
}
