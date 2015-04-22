#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    unsigned long long number, div;
    FILE *fp = fopen("large", "r");
    char buff[51];
    fread(buff, 1, 50, fp); 
    number = atoll(argv[1]);//atoll(buff);
    div = 2;
    printf("%llu = ", number);
    while(number != 0) {
	if(number % div != 0)
	    div++;
	else {
	    number /= div;
	    printf("%llu ", div);
	    if(number == 1) 
		break;
	    else
		printf("x ");
	}
    }
    printf("\n");

    return 0;
}
