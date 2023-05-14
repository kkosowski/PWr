#ifndef PRACOWNIK_H__ 
#define PRACOWNIK_H__ 
#include "string"
#include "Osoba.h"

class Pracownik : public Osoba
{
  int liczba_godzin;
public:
  Pracownik(const std::string & im, const std::string & na, const std::string & pe, int liczba_godzin);

  Pracownik(const Osoba & o, int liczba_godzin);
  
  int podaj_liczbe_godzin() const;
};

#endif