//Pointer Arithmetic :-
//1. Addition of pointer with constant
//2. Subtraction of contsant from a pointer
//3. Subtraction of pointer with pointer
//4. We can compare(<,<,>=,<=,==,!=) two pointers

//Operations can't perform on pointer
//1. multiplcation of pointer with constant
//2. division of pointer with constant
//3. modulas of pointer with constant
//4. addition,mul,div and mod of pointer with pointer
//5. 
#include<stdio.h>
int main()
{
	int a=12,*p=&a, b=5 ,*q=&b;
	printf("%u %u\n",p,q);
	printf("%d",p++);
	printf("%d",++q);
/*	printf("%u %u\n",p,q);
	if(q>p)
		printf("Hello");
	else
		printf("Hi");*/
//	printf("%u %u\n",p,q);
//	printf("%d\n",(int*)300-(int*)100);
//	printf("%d\n",(int*)300*(int*)100);
//	printf("%d\n",(int*)300/(int*)100);
//	printf("%d\n",(int*)300%(int*)100);
//	printf("%d\n",(int*)300+(int*)100);
//	printf("%d\n",q+p);
//	printf("%d\n",q-p);///
//	printf("%d\n",p-q);
/*	printf("%u\n",p);//100
	printf("%u\n",p+5);//120
	printf("%u\n",p-1);//96
	printf("%u\n",p*2);//96
	printf("%u\n",p/2);//96
	printf("%u\n",p%2);//96*/
}
