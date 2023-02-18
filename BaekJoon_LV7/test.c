#include <stdio.h>
#include <math.h>

int main(void) {
	int x, a, b, ans1, ans2;
	scanf("%d", &x);
	
	a = (int)((sqrt((x << 3) - 7) + 1) / 2);
	b = x - (((a * a) - a) >> 1);
	ans1 = (a & 1) ? a + 1 - b : b;
	ans2 = (a & 1) ? b : a + 1 - b;
	
	printf("%d/%d\n", ans1, ans2);
	
	return 0;
}