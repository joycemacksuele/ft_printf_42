/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:39:42 by jfreitas          #+#    #+#             */
/*   Updated: 2020/02/29 15:30:43 by jfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int		main(void)
{
	ft_printf("random tests /--------------------------------------\n");
	ft_printf("1|hello, world!\n");
	ft_printf("2|\n");
	ft_printf("3|\t\n\r\v\f\n");
	ft_printf("4|%%\n");
	ft_printf("5|%5%\n");
	ft_printf("6|%-5%\n");
	ft_printf("7|%05%\n");
	ft_printf("8|%-05%\n");
	ft_printf("9|%\n");
	ft_printf("10|%5\n");
	ft_printf("11|%05\n");
	ft_printf("12|%-05\n");
	ft_printf("13|%-5\n");
	ft_printf("14|%-5r12345\n");
	ft_printf("15|%-5%d12345\n");
	ft_printf("16|%.1%12345\n");
	ft_printf("17|%23\n");
	ft_printf("18|%.\n");
	ft_printf("19|%0\n");
	ft_printf("20|%%04.6i 42 == |%04.4i|\n", 42);
	ft_printf("21|%-05");
	printf("\nrandom tests real printf /--------------\n");
	printf("1|hello, world!\n");
	printf("2|\n");
	printf("3|\t\n\r\v\f\n");
	printf("4|%%\n");
	printf("5|%5%\n");
	printf("6|%-5%\n");
	printf("7|%05%\n");
	printf("8|%-05%\n");
	printf("9|%\n");
	printf("10|%5\n");
	printf("11|%05\n");
	printf("12|%-05\n");
	printf("13|%-5\n");
	printf("14|%-5r12345\n");
	printf("15|%-5%d12345\n");
	printf("16|%.1%12345\n");
	printf("17|%23\n");
	printf("18|%.\n");
	printf("19|%0\n");
	printf("20|%%04.6i 42 == |%04.4i|\n", 42);
	printf("21|%-05");



	ft_printf("\nspecifier c /--------------------------------------\n");
	ft_printf("01|%04chi\n", 33);
	ft_printf("02|%-04c\n", 33);
	ft_printf("03|%04.5c\n", 33);
	ft_printf("04|%.5c\n", 33);
	ft_printf("05|%-4c\n", 33);
	ft_printf("06|%4c\n", 33);
	ft_printf("07|%c\n", 33);
	ft_printf("08|%-*c\n", 4, 33);
	ft_printf("09|%1c%2c%3c%4c%1c%2c%3c%4c\n", ' ','!','"','#','$','%','&','\'');
	ft_printf("10|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", (char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8);
	ft_printf("11|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", 128,129,130,131,132,133,134,135);
	ft_printf("12|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135);
	ft_printf("13|%c%c%c%c%c%c%c%c\n", 145,146,147,148,149,150,151,152);
	ft_printf("14|%c%c%c%c%c%c%c%c\n", 49,50,51,52,53,54,55,56);
	ft_printf("15|%0c\n", 'a');
	ft_printf("16|%-c\n", 'a');
	printf("specifier c real printf /--------------\n");
	printf("1|%04chi\n", 33);//resulting in undefined but outputs 000!
	printf("2|%-04c\n", 33);//resulting in undefined but outputs!   
	printf("3|%04.5c\n", 33);//resulting in undefined but outputs 000!
	printf("4|%.5c\n", 33);//resulting in undefined but outputs !
	printf("5|%-4c\n", 33);// outputs   !
	printf("6|%4c\n", 33);
	printf("7|%c\n", 33);
	printf("8|%-*c\n", 4, 33);
	printf("09|%1c%2c%3c%4c%1c%2c%3c%4c\n", ' ','!','"','#','$','%','&','\'');
	printf("10|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", (char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8);
	printf("11|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", 128,129,130,131,132,133,134,135);
	printf("12|%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\n", (char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135);
	printf("13|%c%c%c%c%c%c%c%c\n", 145,146,147,148,149,150,151,152);
	printf("14|%c%c%c%c%c%c%c%c\n", 49,50,51,52,53,54,55,56);
	printf("15|%0c\n", 'a');
	printf("16|%-c\n", 'a');



	ft_printf("\nspecifier s /--------------------------------------\n");
	ft_printf("1|%3.7s%3.3s\n", "hello", "world");
	ft_printf("2|%7.7s%3.3s\n", "hello", "world");
	ft_printf("3|%3.7s%7.3s\n", "hello", "world");
	ft_printf("4|%7.7s%7.3s\n", "hello", "world");
	ft_printf("5|%.7s%.2s\n", "hello", "world");
	ft_printf("6|%.3s%.2s\n", "holla", "bitch");
	ft_printf("7|%s%s\n", "hello", "world");
	ft_printf("8|this %s is empty\n", "");
	ft_printf("9|%5s\n", "goes over");
	ft_printf("10|%16s\n", "joyce macksuele");
	ft_printf("11|%-10s\n", "abc");
	ft_printf("12|%-5s\n", "goes over");
	ft_printf("13|%-15s\n", "goes over");
	ft_printf("14|%.7s\n", "hello");
	ft_printf("15|%.3s\n", "hello");
	ft_printf("16|%.s\n", "hello");
	ft_printf("17|%.0s\n", "hello");
	ft_printf("18|hello, %s.\n", NULL);
	ft_printf("19|%32s\n", NULL);
	ft_printf("20|%9.s\n", "\0");
	ft_printf("21|%.09s\n", "\0");
	printf("specifier s real printf /--------------\n");
	printf("1|%3.7s%3.3s\n", "hello", "world");
	printf("2|%7.7s%3.3s\n", "hello", "world");
	printf("3|%3.7s%7.3s\n", "hello", "world");
	printf("4|%7.7s%7.3s\n", "hello", "world");
	printf("5|%.7s%.2s\n", "hello", "world");
	printf("6|%.3s%.2s\n", "holla", "bitch");
	printf("7|%s%s\n", "hello", "world");
	printf("8|this %s is empty\n", "");
	printf("9|%5s\n", "goes over");
	printf("10|%16s\n", "joyce macksuele");
	printf("11|%-10s\n", "abc");
	printf("12|%-5s\n", "goes over");
	printf("13|%-15s\n", "goes over");
	printf("14|%.7s\n", "hello");
	printf("15|%.3s\n", "hello");
	printf("16|%.s\n", "hello");
	printf("17|%.0s\n", "hello");
	printf("18|hello, %s.\n", NULL);
	printf("19|%32s\n", NULL);
	printf("20|%9.s\n", "\0");
	printf("21|%.09s\n", "\0");



	int ncm_p = 5;
	int len;
	ft_printf("\nspecifier p /--------------------------------------\n");
	ft_printf("1|%.18p\n", &ncm_p);
	ft_printf("2|%.p\n", &ncm_p);
	ft_printf("3|%020.p\n", &ncm_p);
	ft_printf("4|%0p\n", &ncm_p);
	ft_printf("5|%-p\n", &ncm_p);
	ft_printf("6|%5.p\n", NULL);
	ft_printf("7|%2.p\n", NULL);
	ft_printf("8|%2.9p\n", 1234);
	ft_printf("9|%.5p\n", 0);
	printf("specifier p real printf /--------------\n");
	printf("1|%.18p\n", &ncm_p);
	printf("2|%.p\n", &ncm_p);
	printf("3|%020.p\n", &ncm_p);
	printf("4|%0p\n", &ncm_p);
	printf("5|%-p\n", &ncm_p);
	printf("6|%5.p\n", NULL);
	printf("7|%2.p\n", NULL);
	printf("8|%2.9p\n", 1234);
	printf("9|%.5p\n", 0);



	ft_printf("\nspecifier d /--------------------------------------\n");
	ft_printf("0|this %d number\n", 23647);
	ft_printf("1|%14.12d\n", -2147483647);
	ft_printf("2|%014.12d\n", -2147483647);
	ft_printf("3|%-14.12d\n", -2147483647);
	ft_printf("4|%014d\n", -2147483647);
	ft_printf("5|%-14d\n", -2147483647);
	ft_printf("6|%d\n", -2147483647);
	ft_printf("7|%0d\n", -2147483647);
	ft_printf("8|%-d\n", -2147483647);
	ft_printf("9|%-*.12d\n", 14, -2147483647);
	ft_printf("10|%-14.*d\n", 12, -2147483647);
	ft_printf("11|%-*.*d\n", 14, 12, -2147483647);
	ft_printf("12|%0*.12d\n", 14, -2147483647);
	ft_printf("13|%014.*d\n", 12, -2147483647);
	ft_printf("14|%.*d\n", 12, -2147483647);
	ft_printf("15|%8.3d\n", 8375);
	ft_printf("16|%d\n", 0);
	ft_printf("17|%4d\n", 94827);
	ft_printf("18|%-4d\n", 94827);
	ft_printf("19|%04d\n", -4825);
	ft_printf("20|%-3.3d\n", 6983);
	ft_printf("21|%0-3.3d\n", 6983);
	ft_printf("22|%.0d\n", 0);
	ft_printf("23|%.d\n", 0);
	ft_printf("24|%5.0d\n", 0);
	ft_printf("25|%5.d\n", 0);
	ft_printf("26|%-5.d\n", 0);
	ft_printf("27|%d\n", -2147483648);
	ft_printf("28|%i\n", 2147483648);
	printf("specifier d real printf /--------------\n");
	printf("0|this %d number\n", 23647);
	printf("1|%14.12d\n", -2147483647);
	printf("2|%014.12d\n", -2147483647);
	printf("3|%-14.12d\n", -2147483647);
	printf("4|%014d\n", -2147483647);
	printf("5|%-14d\n", -2147483647);
	printf("6|%d\n", -2147483647);
	printf("7|%0d\n", -2147483647);
	printf("8|%-d\n", -2147483647);
	printf("9|%-*.12d\n", 14, -2147483647);
	printf("10|%-14.*d\n", 12, -2147483647);
	printf("11|%-*.*d\n", 14, 12, -2147483647);
	printf("12|%0*.12d\n", 14, -2147483647);
	printf("13|%014.*d\n", 12, -2147483647);
	printf("14|%.*d\n", 12, -2147483647);
	printf("15|%8.3d\n", 8375);
	printf("16|%d\n", 0);
	printf("17|%4d\n", 94827);
	printf("18|%-4d\n", 94827);
	printf("19|%04d\n", -4825);
	printf("20|%-3.3d\n", 6983);
	printf("21|%0-3.3d\n", 6983);
	printf("22|%.0d\n", 0);
	printf("23|%.d\n", 0);
	printf("24|%5.0d\n", 0);
	printf("25|%5.d\n", 0);
	printf("26|%-5.d\n", 00);
	printf("27|%d\n", -2147483648);
	printf("28|%i\n", 2147483648);



	ft_printf("\nspecifier u /--------------------------------------\n");
	ft_printf("1|this %u number\n", 0);
	ft_printf("2|%u\n", 3);
	ft_printf("3|%u\n", 4294967295u);
	ft_printf("4|%7u\n", 33);
	ft_printf("5|%3u\n", 0);
	ft_printf("6|%-7u\n", 33);
	ft_printf("7|%-3u\n", 0);
	ft_printf("8|%-5u\n", 52625);
	ft_printf("9|%.5u\n", 2);
	ft_printf("10|%.3u\n", 0);
	ft_printf("11|%.4u\n", 5263);
	ft_printf("12|%05u\n", 43);
	ft_printf("13|%03u\n", 0);
	ft_printf("14|%8.5u\n", 34);
	ft_printf("15|%8.3u\n", 8375);
	ft_printf("16|%-8.5u\n", 0);
	ft_printf("17|%-8.3u\n", 8375);
	ft_printf("18|%-3.7u\n", 3267);
	ft_printf("19|%08.5u\n", 34);
	ft_printf("20|%03.3u\n", 6983);
	ft_printf("21|%0-8.5u\n", 0);
	ft_printf("22|%0-3.3u\n", 6983);
	ft_printf("23|%-5.u\n", 0);
	ft_printf("24|%-5.0u\n", 0);
	ft_printf("25|%u\n", -42);
	ft_printf("26|%u\n", -1);
	ft_printf("27|%u\n", -2147483647);
	printf("specifier u real printf /---------------\n");
	printf("1|this %u number\n", 0);
	printf("2|%u\n", 3);
	printf("3|%u\n", 4294967295u);
	printf("4|%7u\n", 33);
	printf("5|%3u\n", 0);
	printf("6|%-7u\n", 33);
	printf("7|%-3u\n", 0);
	printf("8|%-5u\n", 52625);
	printf("9|%.5u\n", 2);
	printf("10|%.3u\n", 0);
	printf("11|%.4u\n", 5263);
	printf("12|%05u\n", 43);
	printf("13|%03u\n", 0);
	printf("14|%8.5u\n", 34);
	printf("15|%8.3u\n", 8375);
	printf("16|%-8.5u\n", 0);
	printf("17|%-8.3u\n", 8375);
	printf("18|%-3.7u\n", 3267);
	printf("19|%08.5u\n", 34);
	printf("20|%03.3u\n", 6983);
	printf("21|%0-8.5u\n", 0);
	printf("22|%0-3.3u\n", 6983);
	printf("23|%-5.u\n", 0);
	printf("24|%-5.0u\n", 0);
	printf("25|%u\n", -42);
	printf("26|%u\n", -1);
	printf("27|%u\n", -2147483647);



	ft_printf("\nspecifier xX /--------------------------------------\n");
	ft_printf("1|%x\n", -42);// will do unsigned int (2^32) - 42 automatically before when I did va_arg
	ft_printf("2|this %x number\n", 17);
	ft_printf("3|this %x number\n", 0);
	ft_printf("4|%X\n", 3);
	ft_printf("5|%x\n", 4294967295u);
	ft_printf("6|%7X\n", 33);
	ft_printf("7|%3x\n", 0);
	ft_printf("8|%5X\n", 52625);
	ft_printf("9|%-7X\n", 33);
	ft_printf("10|%-4x\n", 9648627);
	ft_printf("11|%-3X\n", 0);
	ft_printf("12|%05x\n", 43);
	ft_printf("13|%.3X\n", 938862);
	ft_printf("14|%.3x\n", 0);
	ft_printf("15|%2.7x\n", 3267);
	ft_printf("16|%8.3X\n", 8375);
	ft_printf("17|%-3.3x\n", 6983);
	ft_printf("18|%-8.3X\n", 8375);
	ft_printf("19|%08.3x\n", 8375);
	ft_printf("20|%0-8.3X\n", 8375);
	ft_printf("21|%0-2.7x\n", 3267);
	ft_printf("22|%.0x\n", 0);
	printf("specifier xX real printf /--------------\n");
	printf("1|%x\n", -42);
	printf("2|this %x number\n", 17);
	printf("3|this %x number\n", 0);
	printf("4|%X\n", 3);
	printf("5|%x\n", 4294967295u);
	printf("6|%7X\n", 33);
	printf("7|%3x\n", 0);
	printf("8|%5X\n", 52625);
	printf("9|%-7X\n", 33);
	printf("10|%-4x\n", 9648627);
	printf("11|%-3X\n", 0);
	printf("12|%05x\n", 43);
	printf("13|%.3X\n", 938862);
	printf("14|%.3x\n", 0);
	printf("15|%2.7x\n", 3267);
	printf("16|%8.3X\n", 8375);
	printf("17|%-3.3x\n", 6983);
	printf("18|%-8.3X\n", 8375);
	printf("19|%08.3x\n", 8375);
	printf("20|%0-8.3X\n", 8375);
	printf("21|%0-2.7x\n", 3267);
	printf("22|%.0x\n\n", 0);

	system("leaks a.out");
	return (0);
}
