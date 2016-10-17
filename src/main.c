#include "includes.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*char addr[255];
	scanf("%s", &addr);
	
	Binary bin;	
	int i;
	
	initBinary(&bin);
	for(i = 0; i < strlen(addr); i++)
	{	
		char wrd = toupper(addr[strlen(addr) - i - 1]);
		int native = wrd >= 'A' ? wrd - 'A' + 10 : wrd - '0';
		
		fromNative(&bin, native);
	}		
	printBinary(bin);*/
	
	Cache cache;
	initCache(&cache);
	return 0;
}
