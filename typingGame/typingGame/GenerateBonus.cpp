#include "main.h"
void GenerateBonus(Data* data)
{
	data->bonus = rand() % MAX_VALUE;
	if (data->bonus == BONUS_SCORE)
		data->bExp = TRUE;
	else if (data->bonus == BONUS_LIFE)
		data->blife = TRUE;
}