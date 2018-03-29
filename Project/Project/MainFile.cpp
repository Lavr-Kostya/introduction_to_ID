#include "ATM.h"
#include "CrossRoads.h"
#include "Cash�ollectorMachine.h"
#include <stdio.h>
#include <stdlib.h>
#include "City.h"
#include "ATM.h"
#include "CrossRoads.h"

#define MAXCOUNTCROSSROADS 100
#define MAXMARKVALUE 10000

using namespace System;

int main()
{
	//	������ ��������� �� ���������� ����������� ����
	
	City^ town = gcnew City();	//	������ ������ "�����"
	CrossRoads^ elCR = gcnew CrossRoads();	// ������ ������ "�����������" ��� ������������� �������� �������� ������� ��������
	ATM^ elATM = gcnew ATM(); // ������ ������ "��������" ��� ������������� �������� �������� ������� ��������

	int a[MAXCOUNTCROSSROADS][MAXCOUNTCROSSROADS]; // ������� ����� ������ (-1 ��������, ��� ����� ���) 
	float x, y; //	���������� �����

	//		��������� ���������� (��� ����� � �������)
	
	Console::Write("Type count of points: "); int crossRoadsCount = int::Parse(Console::ReadLine()); Console::WriteLine();
	Console::Write("Type count of ATM: "); int atmCount = int::Parse(Console::ReadLine()); Console::WriteLine();

	// ------------------------------------------------------------------------------------------------
	
	
	for (int i = 0; i < crossRoadsCount; i++)
	{
		elCR->SetNumber(i);
		elCR->SetMark(MAXMARKVALUE);

		Console::Write("Type x of {0} point: ", i); x = float::Parse(Console::ReadLine()); Console::WriteLine();
		Console::Write("Type y of {0} point: ", i); y = float::Parse(Console::ReadLine()); Console::WriteLine();

		elCR->SetCoordinateX(x);
		elCR->SetCoordinateY(y);

		town->AddCrossRoad(elCR);

		elCR = gcnew CrossRoads();
	}

	for (int i = 0; i < atmCount; i++)
	{
		elATM->SetNumber(i);
		elATM->SetMark(MAXMARKVALUE);

		Console::Write("Type x of {0} ATM: ", i); x = float::Parse(Console::ReadLine()); Console::WriteLine();
		Console::Write("Type y of {0} ATM: ", i); y = float::Parse(Console::ReadLine()); Console::WriteLine();

		elATM->SetATMCoordinateX(x);
		elATM->SetATMCoordinateY(y);

		town->AddATM(elATM);

		elATM = gcnew ATM();
	}
	
	return 0;
}