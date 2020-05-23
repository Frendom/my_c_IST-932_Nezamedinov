#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    typedef struct sObject
    {
        int hp;
        int mp;
        имя char[ 10];
        struct  sObject *далее;
 } tObject;
 tObject *get_struct(void)
        {
 tObject *p = (tObject *) malloc (sizeof (tObject));
            printf ("имя игрока: ");
            возвращает (p - > name);
            printf ("\n\n");
            srand ( time (NULL) );
 p - > hp = > rand () % 100;
 p - > mp = > rand () % 100;

            если (!п)
            {
                printf ("ошибка выделения!\n");
                выход ( 0);
            };
            возврат p;
        };

 tObject *pi = NULL;
 tObject *p_begin = NULL;
 tObject *p = NULL;
 tObject *prev_p = NULL;
    выбор char;

    делать
    {
        printf ("Player creator \n ");
        printf ("1) Создание первого игрока \n ");
        printf ("2) создать дополнительный плеер \n ");
        printf ("3) Удалить последнего игрока \n ");
        printf ("4) Показать список игроков \n ");
        printf ("5) удалить список игроков \n ");
        printf ("6) характеристика поискового плеера \n ");
        printf ("7) Quit \n ");
        printf ("введите свой выбор: ");
 выбор = getch();
        printf ("\n\n");

        переключатель (выбор)
        {
            дело  " 1 ":
                {
                    if (p_begin = = NULL)
                    {
 p_begin = get_struct();
 p_begin - > next = > NULL;
 p = p_begin;
 prev_p = p_begin;
                    }
                    еще  printf ("сначала удалить список!\n\n");
 } перерыв;
            дело  " 2 ":
                {
                    если (p_begin)
                    {
 p - > next = > get_struct();
 prev_p = p;
 p = p - > далее;
 p - > next = > NULL;
                    }
                    еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
 } перерыв;
            дело  " 3 ":
                {
                    if(prev_p)
                        если (prev_p - > далее)
                        {
                            бесплатно (Р);
 prev_p - > next = > NULL;
                            для (p = p_begin; (p -> next != prev_p) & (p -> далее != NULL ); p = p - > далее);
 prev_p = p;
                            если (prev_p - > далее)
 p = prev_p - > далее;
                        }
                        else  printf ("не удается удалить первого игрока!\n\n");
                    еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
 } перерыв;
            дело  " 4 ":
                {
                    int i;
                    если (p_begin)
                    для (i = 1, pi = p_begin; pi; pi = pi - > next, i++)
                        {
                            printf ("%d ) \n", i);
                            printf ("Name: %s \n\n", pi - > name);
                            printf ("точки работоспособности: %d \n", pi - > hp);
                            printf ("точки маны: %d \n", pi - > mp);
                            printf ("\n ");
                        }
                    еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
 } перерыв;
            дело  " 5 ":
                {
                    если (p_begin)
                    {
                        int i = -1;
                        для (pi = p_begin; pi; pi = pi - > далее)
 я++;
                        для (;i > > 0; i--)
                        {
                            if(prev_p)
                                если (prev_p - > далее)
                                {
                                    бесплатно (Р);
 prev_p - > next = > NULL;
                                    для (p = p_begin; (p -> next != prev_p) & (p -> далее != NULL ); p = p - > далее);
 prev_p = p;
                                    если (prev_p - > далее)
 p = prev_p - > далее;
                                }
                                else  printf ("не удается удалить первого игрока!\n\n");
                            еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
                        }
                        бесплатно (Р);
 p_begin = NULL;
 prev_p = NULL;
 p = NULL;
                        printf ("текущий список удален!\n\n");
                    }
                    еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
 } перерыв;
            дело  " 6 ":
                {
                    если (p_begin)
                        {
                            printf ("какую характеристику вы хотите искать?:\n");
                            printf ("1) точки работоспособности \n ");
                            printf ("2) точки маны \n");
                            printf ("введите свой выбор: ");
 выбор = getch();
                            printf ("\n\n");
                            printf ("введите значение: ");
                            переключатель (выбор)
                            {
                                дело  " 1 ":
                                    {
                                        int i, h, n;
 n = scanf ("%d", &h);
                                        если (n != 1) возврат  0;
 n = 0;
                                        printf ("\n\n");
                                        printf ("найдено: \n ");
                                        для (i = 1, pi = p_begin; pi; pi = pi - > next, i++)
                                            {
                                                если (pi - > hp == h)
                                                    {
                                                        printf ("%d ) \n", i);
                                                        printf ("Name: %s \n\n", pi - > name);
                                                        printf ("точки работоспособности: %d \n", pi - > hp);
                                                        printf ("\n ");
 n = 1;
                                                    }
                                            }
                                        если (!n) printf ("ничего!\n");
 } перерыв;
                                дело  " 2 ":
                                    {
                                        int i, h, n;
 n = scanf ("%d", &h);
                                        если (n != 1) возврат  0;
 n = 0;
                                        printf ("\n\n");
                                        printf ("найдено: \n ");
                                        для (i = 1, pi = p_begin; pi; pi = pi - > next, i++)
                                            {
                                                если (pi - > mp = = h)
                                                    {
                                                        printf ("%d ) \n", i);
                                                        printf ("Name: %s \n\n", pi - > name);
                                                        printf ("точки маны: %d \n", pi - > mp);
                                                        printf ("\n ");
 n = 1;
                                                    }
                                            }
                                        если (!n) printf ("ничего!\n");
 } перерыв;
                                    по умолчанию: printf ("неправильная команда!\n\n");
                            }
                        }
                    еще  printf ("нет никакого игрока. Создайте первый из них!\n\n");
                    printf("\n\n");
 } перерыв;
            дело  '7': перерыв;
            по умолчанию: printf ("неправильная команда!\n\n");
        }
 } в то время как (выбор != '7');
    возврат  0;
}
