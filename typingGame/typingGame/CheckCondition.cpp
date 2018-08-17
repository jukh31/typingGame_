#include "main.h"
void CheckCondition::Check_Calculate(Data* data)
{
	if (strcmp(data->outPut, data->answer) == 0)
	{
		system("cls");
		cout << "성공" << endl;
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
		system("cls");
		cout << "실패" << endl;
		data->bExp = 0;
		data->blife = 0;
		data->life--;
	}
}
void CheckCondition::IsVictory(Data* data)
{
	if (data->lv == 6)
	{
		cout << "승리" << endl;
		exit(1);
	}
	IsDead(data);
}

void CheckCondition::IsDead(Data* data)
{
	if (data->life == 0)
	{
		cout << "패배" << endl;
		exit(1);
	}
	PrintResult(data);
}

void CheckCondition::PrintResult(Data* data)
{
	cout << "lv" << data->lv << endl;
	cout << "exp" << data->Exp << endl;
	cout << "life" << data->life << endl;
	cout << endl << endl << endl << endl;
}