#include <stdio.h>

int main() {
	/*
	�ݺ��� 
	for��, ���� for�� (�����) 
	*/
	
	int i, j;
	
	for(i = 0; i < 10; i++) {
		printf("��\n");
	}
	
	i = 0;
	while(i < 10) {
		printf("��\n");
		i++;
	}
	
	for(i = 0; i < 5; i++) {
		for(j = i; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
