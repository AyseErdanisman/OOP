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

  // nes.priid = 954; // Derleme hatasý verir (Nesne sýnýf içindeki private deðiþkene doðrudan eriþim saðlayamaz).
  // nes.proid = 954; // Derleme hatasý verir (Nesne sýnýf içindeki protected deðiþkene doðrudan eriþim saðlayamaz).
  nes.pubid = 954;    // Nesne sýnýf içindeki public deðiþkene doðrudan eriþim saðlar.

  nes.deger_goster();

  return 0;
}


