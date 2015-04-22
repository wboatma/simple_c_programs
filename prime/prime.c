#include <stdio.h>

int main()
{

    int n, n2, i=3, count, c;
    printf("Prime number to find between: ");
    scanf("%d", &n);
    scanf("%d", &n2);

    for(count=2; count <= n2; ) {
	for (c = 2; c <= i - 1; c++) {
	    if(i%c == 0) break;
	}
	if(c==i) {
	    if(count > n) printf("%d\n",i);
	    count++;
	}
	i++;
    }
}
