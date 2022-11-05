#include <iostream>

/* Kurucu ve yikici metotlar */
/*Yapici metot ve yikici metot sinif ismiile ayni metotlardir.*/

class Payment
{
	public: 
		float tutar;
		
		std::string paraBirimi;
		
		std::string hashCode = "15682887";
		
		//YAPICI METOTLAR
		Payment(bool f, std::string a)
		{
			tutar = 1.2;
			paraBirimi = "tl";
			//std::cout << "yap ";
			std::cout << a ;
		}

		Payment(bool f)
		{
			//Yapici metot
			tutar = 1.2;
			paraBirimi = "tl";
			std::cout << a ;
		}
		
		Payment(){
			
		}
		
		//YIKICI METOTLAT (~)
		
		~Payment()
		{
			std::cout << "Bitti" ;
		}
		
		void pay()
		{
			//payTo(hashCode, tutar, paraBirimi);
			std::cout << "Odeme alindi" ;	
		}
};

int main(int argc, char** argv) {
	
	//Payment pay(true, "Merhaba ");
	//2 parametre gonderilerise 1. yapici metot
	//tek parametre gonderilirse 2. yapici metot
	//parametre gonderilmezse 3. yapici metoto calisir
	
	Payment pay();
	pay.tutar = 10.20;
	pay.paraBirimi = "tl";
	//pay.hashCode = "3658796";
	pay.pay();
	
	return 0;
}
