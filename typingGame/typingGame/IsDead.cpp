#include "main.h"
void IsDead(Data* data)
{
	if (data->life == 0)
	{
		cout << "�й�" << endl;
		exit(1);
	}
}