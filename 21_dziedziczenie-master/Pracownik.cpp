#include "Pracownik.h"

Pracownik::Pracownik(const std::string &im, const std::string &na, const std::string &pe, int liczba_godzin) : Osoba(im,na,pe)
{
  this ->liczba_godzin = liczba_godzin;
}
Pracownik::Pracownik(const Osoba &o, int liczba_godzin) : Osoba (o)
{
  this ->liczba_godzin = liczba_godzin;
}

int Pracownik::podaj_liczbe_godzin() const
{
 return liczba_godzin;
}