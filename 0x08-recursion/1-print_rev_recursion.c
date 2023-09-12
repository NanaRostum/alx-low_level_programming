<<<<<<< HEAD
#include "main.h"
/**print reverse putchar using recursion**/
void _print_rev_recursion(char *s);
{
	if (*s>'\0')
	{
		_print_rev_recursion(s+1);
	       _putchar(*s);
	}
}
=======
#include"main.h"
/*reverse putchar*/
void _print_rev_recursion(char *s)
{
	if (*s> '\0')
	{ 
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}

>>>>>>> 3ead6fd961816d747853f1f33b7c24fdcfcab3f0
