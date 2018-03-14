//Program 2.7 Division with float vaules
#include <stdio.h>

int main (void)
{
/*	char a;
	short int b;
	int c;
	long int d;
	long long int e;
	
	unsigned char h;
	unsigned short i;
	unsigned int j;
	unsigned long k;
	unsigned long long l;
	
	int o = -1;
	long p = 2L;
	long long q = 3LL;
	unsigned int r = 4U;
	unsigned long s =5UL;
	unsigned long long t = 6ULL;
	
	float u = 7f;
	double v = 8.9E14;
	long double w = 1.1E17L;	*/
	float plank_piece = 10.0f;
	long double piece_count = 4.0L;
	float piece_length = 0.0f;
	
	piece_length = plank_piece / piece_count ;
	printf("A plank %-1f feet long can be cut into %1Lf piece %-6.2f feet long.\n",plank_piece,piece_count,piece_length);
	
	return 0;
}