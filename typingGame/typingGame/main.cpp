#include <iostream>
#include "main.h"
int main()
{
	Data data;
	WordLV wordLV;
	Initialize(&data);
	char input;
	InitScreen();
	
	while (1)
	{
		
		
		GenerateBonus(&data);
		PrintBonus(&data);
		GenerateAnswer(&data, &wordLV);
		cin >> data.answer;
		Check_Calculate(&data);
		LEVEL_UP(&data);
		IsVictory(&data);
		IsDead(&data);
		PrintResult(&data);
		

	}
	return 0;
}