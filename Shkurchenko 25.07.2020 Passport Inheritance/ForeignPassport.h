#pragma once

#include "Passport.h"
#include "List.h"



class ForeignPassport :public Passport
{
	List<string> visa;
public:
	ForeignPassport(string n, string dof, string nat, string i, string r, string v) :Passport(n, dof, nat, i, r)
	{
		visa.push_back(v);
	}
	void GetAllVisas()const
	{
		visa.print();
	}
	void SetVisa(string v)
	{
		visa.push_back(v);
	}
	void Print() const
	{
		cout << "Name: " << name << "\nDay of birth: " << day_of_birth << "\nNationality: " << nationality << "\nId: " << id << "\nResidence: " << residence << "\nVisa:" << visa.getLast() << endl << endl;
	}

};

