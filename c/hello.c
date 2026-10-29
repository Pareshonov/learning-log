#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *nums = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		nums[i] = i * i;
	}
	printf("Hello from C. nums[4] %d\n", nums[4]);
	free(nums);
	return 0; /* forgot free(nums) on purpose */
}

