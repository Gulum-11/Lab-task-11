#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct weatherdata{
char city[50];
float b_temp;
float cool_factor;
};
float temp_rec(struct weatherdata *w,int n){
if(n==0) return w->b_temp;
float prev=temp_rec(w,n-1);
float variation=(rand()%5-2);
return prev+variation-w->cool_factor;
}
int main(){
srand(time(0));
struct weatherdata w;
int n;
printf("Enter city name: ");
scanf("%[^\n]",w.city);
printf("Enter base temperature: ");
scanf("%f",&w.b_temp);
printf("Enter cooling factor: ");
scanf("%f",&w.cool_factor);
printf("Enter days to simulate: ");
scanf("%d",&n);
float ans=temp_rec(&w,n);
printf("\nTemperature on day %d in %s =
%.2f\n",n,w.city,ans);
return 0;
}
