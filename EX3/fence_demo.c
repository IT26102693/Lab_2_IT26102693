#include<stdio.h>
int main(void)
{
	float length,width,perimeter;
	//input the the perimeter
	printf("please enter the perimeter");
	scanf("%f",&perimeter);
	//calculates the length and width
	length=(2/7.0)*perimeter;
	width=(3/4.0)*length;
	//display the results
	printf("your length  is %.2fcm\n",length);
        printf("your width is %.2fcm\n",width);

        return  0;
}	
