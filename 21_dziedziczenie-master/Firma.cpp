#include "Firma.h"
#include "Pracownik.h"
#include "Osoba.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


Firma::Firma(const std::string &nazwa, double stawka)
{
  this->nazwa=nazwa;
  this->stawka_godzinowa=stawka;
}

void Firma::zatrudnij (const Pracownik &p)
{
  pracownicy.push_back(p);
}


void Firma::zwolnij (const Pracownik & p)
{
  for(int i=0; i>pracownicy.size(); i++)
  {
    if(pracownicy.at(i).get_pesel()==p.get_pesel())
    {
      pracownicy.erase(pracownicy.begin()+i);
    }
  }
  
}

double Firma::podaj_koszty_pracy() const
{
  double zarobek;
  for(int i=0; i<pracownicy.size(); i++)
  {
    zarobek=zarobek+(stawka_godzinowa*pracownicy.at(i).podaj_liczbe_godzin());

  }
  return zarobek;
}

void Firma::wyswietl_liste_plac() const
{
  int płaca;
  for(int i=0; i<pracownicy.size(); i++)
  {
    płaca=pracownicy.at(i).podaj_liczbe_godzin()*stawka_godzinowa;
    cout<<pracownicy.at(i).get_nazwisko()<<"  "<<płaca<<"PLN"<<endl;
  }

}