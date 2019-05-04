#include <stdio.h>
/*int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);

	return 0;
}*/

/*int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
		
}*/

/*int main(void)
{
	char ch;

	printf("Please enter acharacter.\n");
	scanf_s("%c", &ch);
	printf("The code for %c is %d.\n", ch, ch);

	return 0;
}*/

/*int main(void)
{
	int32_t me32;
	 
	me32 = 45933945;
	printf("First,assume int32_t is int: ");
	printf("me32 =%d", me32);
	printf("Next,let`s not make any assumptions.\n");
	printf("Instead,use a \"macro\" from in ttypes.h:");
	printf("me32 = %" PRID32 "\n", me32);

	return 0;
}
*/

/*int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	float toobig = 3.4E38 * 100.0f;

	printf("%f can be written %e\n",aboat,aboat);
	printf("And it`s %a in hexadecimal,powers of 2 notation\n", aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%e\n", toobig);

	return 0;
}*/

/*int main(void)
{
	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("&f \n", a);

	return 0;
}*/

/*int main(void) {
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));
	printf("Type long double has a size of %zd bytes.\n",sizeof(long double));

	return 0;
}*/

/*int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);
	printf("%d %d %d\n", n);
	printf("%d %d\n", f, g);

	return 0;
}*/

/*int main(void)
{
	float salary;

	printf("\aEnter your desired monthly salary: ");
	printf("$________\b\b\b\b\b\b\b");
	scanf_s("%f", &salary); 
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");

	return 0;
}*/


