#include"LinkStack.h"
int main() {
	int n;
	while (~scanf("%d",&n)); {
		printf("%d的二进制为:",n);
		Conversion(n,2);
		printf("%d的八进制为:",n);
		Conversion(n,2);
		printf("%d的十六进制为:",n);
		Conversion(n,16);
	}
}
