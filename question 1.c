#include <stdio.h>
struct B{
int id;
float ih;
float g;};
float height(struct B *b, int n) {
if (n == 0)
return b->ih;
float prev=height(b,n-1);
float g=prev*b->g;
return prev + g;}
int main() {
struct B b1;
printf("Enter the initial height: ");
scanf("%f",&b1.ih);
printf("Enter the growth rate: ");
scanf("%f",&b1.g);
int day;
printf("Enter the day: ");
scanf("%d",&day);
float H=height(&b1,day);
printf("\nHeight at day %d =
%.2f\n",day,H);
return 0;
}
