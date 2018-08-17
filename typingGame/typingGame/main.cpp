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
	data->Exp = Init;
	data->life = Life;
	data->comp = Init;
	data->bonus = Init;
	data->bExp = Init;
	data->blife = Init;

}


int main()
{
	int i = Init;
	Data data;
	Initialize(&data);
	const char wordLV1[LV][32] =
	{
		"����","����","����","����","�׸�","�ĸ�","���","���"
	};
	const char wordLV2[LV][32] =
	{
		"����","����","��ũ","���","�Ʊ�","�븮","����"
	};
	const char wordLV3[LV][32] =
	{
		"����","����","�ٴ�","���","����","�ٹ�","���"
	};
	const char wordLV4[LV][32] =
	{
		"����","�Ű�","�ܰ�","���","����","����","�Ա�"
	};
	const char wordLV5[LV][32] =
	{
		"����","�ٶ�","����","�ٻ�","���","����"
	};

	char answer[64] = {};
	char outPut[64] = {};

	char input;

	// �ʱ� ����
	


	// �ʱ� ȭ��
	cout << "typingGame" << endl;
	cout << endl;
	cout << endl;

	cout << "�����ҷ��� �ƹ�Ű + ����" << endl;
	cin >> input;
	system("cls");
	cout << "���� !" << endl;
	//�ݺ�
	while (1)
	{
		//���ʽ� ���� 
		data.bonus = rand() % MAX_VALUE;
		if (data.bonus == BONUS_SCORE)
			data.bExp = TRUE;
		else if (data.bonus == BONUS_LIFE)
			data.blife = TRUE;

		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		if (data.lv == LV_1)
		{
			if (data.bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (data.blife == TRUE)
				cout << "BONUS LIFE" << endl;


			strcpy(outPut, wordLV1[i]);

			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (data.lv == LV_2)
		{
			if (data.bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (data.blife == TRUE)
				cout << "BONUS LIFE" << endl;

			strcpy(outPut, wordLV2[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (data.lv == LV_3)
		{
			if (data.bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (data.blife == TRUE)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV3[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (data.lv == LV_4)
		{
			if (data.bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (data.blife == TRUE)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV4[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (data.lv == LV_5)
		{
			if (data.bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (data.blife == TRUE)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV4[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}
		//���� �Է�
		cin >> answer;

		//���� ���� �Ǻ��� ����
		if (strcmp(outPut, answer) == 0)
		{
			system("cls");// �׽�Ʈ��
			cout << "����" << endl;// �׽�Ʈ��
			data.Exp++;
			if (data.bExp == 1)
			{
				data.Exp += 2;
				data.bExp = 0;
			}
			else if (data.blife == 1)
			{
				data.life++;
				data.blife = 0;
			}
		}
		else
		{
			system("cls");// �׽�Ʈ��
			cout << "����" << endl;// �׽�Ʈ��
			data.bExp = 0;
			data.blife = 0;
			data.life--;
		}



		//������ ���� �Ǻ� �� �����̸� ������
		if (data.lv == LV_1 && data.Exp >= 3)
		{
			data.lv++;
			i = 0;

		}

		else if (data.lv == LV_2 && data.Exp >= 6)
		{
			data.lv++;
			i = 0;


		}
		else if (data.lv == LV_3 && data.Exp >= 9)
		{
			data.lv++;
			i = 0;


		}
		else if (data.lv == LV_4 && data.Exp >= 12)
		{
			data.lv++;
			i = 0;


		}
		else if (data.lv == LV_5 && data.Exp >= 15)
		{
			data.lv++;
			i = 0;

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