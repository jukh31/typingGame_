#include "main.h"

void Generate::GenerateAnswer(Data* data, WordLV* wordLV)
{
	if (data->lv == LV_1)
		strcpy(data->outPut, wordLV->wordLV1[data->i]);
	else if (data->lv == LV_2)
		strcpy(data->outPut, wordLV->wordLV2[data->i]);
	else if (data->lv == LV_3)
		strcpy(data->outPut, wordLV->wordLV3[data->i]);
	else if (data->lv == LV_4)
		strcpy(data->outPut, wordLV->wordLV4[data->i]);
	else if (data->lv == LV_5)
		strcpy(data->outPut, wordLV->wordLV5[data->i]);
	PrintoutPut(data);
}

void Generate::GenerateBonus(Data* data)
{
	data->bonus = rand() % MAX_VALUE;
	if (data->bonus == BONUS_SCORE)
		data->bExp = TRUE;
	else if (data->bonus == BONUS_LIFE)
		data->blife = TRUE;
	PrintBonus(data);
}
void Generate::PrintBonus(Data* data)
{
	if (data->bExp == TRUE)
		cout << "BONUS EXP" << endl;
	if (data->blife == TRUE)
		cout << "BONUS LIFE" << endl;
}
void Generate::PrintoutPut(Data*data)
{
	cout << data->outPut << endl;
	data->i++;
}