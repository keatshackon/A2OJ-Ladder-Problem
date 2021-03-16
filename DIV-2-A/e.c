


#include<stdio.h>

int main(){

	int n = 0;
	scanf("%d",&n);

	int a = ((n & 0x55555555) > 0) && ((n &(n-1)) == 0);

	if(a) printf("It Is a Power of Four");
	else  printf("It Is Not Power of Four");
    
	return 0;
}