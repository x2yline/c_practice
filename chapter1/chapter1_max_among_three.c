#include <stdio.h>

int main()
{
	int a,b,c,d;
	int max(int a, int b, int c);
	printf("Please Enter Three numbers:\n");
	scanf("%d\n%d\n%d",&a,&b,&c);//�˴�ʹ��%lf�ڱ��벻����ִ�е�ʱ��ᱨ��֪��Ϊʲô
	d=max(a,b,c);
	printf("The max numer among a, b and c is %d\n", d);
	return 0;
}

int max(int a, int b, int c)
{
	int f;
	if(a>b)f=a;
	else f=b;
	if(f<c)f=c;
	else f=f;
	return(f);
}