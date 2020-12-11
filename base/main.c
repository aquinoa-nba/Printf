#include "../includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		a;
	int		b;

//	b = (char*)malloc(6);
//	*b = 'h';
//	a = ft_printf("content%%%%\n");
//	b = printf("content%%%%\n");
//	a = printf("p->%0-8.5d<-\n\n", 34);
	a = printf("p->%X<-\n\n", -4);
	b = ft_printf("f->%X<-\n\n", -4);
//	b = ft_printf("f->%5d<-\n\n", 123);
	printf("p->%d\n\n", a);
	printf("f->%d\n\n", b);

//	printf("%d\n", 3 % 2);
//	printf("%---*.*d\n", 15, 8, 321);
	return (0);
}
