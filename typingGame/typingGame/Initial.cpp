#include "main.h"

void Initial::Initialize(Data* data)
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

void Initial::InitScreen()
{
	char input;
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;

	cout << "시작할려면 아무키 + 엔터" << endl;
	cin >> input;
	system("cls");
	cout << "시작 !" << endl;
}