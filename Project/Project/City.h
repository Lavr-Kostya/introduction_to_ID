#pragma once

using namespace System::Collections;

ref class City
{
private:
	ArrayList^ city;
public:
	City();
	ArrayList^ GetArrayList();
};

