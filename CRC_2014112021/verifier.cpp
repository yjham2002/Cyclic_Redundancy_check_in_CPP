#include "CRC.h"

int main(int argc, char *argv[]) {
	scanf("%s", transFrame);
	scanf("%s", generator);	
	printf("전송된 프레임 : %s\n", transFrame);
	printf("생성된 CRC 비트 : %s\n", generator);
	calculateRemainder(transFrame, generator);
	if(strchr(remaind, '1')) printf("전송된 프레임 - 오류 검출\n");
	else printf("전송된 프레임 - 오류 없음\n");
}
