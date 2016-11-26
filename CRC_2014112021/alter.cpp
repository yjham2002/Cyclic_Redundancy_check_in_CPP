#include "CRC.h"

int main(int argc, char *argv[]) {
	scanf("%s", transFrame);
	scanf("%s", generator);
	if (transFrame[0] == '1') {
		int mbit = *argv[1] - '0';
		mbit = strlen(transFrame) - mbit;
		alterFrame(mbit);
	}
	printf("%s\n", transFrame);
	printf("%s\n", generator);
}
