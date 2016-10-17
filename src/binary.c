#include "includes.h"

void initBinary(Binary* bin)
{
	bin->negative = 0;
	bin->digits = malloc(sizeof(unsigned short));
	bin->length = 0;
}

void printBinary(Binary bin)
{
	int i;
	for(i = 0; i < bin.length; i++)
	{
		printf("%d", bin.digits[bin.length - i - 1]);
	}
}

void addDigit(Binary* bin, unsigned short digit)
{
	bin->length++;
	bin->digits = realloc(bin->digits, sizeof(unsigned short) * bin->length);
	bin->digits[bin->length - 1] = digit;
}

void fromString(Binary* bin, char* str)
{
	bin->length = strlen(str);
	
	char last = str[strlen(str) - 1];
	if(last == '-' || last == '+')
		bin->length--;
	
	bin->digits = realloc(bin->digits, sizeof(unsigned short) * bin->length);	
	
	int i;
	for(i = 0; i < bin->length; i++)
	{
		bin->digits[i] = str[strlen(str) - i - 1] == '1';
	}
}

void fromNative(Binary* bin, int native)
{	
	int c = 0;
	while(native > 0)
	{
		addDigit(bin, native % 2);
		native /= 2;
		c++;
	}
	
	while(c++ < 4)
		addDigit(bin, 0);
}
