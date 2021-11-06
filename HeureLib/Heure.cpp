#include "pch.h"
#include "Heure.h"
#include <assert.h>
namespace ti {
	Heure::Heure(int h, int m, int s)
	{
		this->heure = (h >= 0 && h < 24) ? h : 0;
		this->minute = (m >= 0 && m < 60) ? m : 0;
		this->seconde = (s >= 0 && s < 60) ? s : 0;	
	}
	bool Heure::heureValide() const
	{
		if (this->heure < 0 || this->heure >= 24)
			return false;
		if(this->minute < 0 || this->minute >= 60)
			return false;
		if (this->seconde < 0 || this->seconde >= 60)
			return false;
		return true;
	}
	void Heure::affiche() const
	{
		cout << "l'heure est: " << this->heure << "h:" << this->minute << "m:" << this->seconde << "s."<< endl;
	}
	bool Heure::operator>(const Heure& h) const
	{
		/*if (this->heure > h.heure)	return true;
		if (this->minute > h.minute)	return true;
		if (this->seconde > h.seconde)	return true;
		return false;*/
		if (this->heure > h.heure)	return true;
		if (this->heure == h.heure) {
			if (this->minute > h.minute)
				return true;
			if (this->minute == h.minute) {
				if (this->seconde > h.seconde)	return true;
			}
		}
		return false;
	}
	bool Heure::operator>=(const Heure& h) const
	{

		if (this->heure >= h.heure)	return true;
			if (this->heure == h.heure){
				if (this->minute >= h.minute)
					return true;
				if (this->minute == this->minute) {
					if (this->seconde >= h.seconde)	return true;
				}
			}
		return false;
	}
	bool Heure::operator<(const Heure& h) const
	{
		return !(*this >= h);
	}
	bool Heure::operator<=(const Heure& h) const
	{
		return !(*this>h);
	}
}
