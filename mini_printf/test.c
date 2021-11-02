#include <stdio.h>

int	main(void)
{
	int do_printf;
	int do_ft_printf;

///////////////////////////////////////////////////
//     		 I INTEGER TESTS
//////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%i", 50000454);
	printf("\n");
	do_ft_printf = ft_printf("%i", 50000454);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i ola, %i", -50000454, 0);
	printf("\n\n");
	do_ft_printf = ft_printf("%i ola, %i", -50000454, 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM MAX)
/////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%i", 2147483647);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", 2147483647+1);
	printf("\n");
	do_ft_printf = ft_printf("%i", 2147483647+1);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%i", -2147483678);
	printf("\n");
	do_ft_printf = ft_printf("%i", -2147483678);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//   			I INTEGER TESTS (COM WIDTH)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%7i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%7i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%2i", 33);
	printf("\n");
	do_ft_printf = ft_printf("%2i", 33);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%4i", -14);
	printf("\n");
	do_ft_printf = ft_printf("%4i", -14);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM PRECISION)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%.5i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", 2);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", 2);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.6i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.6i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.2i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.2i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.1i", -3);
	printf("\n");
	do_ft_printf = ft_printf("%.1i", -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.5i", -2372);
	printf("\n");
	do_ft_printf = ft_printf("%.5i", -2372);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO)
/////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%02i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%03i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%01i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%01i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%00i", 43);
	printf("\n");
	do_ft_printf = ft_printf("%00i", 43);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%07i", -54);
	printf("\n");
	do_ft_printf = ft_printf("%07i", -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%02i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%02i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%06i", -4825);
	printf("\n");
	do_ft_printf = ft_printf("%06i", -4825);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM WIDTH E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM MINUS E PRECISION)
///////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-8.5i", -8473);
	printf("\n");
	do_ft_printf = ft_printf("%-8.5i", -8473);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);


/////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH E PRECISION)
/////////////////////////////////////////////////////////////


	printf("\n");
	do_printf = printf("%08.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%08.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%05.5i", -34);
	printf("\n");
	do_ft_printf = ft_printf("%05.5i", -34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%03.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%03.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

////////////////////////////////////////////////////////////////////
//     		 I INTEGER TESTS (COM ZERO, WIDTH, MENOS E PRECISION)
////////////////////////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%0-8.5i", 34);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 34);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-10.5i", -216);
	printf("\n");
	do_ft_printf = ft_printf("%0-10.5i", -216);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-8.5i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%0-8.5i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0-3.7i", -2375);
	printf("\n");
	do_ft_printf = ft_printf("%0-3.7i", -2375);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (ZERO POINT ZERO)
//////////////////////////////////////////////////
	printf("com zero\n");
	printf("\n");
	do_printf = printf("%5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%5.i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%5.i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%-5.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%-5.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.0i", 0);
	printf("\n");
	do_ft_printf = ft_printf("%.0i", 0);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

///////////////////////////////////////////////////
//     		 I INTEGER TESTS (STAR TEST)
//////////////////////////////////////////////////

	printf("\n");
	do_printf = printf("%*i", 4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", 14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", 14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", 6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", 6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", 0, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", 0, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -4, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -4, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%*i", -14, 94827);
	printf("\n");
	do_ft_printf = ft_printf("%*i", -14, 94827);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%.*i", -6, -3);
	printf("\n");
	do_ft_printf = ft_printf("%.*i", -6, -3);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

	printf("\n");
	do_printf = printf("%0*i", -7, -54);
	printf("\n");
	do_ft_printf = ft_printf("%0*i", -7, -54);
	printf("\n");
	printf("%d\n", do_printf);
	printf("%d\n", do_ft_printf);

}