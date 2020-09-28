#pragma once

#include <iostream>
using namespace std;

class Passport
{
protected:
	string name;
	string day_of_birth;
	string nationality;
	string id;
	string residence;
public:
	Passport(string n, string dof, string nat, string i, string r);
	string GetName()const;
	void SetName(string n);
	string GetDayOfBirth()const;
	void SetDayOfBirth(string dof);
	string GetNationality()const;
	void SetNationality(string nat);
	string GetId()const;
	void SetId(string i);
	string GetResidence()const;
	void SetResidence(string r);
	void Print()const;
};

