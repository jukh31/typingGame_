#include "main.h"
void Initialize(Data* data)
{
	srand((unsigned)time(NULL));

	data->lv = TRUE;
	data->i = Init;
	data->Exp = Init;
	data->life = Life;
	data->comp = Init;
	data->bonus = Init;
	data->bExp = Init;
	data->blife = Init;

}