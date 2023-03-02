#include <stdio.h>
/**
 * main - program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));

