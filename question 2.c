#include<stdio.h>
#include<string.h>
struct loan{
char CN[50];
float loanamount;
float rate;
int months;
};
float repayment(struct
loan*l,int n){
if(n==0)return l->loanamount;
float prev=repayment(l,n-1);
if(prev<=0)return 0;
float mon_install=l-
>loanamount/l->months;
float interest=prev*l->rate;

float current=prev-
mon_install+interest;

return current;
}
int main(){
struct loan l1;
printf("Enter the customer
name:");
scanf("%[^\n]",l1.CN);
printf("Enter the rate:");
scanf("%f",&l1.rate);
printf("Enter the loan
amount:");
scanf("%f",&l1.loanamount);
printf("Enter the months:");
scanf("%d",&l1.months);
int n=l1.months;
float pay=repayment(&l1,n);
printf("\n%s your repayment
in month %d will be =
%.2f\n",l1.CN,l1.months,pay);
return 0;}
