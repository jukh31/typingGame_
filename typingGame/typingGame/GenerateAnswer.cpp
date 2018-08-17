#include "main.h"
void GenerateAnswer(Data* data, WordLV* wordLV)
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