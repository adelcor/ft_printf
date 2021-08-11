#include "printf.h"
#include "printf.c"
#include "utils.c"
#include "utils2.c"



int main(void)
{
	int i;
	i = 0;
	int x;
	x = 0;
	unsigned int k;
	k = -12345;
	int j;
	j = 3649;
	const char *ptr;
	ptr = "HOLA";
	char c;
	c = 'A';
	//ft_printf("%%Adios%%%ss\nJeje%c\n", ptr, c);
	//printf("%%Adios%%%ss\nJeje%c\n", ptr, c);
	i = printf("%%%s%s\nJeje%c\n%d\n%i\n%u\n%x\n%p\n", ptr, ptr, c, j, c, k, k, ptr);
	printf("El valor de printf es: %d\n", i);
	x = ft_printf("%%%s%s\nJeje%c\n%d\n%i\n%u\n%x\n%p\n", ptr, ptr, c, j, c, k, k, ptr);
	printf("El valor de ft_printf es %d\n", x);

	return(0);
}
