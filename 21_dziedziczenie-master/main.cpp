#include <iostream>
#include "Firma.h"
#include "Osoba.h"
#include "Pracownik.h"
using namespace std;


int main() {
  Osoba o1=Osoba("Adam", "Tadam", "12345");
  cout<<o1.get_imie();

  Pracownik p1=Pracownik(o1, 8);
  cout<<p1.get_nazwisko();

  Pracownik p2=Pracownik("Tadek", "Norek","666", 10);

  Firma f1=Firma("Firmapol", 10);
  f1.zatrudnij(p1);
  f1.zatrudnij(p2);
  f1.wyswietl_liste_plac();
  cout<<f1.podaj_koszty_pracy();
 
   
 
  
}