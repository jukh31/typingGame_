#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define LV 20



int main()
{


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
	int lv = 1;
	int i = 0;
	int Exp = 0;
	int life = 3;
	int comp = 0;
	int bonus = 0;
	int bExp = 0;
	int blife = 0;


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
		bonus = rand() % 9;
		if (bonus == 3)
			bExp = 1;
		else if (bonus == 7)
			blife = 1;

		//�Ϲݹ��� �ܾ� ��� �� �Է�(���� Ȯ��)
		if (lv == 1)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;


			strcpy(outPut, wordLV1[i]);

			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (lv == 2)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;

			strcpy(outPut, wordLV2[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����

		}
		else if (lv == 3)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV3[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (lv == 4)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
				cout << "BONUS LIFE" << endl;
			strcpy(outPut, wordLV4[i]);
			cout << outPut << endl;//���
			i++;//�ܾ� ����
		}

		else if (lv == 5)
		{
			if (bExp == 1)
				cout << "BONUS EXP" << endl;
			if (blife == 1)
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
		if (lv == 1 && Exp >= 3)
		{
			lv++;
			i = 0;

		}

		else if (lv == 2 && Exp >= 6)
		{
			lv++;

		}
		else if (lv == 3 && Exp >= 9)
		{
			lv++;

		}
		else if (lv == 4 && Exp >= 12)
		{
			lv++;

		}
		else if (lv == 5 && Exp >= 15)
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