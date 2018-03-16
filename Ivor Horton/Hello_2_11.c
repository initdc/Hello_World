//Program 2.11 find the limits
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("Variables of type char store values from %d to %d.\n",CHAR_MIN,CHAR_MAX);
	printf("Variables of type unsigned char store from 0 to %u.\n",UCHAR_MAX);
	printf("Variables of type short store values from %d to %d.\n",SHRT_MIN,SHRT_MAX);
	printf("Variables of type unsigned short store values from 0 to %d.\n",USHRT_MAX);
	printf("Variables of type int store values from %d to %d.\n",INT_MIN,INT_MAX);
	printf("Variables of type unsigned int store from 0 to %u.\n",UINT_MAX);
	printf("Variables of type long store values from %ld to %ld.\n",LONG_MIN,LONG_MAX);
	printf("Variables of type unsigned long store values from 0 to %lu.\n",ULONG_MAX);
	printf("Variables of type long long store values from %lld to %lld.\n",LLONG_MIN,LLONG_MAX);
	printf("Variables of type unsigned long long store values from 0 to %llu.\n",ULLONG_MAX);
	
	printf("\nThe size of the smallest postive non-zero value of type float is %.6e.\n",FLT_MIN);
	printf("The size of the largest value of type float is %.6e.\n",FLT_MAX);
	printf("The size of the smallest postive non-zero value of type double is %.6e.\n",DBL_MIN);
	printf("The size of the largest value of type double is %.6e.\n",DBL_MAX);
	printf("The size of the smallest postive non-zero value of type long double is %.6Le.\n",LDBL_MIN);
	printf("The size of the largest value of type long double is %.6Le.\n",LDBL_MAX);

	printf("\nVriables of type float provide %u demical digits precision.\n",FLT_DIG);
	printf("Vriables of type doubel provide %u demical digits precision.\n",DBL_DIG);
	printf("Vriables of type long double provide %u demical digits presion.\n",LDBL_DIG);
	
	return 0;
}