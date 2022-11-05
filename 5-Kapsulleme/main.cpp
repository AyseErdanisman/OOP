#include <iostream>

using namespace std;

class sinif {
  private:
    int priid;

  protected:
    int proid;

  public:
    int pubid;
    
    void deger_ata(int pid1, int pid2, int pid3)
    {
      priid = pid1; proid = pid2; pubid = pid3;
      cout << "sinif degiskenlerine deger atama: " << priid << " " << proid << " " << pubid << endl;
    }
    
    void deger_goster()
    {
      cout << "sinif degisken degerleri: " << priid << " " << proid << " " << pubid << endl;
    }
};

int main(void)
{
  sinif nes;

  cout << "nes degiskeninin sinif elemanlarina erisimi:" << endl;
  cout << "--------------------------------------------" << endl;
  nes.deger_ata(7, 21, 135);
  nes.deger_goster();

  // nes.priid = 954; // Derleme hatas� verir (Nesne s�n�f i�indeki private de�i�kene do�rudan eri�im sa�layamaz).
  // nes.proid = 954; // Derleme hatas� verir (Nesne s�n�f i�indeki protected de�i�kene do�rudan eri�im sa�layamaz).
  nes.pubid = 954;    // Nesne s�n�f i�indeki public de�i�kene do�rudan eri�im sa�lar.

  nes.deger_goster();

  return 0;
}


