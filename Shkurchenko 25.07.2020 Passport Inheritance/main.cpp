
#include "Passport.h"
#include "ForeignPassport.h"
#include "List.h"



int main()
{
	Passport first("Knush Taras Muhailovuch", "18.05.1978", "Peace Pigeon", "33742947437", "Hong Kong");
	first.Print();

	ForeignPassport second("Kozhymiyako Danulo Igorovuch", "25.03.1965", "Ukrainian", "33562940384", "Veluki Dybu", "15 Oct 2019 - France");
	second.Print();
	second.SetVisa("17 Dec 2019 - Italy");
	second.Print();
	second.SetVisa("23 Jan 2020 - Spain");
	second.Print();
	second.SetVisa("14 Feb 2020 - China");
	second.Print();
	second.GetAllVisas();

}