#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
int i,c,max=3,count=0,comrand;
srand(time(NULL));
for(;;){
	printf("�Է� �� ������ ����:");
	scanf("%d",&c);
if(max < c)
	c =max;
	printf("gamer: ");
for(i=0;i<c;i++){
	count++;
	printf("%d ",count);
}
if(count==30){printf("�й�"); break;}
if(count==29)
{
count++;
printf("computer: %d",count);
}
else
{
if(count >= 29 - max)
	comrand =  29 - count;
else
	comrand=rand()%max+1;
	printf("computer: ");
for(i=0;i<comrand;i++){
	count++;
	printf("%d ",count);
}
if(count>=31)
	{printf("�й�");
	 break;}
}
}
return 0;
}
