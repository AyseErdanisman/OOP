#include <iostream>
class Silah
{
	public: 
		std::string isim;
		int mermiKapasitesi;
}

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
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Ak47 ak47;
	ak47.isim = "Ak47 Yeni Dizayn";
	
	M1 m1;
	m1.isim;
	
	return 0;
}
