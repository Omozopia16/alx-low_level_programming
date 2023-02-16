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
printf("Size of a char: %zu byte(s)", sizeof(number));
printf("\nSize of an int: %zu byte(s)", sizeof(num));
printf("\nSize of a long int: %zu byte(s)", sizeof(age));
printf("\nSize of a long long int: %zu byte(s)", sizeof(nums));
printf("\nSize of a float: %zu byte(s)", sizeof(doc));

return (0);
}
