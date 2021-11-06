#pragma once
#include "Heure.h"
namespace ti {
    class DateH :
        public Heure
    {
    private:
        int jour, mois, annee;
    public:
        DateH(int h, int min, int s, int a, int mois, int j);
        bool dateValide()const;
        void affiche()const;
        bool LeapYear()const;
        int maxJour()const;
        bool operator>(const DateH& d)const;
        bool operator>=(const DateH& d)const;
        bool operator<=(const DateH& d)const;
        bool operator<(const DateH& d)const;
    };
}
