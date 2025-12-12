#include <stdio.h>

int main() {
	int n,i,j,c=0;

	printf("Enter number: ");
	scanf("%d",&n);

	int a[n];
	printf("Enter %d elements: ", n);

	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]==a[j] && a[i]!=-1) {
				printf("%d is duplicate and it is (%s)\n",a[i],a[i]%2?"odd":"even");
				c++;
				a[j]=-1;
			}
		}
	}
	printf("Total duplicates = %d\n",c);

	return 0;
}
