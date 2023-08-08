#include <stdio.h>
int main() {

	char* p = "abcdef";
		printf("%zd\n", sizeof(p));
		printf("%zd\n", sizeof(p+1));
		printf("%zd\n", sizeof(*p));
		printf("%zd\n", sizeof(p[0]));
		printf("%zd\n", sizeof(&p));
		printf("%zd\n", sizeof(&p+1));
		printf("%zd\n", sizeof(&p[0]+1));
}