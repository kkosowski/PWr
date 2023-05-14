#include "Osoba.h"
#include "string"
using namespace std;

Osoba::Osoba(const string &im,const string &na,const string &pe)
{
  this->imie=im;
  this-> nazwisko=na;
  this-> pesel=pe;
}
string Osoba::get_imie() const
{
  return imie;
}
string Osoba::get_nazwisko() const
{
  return nazwisko;
}
string Osoba::get_pesel() const
{
  return pesel;
}