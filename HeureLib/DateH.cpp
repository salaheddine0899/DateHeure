#include "pch.h"
#include "DateH.h"

namespace ti {
	DateH::DateH(int h, int min, int s, int a, int mois, int j) :Heure(h, min, s)
	{
		this->annee = (a >= 1900 && a < 2999) ? a : 1900;
		this->mois = (mois > 0 && mois < 13) ? mois : 1;
		this->jour = (j > 0 && j <= this->maxJour()) ? j : 1;

	}
	bool DateH::dateValide() const
	{
		if (this->annee >= 1900 && this->annee <= 2900) 
			if (this->mois >= 1 && this->mois <= 12)
				if (this->jour >= 1 && this->jour <= this->maxJour())
					return true;
		return false;
	}

	void DateH::affiche() const
	{
		cout << this->jour << '/' << this->mois << '/' << this->annee << ' ';
		Heure::affiche();
	}
	
	bool DateH::LeapYear() const
	{
		if (!this->annee % 400)	return true;
		if (!this->annee % 100)	return false;
		if (!this->annee % 4)	return true;
	}
	int DateH::maxJour() const
	{
		if (LeapYear()) {
			if (this->mois == 2) {
				return 29;
			}
		}
		if (this->mois == 2)	return 28;
		if ((!(this->mois % 2) && this->mois > 7)&& ((this->mois % 2) && this->mois <= 7) ){
			return 31;
		}
		return 30;
	}
	bool DateH::operator>(const DateH& d) const
	{
		if (this->annee > d.annee)
			return true;
		if (this->annee == d.annee)
		{
			if (this->mois > d.mois)
				return true;
			if (this->mois == d.mois) {
				if (this->jour > d.jour)
					return true;
				if (this->jour == d.jour)
					return Heure::operator>(d);
			}
		}
		return false;
	}
	bool DateH::operator>=(const DateH& d) const
	{
		if (this->annee >= d.annee)
			return true;
		if (this->annee == d.annee)
		{
			if (this->mois >= d.mois)
				return true;
			if (this->mois == d.mois) {
				if (this->jour >= d.jour)
					return true;
				if (this->jour == d.jour)
					return Heure::operator>=(d);
			}
		}
		return false;
	}
	bool DateH::operator<=(const DateH& d) const
	{
		return !(*this > d);
	}
	bool DateH::operator<(const DateH& d) const
	{
		return !(*this >= d);
	}
}

