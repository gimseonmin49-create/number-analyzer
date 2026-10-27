#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num[5];
	int sum = 0;
	int evenCount = 0;
	int max, min;

	printf("숫자 5개를 입력하세요:\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번째: ", i + 1);
		scanf("%d", &num[i]);
	}

	max = num[0];
	min = num[0];

	for (int i = 0; i < 5; i++) {
		sum = sum + num[i];

		if (num[i] % 2 == 0) {
			evenCount++;
		}
		if (num[i] > max) {
			max = num[i];
		}
		if (num[i] < min) {
			min = num[i];
		}
	}

	printf("\n합계: %d\n", sum);
	printf("짝수 개수: %d\n", evenCount);
	printf("최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
	return 0;
}