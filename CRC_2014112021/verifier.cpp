#include "CRC.h"

int main(int argc, char *argv[]) {
	scanf("%s", transFrame);
	scanf("%s", generator);	
	printf("���۵� ������ : %s\n", transFrame);
	printf("������ CRC ��Ʈ : %s\n", generator);
	calculateRemainder(transFrame, generator);
	if(strchr(remaind, '1')) printf("���۵� ������ - ���� ����\n");
	else printf("���۵� ������ - ���� ����\n");
}
