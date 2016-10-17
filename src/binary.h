typedef struct
{
	int length;
	unsigned short* digits;
	unsigned short negative : 1;
} Binary;

void initBinary(Binary* bin);
void printBinary(Binary bin);
void addDigit(Binary* bin, unsigned short digit);
void fromString(Binary* bin, char* str);
void fromNative(Binary* bin, int native);
