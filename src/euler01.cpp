#include <stdio.h>
int main(){
	int a;
	int b;
	int c=0;
	int d=0;
	int e;
	for(a=1;a<1000;a++){
		b=a*3;
		c=c+b;
	}
	a=0;
	
	for(a=1;a<1000;a++){
		b=a*5;
		c=c+b;
	}
	a=0;
	for(a=1;a<1000;a++){
		e= a*15;
		d=d+e;
	}
	printf("´ä:%d",c-d);
}
