#pragma once
class TimeNode3
{
public:
	void setYear();
	void setMonth();
	void setDay();
	void setHour();
	void setMinute();
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	int getMinute();
	void ShowNode();
private:
	int year;
	int month;
	int day;
	int hour;
	int minute;
};