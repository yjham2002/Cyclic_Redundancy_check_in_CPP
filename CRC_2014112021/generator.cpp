#include "CRC.h"

int main(int argc, char *argv[]) {
	scanf("%s", frame);
	scanf("%s", generator);
	modifyFrame(frame, generator);
	calculateRemainder(modiFrame, generator);
	printf("%s\n", transFrame);
	printf("%s\n", generator);
}
