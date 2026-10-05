
#include <stdio.h>
  int main(void)

 {
	float h1,h2,h3,missing_h; 
        float total_sum,known_sum,average,needed_sum;
        // input the known heights of the three people
        printf("enter height 1:");
        scanf("%f",&h1);

        printf("enter height 2:");
        scanf("%f",&h2);

        printf("enter height 3:");
        scanf("%f",&h3);

        printf("enter the average of all the heights");
        scanf("%f",&average);

        total_sum= average*5;
        known_sum= h1 + h2 + h3;
	needed_sum= total_sum - known_sum;
        //since the missing two heights are the same
        missing_h= (needed_sum)/2;
        printf("missing heights are:%.2f and %.2f\n",missing_h, missing_h);
        return 0;
 }


