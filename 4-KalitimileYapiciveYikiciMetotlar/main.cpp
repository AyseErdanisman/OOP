#include <iostream>
class Silah
{
	public: 
		std::string isim;
		int mermiKapasitesi;
		std::string renk;
		
		Silah()
		{
			std::cout << ""silah olustur";
		}

		~Silah()
		{
			std::cout << ""silah bitti";
		}
};

class Ak47 : public Silah
{
	//Ak47 sinifi Silah sinifindan miras aldi
	public: 
		//std::string isim;
		//int mermiKapasitesi;
		//tanimlaamma gerek kalmadi
		bool seriTek;
		int kayisUzunlugu;
		bool durbun;
		
		Ak47()
		{
			std::cout << ""Ak47 olustur";
		}
		
		~Silah()
		{
			std::cout << ""ak47 bitti";
		}
		
		void atesEt()
		{
			//
		}
};

class Pistol : public Silah
{
	public:
		int kurmaKoluDeseni;
		
		void atesEt()
		{
			//
		}
};

class M1 : public Silah
{
	public:
		bool seriTek;
		int kayisUzunlugu;
		int kurmaPozisyonu;
		
		void atesEt()
		{
			//
		}
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Ak47 ak47;
	ak47.isim = "Ak47 Yeni Dizayn";
	ak47.renk = "siyah";
		
	M1 m1;
	m1.isim;
	m1.renk = "beyaz";
	
	return 0;
}
