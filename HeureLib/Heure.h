#pragma once
#include<iostream>
using namespace std;
namespace ti {
	class Heure
	{
	protected:
		int heure;
		int minute;
		int seconde;
	public:
		Heure(int h = 0, int m = 0, int s = 0);
		bool heureValide()const;
		void affiche()const;
		bool operator>(const Heure& h)const;
		bool operator>=(const Heure& h)const;
		bool operator<(const Heure& h)const;
		bool operator<=(const Heure& h)const;
	};
}

