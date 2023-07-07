#include "getopt.h"

void dates()
{
	today_date _td;
	_td.d.days = 23;
	_td.d.month = 6;
	_td.d.year = 2023;

	_td.day = FRIDAY;
	if (_td.day == FRIDAY)
	printf("Today's date is: %d/%d/%d\n", _td.d.days, _td.d.month,_td.d.year);
}
