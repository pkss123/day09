#include <stdio.h>

int main() {

	//int n = 1, save = 0;
	//for (int i = 1; i <= 30; i++) {
	//	printf("%d���� - %d��\n", i, n);
	//	n = n * 2;
	//	save += n;
	//}
	//printf("�� �ݾ� = %d", save);

	/*
		��ø for��
		 for�� �ȿ� for�� �Է�(�ܺ� for��, ���� for��)
		 �ܺ� for���� �ڵ尡 �� �� ����Ǵ� ���� ���� for���� �ݺ��� ������
	*/

	//for (int i = 1; i <= 3; i++) {
	//	printf("�ܺ� for�� ���� i : %d\n", i);
	//	for (int j = 1; j <= 5; j++) {
	//		printf("���� for�� ���� i : %d\n", j);
	//	}
	//	puts("\n���� for�� �ݺ� �� -> �ܺ� for�� ���� ������ ����\n");
	//}

	//for (int a = 0; a <= 2; a++) {
	//	for (int b = 0; b <= 2; b++) {
	//		printf("(a : %d\tb : %d)\n", a, b);
	//	}
	//}

	//int j;
	//for (int i = 0; i <= 4; i++) {
	//	for (j = 1; j <= 5; j++) {
	//		printf("%d\t", i * 5 + j);
	//		
	//	}
	//	puts("");
	//}


	//for (int i = 1; i <= 9; i++) {
	//	for (int j = 1; j <= 9; j++) {
	//		printf("%d x %d = %d\t", j, i, j * i);
	//	}
	//	puts("");
	//}

	//for (int i = 1; i <= 2; i++) {
	//	for (int j = 1; j <= 9; j++) {
	//		for (int k = i; k <= 3; k++) {
	//			printf("%d x %d = %d\t", i * 3 + k, j, (i * 3 + k) * j);
	//		}
	//	puts("");
	//	}
	//}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		puts("");
	}
}