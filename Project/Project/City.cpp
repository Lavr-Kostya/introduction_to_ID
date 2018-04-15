#include "City.h"



City::City()
{
	city = gcnew ArrayList();
}

ArrayList^ City::GetArrayList()
{
	return city;
}