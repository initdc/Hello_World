//Program 2.17 enum
#include <stdio.h>

int main (void)
{
	enum Weekday {Monday = 1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday} Today = Monday,Tomorrow = Today + 1;
	printf("Today is %d, Tomorrow is %d.\n",Today,Tomorrow);
	
	enum FaceValue {two = 2,three,four,five,six,seven,eight,nine,ten,jack,queen,king,ace} inhand ;
	inhand = two * 4;
	printf("inhand is %d.\n",inhand);
	
	enum {red,orange,yellow,green,blue,gray,white,black} shirt_color;
	shirt_color = blue;
	printf("My shirt colour is %d\n",shirt_color);
	
	return 0;
}