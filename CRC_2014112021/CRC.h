#include <iostream>

const static int MAX = 32;
char frame[MAX], generator[MAX], modiFrame[MAX], transFrame[MAX], remaind[MAX];

void calculateRemainder(char *frame, char *generator) {
	strcpy(remaind, frame);
	for (int i = 0; i < strlen(frame) - strlen(generator); i++) {
		if (remaind[i] == '1')
			for (int j = 0; j < strlen(generator); j++)
				if (remaind[i + j] == generator[j]) remaind[i + j] = '0';
				else remaind[i + j] = '1';
	}
	for (int i = 0; i < strlen(frame); i++)
		if (frame[i] == remaind[i]) transFrame[i] = '0';
		else transFrame[i] = '1';
}

void modifyFrame(char *frame, char *generator) {
	strcpy(modiFrame, frame);
	for (int i = 0; i < strlen(generator) - 1; i++) modiFrame[i + strlen(frame)] = '0';
}

void alterFrame(int mbit) {
	if (transFrame[mbit] == '0') transFrame[mbit] = '1';
	else transFrame[mbit] = '0';
}
