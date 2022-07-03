#include <stdio.h>

int main()
{

	int input = 1;
	int cnt = 0;

	// for ( input=2; cnt<50; input++ )
	while ( cnt < 50 ) {
		int i;
		int isPrime = 1; // 判断是否为素数
		for ( i=2; i<input; i++) {
			if ( input % i == 0) {
				isPrime = 0;
				break;
			}
		}

		if ( isPrime == 1) {
			cnt ++;
			if (cnt < 5){
				printf("%d \t", input);
			} else{
				printf("%d\t", input);
			}
			
			if ( cnt % 5 == 0) {
				printf("\n");
			}
		}

		input ++;

	}

	return 0;
}
