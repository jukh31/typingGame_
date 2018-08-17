#include <iostream>
#include "main.h"
int main()
{
	Data data;
	WordLV wordLV;
	LEVEL level;
	Generate generate;
	Initial initial;
	CheckCondition checkCD;
	initial.Initialize(&data);
	initial.InitScreen();
	
	while (1)
	{
		
		
		generate.GenerateBonus(&data);
		generate.GenerateAnswer(&data, &wordLV);
		cin >> data.answer;
		checkCD.Check_Calculate(&data);
		level.LEVEL_UP(&data);
		checkCD.IsVictory(&data);
		

	}
	return 0;
}