#include<stdio.h>

int main() {
	int a = 0,b = 0,c = 0;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++) {
		scanf("%d",&b);
		if(b%2!=0) continue;
		c++;
	}
	printf("%d",c);
	return 0;
}
