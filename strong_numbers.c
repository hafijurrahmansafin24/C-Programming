#include <stdio.h>

int fact(int n) {       // factorial function
	int f = 1;

	for(int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

int isStrong(int n) {       // check Strong Number
	int sum = 0, t = n ;

	while(t > 0) {
		sum += fact(t % 10);
		t /= 10;
	}
	return sum == n;
}

int main() {
	int s, e;

	printf("Enter starting & ending number: ");    // interval input
	scanf("%d %d", &s, &e);
	printf("Strong Numbers between %d and %d are: ", s, e);

	for(int i = s; i <= e; i++) {   // loop through interval
		if(isStrong(i)) {
			printf("%d ", i);    // print Strong
		}
	}
	return 0;
}
