//Dark Woods ��� ���������� by Freakazoitt

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define sleep
#define scanf
#define random

int main (void)
{
setlocale(LC_ALL, "Rus");
//int k = "z";
int k; //�������
int g,a,d,i,m; //��������� ������,�����,������
a=1; char w[20]="���";
int x,d1,d2,d3,d4,d5,kills,buy,m_loot,m_attack;
//printf("                         ���� ���������� by Freakazoitt\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
//int loca=0; //������ ����

//if (loca == 0)
//printf(" ������� ������ �������� �� ������ ��������� ���� ��������. �� ��������� \n���������� ��� ����������, �� ������ ����� �������������...\n ���������� ��������� ���� ���������� �������� � ���������� ��������. �� ���� �� ������ �������.\n");

enter: //������ ���� ����� ����� � �����

d=d1+d2+d3+d4+d5; //����� ���������� ����� �����

printf("�����  �����: %d",a);
printf(" ������: %d",d);
printf(" ������: %s",w);
printf(" ������: %d",g);
printf(" �������� �����: %d",kills);

printf("\n������ ������: \n < - ����������� ����� \n > - ����������� ����� \n w - �������� �� ����� �� ������ \n b - ������� \n m - �������� �� �������� \n u - ��������� ����� \n");

scanf("%c",&k); //������ ������� ������

    printf("KEY: %c\n",k); // test
    //goto enter; // test


    /*

switch(k)
    {
    case 'w':
        printf("�������� � �����\n");
        sleep(6000);
        {
        printf ("�������� ������ � �����\n");
        }
        g=g+1; // ��������� 1 �������
        printf("��������� 1 �������\n");
        //goto enter;
               // printf ("TEST TEST TEST\n");
        break;
    // ������� ������� ������� ������� �������
    case 'b': // ������
        printf("\n������ ������� � ��������\n\n ������: \n d - ������ +2 �����, ���� 3 ������� \n a - ����� +4 �����, ���� 5 ������� \n s - ��� +6 �����, ���� 8 ������� \n p - ������������ ���� +10 �����, ���� 10 ������� \n\n");
        printf("�����: \n i - ������� ������ +1 ������, ���� 1 ������� \n b - ������� �������� +1 ������, ���� 1 ������� \n l - ������� � ���������� +1 ������, ���� 2 ������� \n c - �������� +3 ������, (�������� ������� ������), ���� 3 ������� \n h - �������� ���� +2 ������, ���� 4 ������� \n g - �������� ����� ������ +1 ������, ���� 2 �������");
            scanf("%c",&buy); // �������
                switch(buy)
                {
                    case 'd':
                        printf("�� ����� ������ �� +2 ����� �� 3 ������� �����");
                        a=2;  // �����
                        g=g-3; // ����� ������
                        w=="������";
                        break;
                    case 'a':
                        printf("�� ����� ����� �� +4 ����� �� 5 ������� �����");
                        a=4;
                        g=g-5; // 5 gold
                        w=="�����";
                        break;
                    case 's': //
                        printf("�� ����� ��� �� +6 ����� �� 8 ������� �����");
                        a=6;
                        g=g-8; // 8 gold
                        w=="���";
                        break;
                    case 'p': //
                        printf("�� ����� ������������ ���� �� +8 ����� �� 15 ������� �����");
                        a=10;
                        g=g-15;
                        w=="����";
                        break;
                    case 'i': // leather jacket +1 defence
                        printf("�� ����� ������� ������ �� +1 ������ �� 1 ������� ������");
                        d1=1; g=g-1;
                        break;
                    case 'b': // perchatki +1 defence
                        printf("�� ����� ������� �������� �� +1 ������ �� 1 ������� ������");
                        d2=1; g=g-1;
                        break;
                    case 'l': // sapogi s plastinami +1 defence
                        printf("�� ����� ������� ������� � ���������� �� +1 ������ �� 2 ������� ������");
                        d3=1; g=g-2;
                        break;
                    case 'c': // chainmale 7gold +3 defence, zamenyaet leather jacket
                        printf("�� ����� �������� �� +3 ������ �� 3 ������� ������. ������� ������ �����.");
                        d1=3; g=g-3;
                        break;
                    case 'h': // stalnoj shlem 7g
                        printf("�� ����� �������� ���� �� +2 ������ �� 4 ������� ������");
                        d5=2; g=g-4;
                        break;
                    case 'g': // �������� ����
                        printf("�� ����� �������� ����� ������ �� +1 ������ �� 2 ������� ������");
                        d4=1; g=g-2;
                        break;
                } // end of buy
        // ������� ������� ������� ������� �������

case 'm': // hunting on monster
    {
    int p;
    printf("�� ������������� � ����������. ������ ������ ������� ���������: \n r -����� \n w -����� \n g -������� \n  o -�������� \n t - ���������� �������� ����");
    scanf("%c",&p);
        switch(p)
        {
            case 'r': // rat
                m_attack=1;
                m_loot=1;
                break;
            case 'w': // wolf
                m_attack=2;
                m_loot=2;
                break;
            case 'g': // goblin
                m_attack=4;
                m_loot=3;
                break;
            case 'o': // undead
                m_attack=8;
                m_loot=5;
                break;
            case 't': // zhaba
                m_attack=10;
                m_loot=6;
                break;

            x=(a+d); //�����+������

            if (x>0)
                {
                printf("�� �������! \n �������� ",m_loot,"������");
                g=g+m_loot;
                k=k+1;
                goto enter;
                }
            else
                {
                printf("�� ��������!");
                sleep(6000);
                printf("����� ���������� ������� � �������� �����");
                goto enter;
                }
                break;
            }
            break;
    } // end of hunt

case 'u': // final quest
    {
    printf("\n�������� � ������� ������� - �������� ����� ���������\n");
    x=(a+d)*(random(1,5)-15*random(1,5));

if (x>0)
    {
    printf("\n�� �������! \n ���� ��������: �� �������. ���������� ����������� �� ���.\n");
    }
else
    {
    printf("\n�� ��������!\n");
    sleep(6000);
    goto enter;
    return 0;
    break;
    }
    } // end of quest

} //end of switch
*/

} //end of main



