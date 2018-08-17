#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Data.h"
using namespace std;
#define LV 20
#define Init 0
#define Life 3
#define TRUE 1
#define MAX_VALUE 9
#define BONUS_SCORE 3
#define BONUS_LIFE 7
#define LV_1 1
#define LV_2 2
#define LV_3 3
#define LV_4 4
#define LV_5 5

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
void GenerateBonus(Data* data)
{
	data->bonus = rand() % MAX_VALUE;
	if (data->bonus == BONUS_SCORE)
		data->bExp = TRUE;
	else if (data->bonus == BONUS_LIFE)
		data->blife = TRUE;
}
void InitScreen()
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
void PrintBonus(Data* data)
{
	if (data->bExp == TRUE)
		cout << "BONUS EXP" << endl;
	if (data->blife == TRUE)
		cout << "BONUS LIFE" << endl;
}
void PrintoutPut(Data*data)
{
	cout << data->outPut << endl;//출력
	data->i++;//단어 변수
}
void Check_Calculate(Data* data)
{
	if (strcmp(data->outPut, data->answer) == 0)
	{
		system("cls");// 테스트용
		cout << "성공" << endl;// 테스트용
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
		system("cls");// 테스트용
		cout << "실패" << endl;// 테스트용
		data->bExp = 0;
		data->blife = 0;
		data->life--;
	}
}
void Lvup(Data* data)
{
	data->lv++;
	data->i = 0;
}
void LEVEL_UP(Data* data)
{
	if (data->lv == LV_1 && data->Exp >= 3)
		Lvup(data);
	else if (data->lv == LV_2 && data->Exp >= 6)
		Lvup(data);
	else if (data->lv == LV_3 && data->Exp >= 9)
		Lvup(data);
	else if (data->lv == LV_4 && data->Exp >= 12)
		Lvup(data);
	else if (data->lv == LV_5 && data->Exp >= 15)
		Lvup(data);
}
void PrintResult(Data* data)
{
	cout << "lv" << data->lv << endl;
	cout << "exp" << data->Exp << endl;
	cout << "life" << data->life << endl;
	cout << endl << endl << endl << endl;
}
void IsVictory(Data* data)
{
	if (data->lv == 6)
	{
		cout << "승리" << endl;
		exit(1);
	}
}
void IsDead(Data* data)
{
	if (data->life == 0)
	{
		cout << "패배" << endl;
		exit(1);
	}
}





int main()
{
	Data data;
	Initialize(&data);
	const char wordLV1[LV][32] =
	{
		"가가","가나","가다","가라","가마","가바","가아","가자"
	};
	const char wordLV2[LV][32] =
	{
		"나가","나나","나다","나라","나마","나바","나아","나자"
	};
	const char wordLV3[LV][32] =
	{
		"다가","다나","다다","다라","다마","다바","다아","다자"

	};
	const char wordLV4[LV][32] =
	{
		"라가","라나","라다","라라","라마","라바","라아","라자"

	};
	const char wordLV5[LV][32] =
	{
		"마가","마나","마다","마라","마마","마바","마아","마자"

	};

	

	char input;

	// 초기 설정
	


	// 초기 화면
	InitScreen();
	//반복
	while (1)
	{
		//보너스 생성 
		
		GenerateBonus(&data);
		PrintBonus(&data);


		//일반문제 단어 출력 및 입력(레벨 확인)
		if (data.lv == LV_1)
		{
			strcpy(data.outPut, wordLV1[data.i]);
			PrintoutPut(&data);
		}
		else if (data.lv == LV_2)
		{
			strcpy(data.outPut, wordLV2[data.i]);
			PrintoutPut(&data);
		}
		else if (data.lv == LV_3)
		{
			
			strcpy(data.outPut, wordLV3[data.i]);
			PrintoutPut(&data);

		}

		else if (data.lv == LV_4)
		{
			
			strcpy(data.outPut, wordLV4[data.i]);
			PrintoutPut(&data);

		}

		else if (data.lv == LV_5)
		{
			
			strcpy(data.outPut, wordLV5[data.i]);
			PrintoutPut(&data);

		}
		//정답 입력
		cin >> data.answer;
		//정답 여부 판별후 정산
		Check_Calculate(&data);
		//레벨업 가능 판별 후 가능이면 레벨업
		LEVEL_UP(&data);
		// 승리 여부
		IsVictory(&data);
		//라이프 없음 죽음
		IsDead(&data);
		//결과 출력
		PrintResult(&data);
		//반복 끝

	}






	return 0;
}