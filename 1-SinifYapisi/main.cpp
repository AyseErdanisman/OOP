#include <iostream>

/* temel bir ornek ile sinif yapisi*/

class Hesapla{
	public:
		int genislik;
		int yukseklik;
		int alan;
	
	void giris()
	{
		std::cout <<"Yukseklik: "<<std::endl;
		std::cin >> yukseklik;
		
		std::cout <<"Genislik: "<<std::endl;
		std::cin >> genislik;
	}
	
	void hesapla()
	{
		alan = yukseklik * genislik;
		std::cout << alan;
	}
};

int main(int argc, char** argv) {
	
	Hesapla hesap;
	hesap.giris();
	hesap.hesapla();
	
	return 0;
}
