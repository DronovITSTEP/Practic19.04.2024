#pragma once

void showInt(int i[]);
void sortInt(int i[]);
void showDouble(double i[]);
void sortDouble(double i[]);

#ifdef INTEGER
	#define show showInt
	#define sort sortInt
#endif

#ifdef DOUBLE
	#define show showDouble
	#define sort sortDouble
#endif

