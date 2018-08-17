#include "main.h"
void IsDead(Data* data)
{
	if (data->life == 0)
	{
		cout << "ÆĞ¹è" << endl;
		exit(1);
	}
}