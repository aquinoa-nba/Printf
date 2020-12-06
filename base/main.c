#include "../includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		a;
	int		b;

//	i = 0;
//	a = ft_printf("content%%%%\n");
//	b = printf("content%%%%\n");
	a = printf("p->%-0*.*s<-\n\n", 5, 2, "abc");
	b = ft_printf("f->%-*.*s<-\n\n", 5, 2, "abc");
	printf("p->%d\n\n", a);
	printf("f->%d\n\n", b);

//	printf("%d\n", 3 % 2);
//	printf("%---*.*d\n", 15, 8, 321);
	return (0);
}
