#include <stdio.h>
/**
 * main -A program that prints size of various types
 * Return 0
 */
int main(void)
{
char number;
int num;
long int age;
long long int nums;
float doc;

printf("Size of a char  = %zu", sizeof(number));
printf("\nSize of an int = %zu", sizeof(num));
printf("\nSize of a long int = %zu", sizeof(age));
printf("\nSize of a long long int = %zu", sizeof(nums));
printf("\nSize of a float = %zu", sizeof(docs));

return (0);
}
