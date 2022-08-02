#include<stdio.h>

int main()

{
	float celsius,farh;
	celsius = 0;
	while(celsius <= 300)
	{
		farh = (9.0/5.0) * celsius + 32;
		printf("%f\t%f\n",celsius,farh);
		celsius =celsius + 20;
	}

}
