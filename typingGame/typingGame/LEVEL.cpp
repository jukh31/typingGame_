#include "main.h"

void LEVEL::LEVEL_UP(Data* data)
{
	if (data->lv == LV_1 && data->Exp >= 3)
		Lvup(data);
	else if (data->lv == LV_2 && data->Exp >= 6)
		Lvup(data);
	else if (data->lv == LV_3 && data->Exp >= 9)
		Lvup(data);
	else if (data->lv == LV_4 && data->Exp >= 12)
		Lvup(data);
	else if (data->lv == LV_5 && data->Exp >= 15)
		Lvup(data);
}

void LEVEL::Lvup(Data* data)
{
	data->lv++;
	data->i = 0;
}