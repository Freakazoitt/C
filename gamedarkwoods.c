//Dark Woods или Темнолесье by Freakazoitt

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
int k; //клавиша
int g,a,d,i,m; //начальные золото,атака,защита
a=1; char w[20]="нож";
int x,d1,d2,d3,d4,d5,kills,buy,m_loot,m_attack;
//printf("                         Игра Темнолесье by Freakazoitt\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
//int loca=0; //начало игры

//if (loca == 0)
//printf(" Местные жители страдают от козней безумного мага Боратура. Ты решаешься \nпрекратить эти безобразия, но сперва нужно подготовиться...\n Темнолесье встречает тебя сломанными воротами и опустевшей конюшней. Но люди не теряют надежды.\n");

enter: //прыжок сюда после ввода с клавы

d=d1+d2+d3+d4+d5; //общий показатель брони героя

printf("СТАТЫ  Атака: %d",a);
printf(" Защита: %d",d);
printf(" Оружие: %s",w);
printf(" Деньги: %d",g);
printf(" Монстров убито: %d",kills);

printf("\nСписок команд: \n < - перемещение назад \n > - перемещение вперёд \n w - работать на шахте за золото \n b - магазин \n m - качаться на монстрах \n u - атаковать босса \n");

scanf("%c",&k); //чтение команды игрока

    printf("KEY: %c\n",k); // test
    //goto enter; // test


    /*

switch(k)
    {
    case 'w':
        printf("Работает в шахте\n");
        sleep(6000);
        {
        printf ("Закончил работу в шахте\n");
        }
        g=g+1; // заработал 1 золотой
        printf("Заработал 1 золотой\n");
        //goto enter;
               // printf ("TEST TEST TEST\n");
        break;
    // МАГАЗИН МАГАЗИН МАГАЗИН МАГАЗИН МАГАЗИН
    case 'b': // купить
        printf("\nсписок товаров в магазине\n\n оружие: \n d - кинжал +2 атаки, цена 3 золотых \n a - топор +4 атаки, цена 5 золотых \n s - меч +6 атаки, цена 8 золотых \n p - зачарованная пика +10 атаки, цена 10 золотых \n\n");
        printf("броня: \n i - кожаная куртка +1 защита, цена 1 золотой \n b - кожаные перчатки +1 защита, цена 1 золотой \n l - ботинки с пластинами +1 защита, цена 2 золотых \n c - кольчуга +3 защиты, (заменяет кожаную куртку), цена 3 золотых \n h - стальной шлем +2 защиты, цена 4 золотых \n g - железная маска личина +1 защита, цена 2 золотых");
            scanf("%c",&buy); // покупка
                switch(buy)
                {
                    case 'd':
                        printf("Ты купил кинжал на +2 атаки за 3 золотых монет");
                        a=2;  // атака
                        g=g-3; // минус зотото
                        w=="кинжал";
                        break;
                    case 'a':
                        printf("Ты купил топор на +4 атаки за 5 золотых монет");
                        a=4;
                        g=g-5; // 5 gold
                        w=="топор";
                        break;
                    case 's': //
                        printf("Ты купил меч на +6 атаки за 8 золотых монет");
                        a=6;
                        g=g-8; // 8 gold
                        w=="меч";
                        break;
                    case 'p': //
                        printf("Ты купил зачарованную пику на +8 атаки за 15 золотых монет");
                        a=10;
                        g=g-15;
                        w=="пика";
                        break;
                    case 'i': // leather jacket +1 defence
                        printf("Ты купил кожаную куртку на +1 защиты за 1 золотую монету");
                        d1=1; g=g-1;
                        break;
                    case 'b': // perchatki +1 defence
                        printf("Ты купил кожаные перчатки на +1 защиты за 1 золотую монету");
                        d2=1; g=g-1;
                        break;
                    case 'l': // sapogi s plastinami +1 defence
                        printf("Ты купил кожаные ботинки с пластинами на +1 защиты за 2 золотые монеты");
                        d3=1; g=g-2;
                        break;
                    case 'c': // chainmale 7gold +3 defence, zamenyaet leather jacket
                        printf("Ты купил кольчугу на +3 защиты за 3 золотые монеты. Кожаная куртка снята.");
                        d1=3; g=g-3;
                        break;
                    case 'h': // stalnoj shlem 7g
                        printf("Ты купил стальной шлем на +2 защиты за 4 золотых монеты");
                        d5=2; g=g-4;
                        break;
                    case 'g': // защитные очки
                        printf("Ты купил железную маску личину на +1 защиты за 2 золотые монеты");
                        d4=1; g=g-2;
                        break;
                } // end of buy
        // МАГАЗИН МАГАЗИН МАГАЗИН МАГАЗИН МАГАЗИН

case 'm': // hunting on monster
    {
    int p;
    printf("Ты отправляешься в Темнолесье. Выбери какого монстра атаковать: \n r -крысу \n w -волка \n g -гоблина \n  o -мертвяка \n t - гигантскую ядовитую жабу");
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

            x=(a+d); //атака+защита

            if (x>0)
                {
                printf("Ты победил! \n получено ",m_loot,"золота");
                g=g+m_loot;
                k=k+1;
                goto enter;
                }
            else
                {
                printf("Ты проиграл!");
                sleep(6000);
                printf("Найди экипировку получше и попробуй снова");
                goto enter;
                }
                break;
            }
            break;
    } // end of hunt

case 'u': // final quest
    {
    printf("\nСражение с главным злодеем - коварным магом Боратуром\n");
    x=(a+d)*(random(1,5)-15*random(1,5));

if (x>0)
    {
    printf("\nТы победил! \n Игра окончена: Ты победил. Темнолесье освобождено от зла.\n");
    }
else
    {
    printf("\nТы проиграл!\n");
    sleep(6000);
    goto enter;
    return 0;
    break;
    }
    } // end of quest

} //end of switch
*/

} //end of main



