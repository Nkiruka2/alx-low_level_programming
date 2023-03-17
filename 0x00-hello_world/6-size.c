#include <stdio.h>
/**
 * main - A program that prints the size of various types on a computer it is complied on
 * Return 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
printf("size of a char; %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a int; %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("size of a long int; %lu bytes(s)\n", (unsigned long)sizeof(li));
printf("size of a long long int; %lu bytes(s)\n", (unsigned long)sizeof(lli));
printf("size of a float; %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
