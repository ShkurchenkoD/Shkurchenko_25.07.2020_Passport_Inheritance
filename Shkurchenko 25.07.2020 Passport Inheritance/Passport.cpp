#include "Passport.h"


Passport::Passport(string n, string dof, string nat, string i, string r)
{
	name = n;
	day_of_birth = dof;
	nationality = nat;
	id = i;
	residence = r;
}

string Passport::GetName() const
{
	return name;
}

void Passport::SetName(string n)
{
	name = n;
}

string Passport::GetDayOfBirth() const
{
	return day_of_birth;
}

void Passport::SetDayOfBirth(string dof)
{
	day_of_birth = dof;
}

string Passport::GetNationality() const
{
	return nationality;
}

void Passport::SetNationality(string nat)
{
	nationality = nat;
}

string Passport::GetId() const
{
	return id;
}

void Passport::SetId(string i)
{
	id = i;
}

string Passport::GetResidence() const
{
	return residence;
}

void Passport::SetResidence(string r)
{
	residence = r;
}

void Passport::Print() const
{
	cout << "Name: " << name << "\nDay of birth: " << day_of_birth << "\nNationality: " << nationality << "\nId: " << id << "\nResidence: " << residence << endl << endl;
}



