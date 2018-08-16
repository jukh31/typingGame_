#include <iostream>
#include <stdlib.h>
#include <string.h>
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



int main()
{
	const char wordLV1[LV][32] =
	{
		"����","����","����","����","�׸�","�ĸ�","���","���","�ܵ�","�","�ڱ�","����","�ȳ�","�׸�","����","�ջ�"
	};
	const char wordLV2[LV][32] =
	{
		 "����","���","��ũ","���","����","����","���","����","���","�ɴ�","�Ʊ�","�븮","����"
	};
	const char wordLV3[LV][32] =
	{
		 "����","����","����","�躸","�̼�","����","����","�̸�","����","����","����","����","����","�ú�","����","�糪","��ǰ","�հ�","����","����"
	};
	const char wordLV4[LV][32] =
	{
		 "����","�ؾ�","����","���","����","ĥ��","���","����","����","���" ,"����","����","�м�","����","����","�Ӽ�","����","��","����","����"
	};
	const char wordLV5[LV][32] =
	{
		"����","����","����","����","����","�ټ�","�麰","����","����","����","�ܶ�","�ξ�","�ν�","��¦","����","���","�Լ�","����","����","�̺�"
	};

	char answer[64] = {};
	char outPut[64] = {};

	char input;

	// �ʱ� ����
	int lv = TRUE;
	int i = Init;
	int Exp = Init;
	int life = Life;
	int comp = Init;
	int bonus = Init;
	int bExp = Init;
	int blife = Init;


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
		bonus = rand() % MAX_VALUE;
		if (bonus == BONUS_SCORE)
			bExp = TRUE;
		else if (bonus == BONUS_LIFE)
			blife = TRUE;

		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		if (lv == LV_1)
		{
			if (bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (blife == TRUE)
				cout << "BONUS LIFE" << endl;


			strcpy(outPut, wordLV1[i]);

			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (lv == LV_2)
		{
			if (bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (blife == TRUE)
				cout << "BONUS LIFE" << endl;

			strcpy(outPut, wordLV2[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (lv == LV_3)
		{
			if (bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (blife == TRUE)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV3[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (lv == LV_4)
		{
			if (bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (blife == TRUE)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV4[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (lv == LV_5)
		{
			if (bExp == TRUE)
				cout << "BONUS EXP" << endl;
			if (blife == TRUE)
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
			Exp++;
			if (bExp == 1)
			{
				Exp += 2;
				bExp = 0;
			}
			else if (blife == 1)
			{
				life++;
				blife = 0;
			}
		}
		else
		{
			system("cls");// �׽�Ʈ��
			cout << "����" << endl;// �׽�Ʈ��
			bExp = 0;
			blife = 0;
			life--;
		}



		//������ ���� �Ǻ� �� �����̸� ������
		if (lv == LV_1 && Exp >= 3)
		{
			lv++;
			i = 0;

		}

		else if (lv == LV_2 && Exp >= 6)
		{
			lv++;

		}
		else if (lv == LV_3 && Exp >= 9)
		{
			lv++;

		}
		else if (lv == LV_4 && Exp >= 12)
		{
			lv++;

		}
		else if (lv == LV_5 && Exp >= 15)
		{
			lv++;
		}
		// �¸� ����
		if (lv == 6)
		{
			cout << "�¸�" << endl;
			return 1;
		}

		//������ ���� ����
		if (life == 0)
		{
			cout << "����" << endl;
			exit(1);
		}

		//��� ���
		cout << "lv" << lv << endl;
		cout << "exp" << Exp << endl;
		cout << "life" << life << endl;
		cout << endl << endl << endl << endl;
		//�ݺ� ��

	}






	return 0;
}