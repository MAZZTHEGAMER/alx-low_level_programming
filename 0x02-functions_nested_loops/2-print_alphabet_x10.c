#include "main.h"
/**
*print_alphabet_x10-printallalphabetx10
*/
void print_alphabet_x10(void)
{
char i, letters;

for (i = '0'; i <= '9'; i++)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
// #include "main.h"
// /**
// *print_alphabet_x10 - print all small letters ten times
// *
// */
// void print_alphabet_x10(void)
// {
// int letters;
// int count;
// count = 0;
// while (count < 10)
// {
// for (letters = 97; letters < 123; letters++)
// {
// _putchar(letters);
// }
// _putchar('\n');
// count++;
// }
// }