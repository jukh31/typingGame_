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

	cout << "�����ҷ��� �ƹ�Ű + ����" << endl;
	cin >> input;
	system("cls");
	cout << "���� !" << endl;
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
	cout << data->outPut << endl;//���
	data->i++;//�ܾ� ����
}
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

int main()
{
	int i = Init;
	Data data;
	Initialize(&data);
	const char wordLV1[LV][32] =
	{
		"����","����","����","����","����","����","����","����"
	};
	const char wordLV2[LV][32] =
	{
		"����","����","����","����","����","����","����","����"
	};
	const char wordLV3[LV][32] =
	{
		"�ٰ�","�ٳ�","�ٴ�","�ٶ�","�ٸ�","�ٹ�","�پ�","����"

	};
	const char wordLV4[LV][32] =
	{
		"��","��","���","���","��","���","���","����"

	};
	const char wordLV5[LV][32] =
	{
		"����","����","����","����","����","����","����","����"

	};

	

	char input;

	// �ʱ� ����
	


	// �ʱ� ȭ��
	InitScreen();
	//�ݺ�
	while (1)
	{
		//���ʽ� ���� 
		
		GenerateBonus(&data);

		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		if (data.lv == LV_1)
		{
			PrintBonus(&data);
			strcpy(data.outPut, wordLV1[data.i]);
			PrintoutPut(&data);
		}
		else if (data.lv == LV_2)
		{
			PrintBonus(&data);

			strcpy(data.outPut, wordLV2[data.i]);
			PrintoutPut(&data);


		}
		else if (data.lv == LV_3)
		{
			PrintBonus(&data);
			strcpy(data.outPut, wordLV3[data.i]);
			PrintoutPut(&data);

		}

		else if (data.lv == LV_4)
		{
			PrintBonus(&data);
			strcpy(data.outPut, wordLV4[data.i]);
			PrintoutPut(&data);

		}

		else if (data.lv == LV_5)
		{
			PrintBonus(&data);
			strcpy(data.outPut, wordLV4[data.i]);
			PrintoutPut(&data);

		}
		//���� �Է�
		cin >> data.answer;

		//���� ���� �Ǻ��� ����
		Check_Calculate(&data);



		//������ ���� �Ǻ� �� �����̸� ������
		if (data.lv == LV_1 && data.Exp >= 3)
		{
			data.lv++;
			data.i = 0;

		}

		else if (data.lv == LV_2 && data.Exp >= 6)
		{
			data.lv++;
			data.i = 0;


		}
		else if (data.lv == LV_3 && data.Exp >= 9)
		{
			data.lv++;
			data.i = 0;


		}
		else if (data.lv == LV_4 && data.Exp >= 12)
		{
			data.lv++;
			data.i = 0;


		}
		else if (data.lv == LV_5 && data.Exp >= 15)
		{
			data.lv++;
			data.i = 0;

		}
		// �¸� ����
		if (data.lv == 6)
		{
			cout << "�¸�" << endl;
			return 1;
		}

		//������ ���� ����
		if (data.life == 0)
		{
			cout << "����" << endl;
			exit(1);
		}

		//��� ���
		cout << "lv" << data.lv << endl;
		cout << "exp" << data.Exp << endl;
		cout << "life" << data.life << endl;
		cout << endl << endl << endl << endl;
		//�ݺ� ��

	}






	return 0;
}