#pragma once
ref class Cash—ollectorMachine
{
private:
	float CarCoordinateX;
	float CarCoordinateY;
	int number;
	int mark;
	bool VisitTops;
public:
	Cash—ollectorMachine();
	float GetCarCoordinateX();
	float GetCarCoordinateY();
	int GetNumber();
	int GetMark();
	bool GetVisitTops();
	void SetCarCoordinateX(float CarCoordinateX1);
	void SetCarCoordinateY(float CarCoordinateY1);
	bool SetMark(int Mark1);
	bool SetVisitTops(bool VisitTops1);
};

