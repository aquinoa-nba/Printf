#include "../includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		a;

	// int		a01;
	// int		a02;
	// int		a03;
	// int		a04;
	// int		a05;
	// int		a06;
	// int		a07;
	// int		a08;
	// int		a09;
	// int		a10;
	// int		a11;
	// int		a12;

	int		b;
//	char	*c;

//	c = malloc(1);
//	b = (char*)malloc(6);
//	*b = 'h';
//	a = ft_printf("content%%%%\n");
//	b = printf("content%%%%\n");
//	a = printf("p->%0-8.5d<-\n\n", 34);
	a = printf("p->%5p<-\n\n", NULL);
	b = ft_printf("f->%5p<-\n\n", NULL);
//	b = printf("f->%05%<-\n\n");
	printf("p->%d\n\n", a);
	printf("f->%d\n\n", b);

//	printf("%d\n", 3 % 2);
//	printf("%---*.*d\n", 15, 8, 321);
	// while (1);
}
