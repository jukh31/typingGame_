#include "main.h"
void Check_Calculate(Data* data)
{
	if (strcmp(data->outPut, data->answer) == 0)
	{
		system("cls");// �׽�Ʈ��
		cout << "����" << endl;// �׽�Ʈ��
		data->Exp++;
		if (data->bExp == 1)
		{
			data->Exp += 2;
			data->bExp = 0;
		}
		else if (data->blife == 1)
		{
			data->life++;
			data->blife = 0;
		}
	}
	else
	{
		system("cls");// �׽�Ʈ��
		cout << "����" << endl;// �׽�Ʈ��
		data->bExp = 0;
		data->blife = 0;
		data->life--;
	}
}