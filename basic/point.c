#include<stdio.h>

int main(){
	int a=0;
	int b=1;
	int *temp,*pointa,*pointb;
	pointa = &a;
	pointb = &b;
	//%p hexadecimal notation for the printed address
	printf ("a=%d,b=%d,a address=%p,b address=%p\n",a,b,&a,&b);
	printf ("pointa=%p , pointb=%p, get a=%d, get b=%d",pointa,pointb,*pointa,*pointb);
	printf ("\npointa address=%p , pointb address=%p",&pointa,&pointb);
	
	if(*pointa<*pointb){
		temp = pointb;
		pointb = pointa;
		pointa = temp;
	printf("\na=%d,b=%d\nExchange succeeded",*pointa,*pointb);
	}
	return 0;
}
