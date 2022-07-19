#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char* argv[]){
	FILE* fp1 = fopen(argv[1],"rb");
	FILE* fp2 = fopen(argv[2], "rb");
	uint32_t num1, num2, sum = 0;
	fread(&num1,4,1,fp1);
	fread(&num2,4,1,fp2);
	num1 = htonl(num1);
	num2 = htonl(num2);
	sum = num1 + num2;
	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", num1, num1, num2, num2, sum, sum);
}
