#include "main.h"
void PrintBonus(Data* data)
{
	if (data->bExp == TRUE)
		cout << "BONUS EXP" << endl;
	if (data->blife == TRUE)
		cout << "BONUS LIFE" << endl;
}