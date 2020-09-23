#include "holberton.h"
/**
* times_table - prints the tables from 0 to 9
*/
void times_table(void)
{
    int i, m, j;
    for (i = 0; i < 10; i++)
    {
        for (m = 0; m < 10; m++)
        {
            j = m * i;
            if (j < 10)
            {
                _putchar(j + '0');
            }
            else
            {
                _putchar(j / 10 + '0');
                _putchar(j % 10 + '0');
            }
            if (m < 9)
            {
                _putchar(44);
                if (j < 10)
                {
                    _putchar(32);
                    _putchar(32);
                }
                else 
                {
                    _putchar(32);
                }
            }
            
            if (m == 9)
            {
                _putchar(10);
            }
        }
    }
}
