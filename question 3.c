#include<stdio.h>
#include<string.h>
struct patient{
char name[50];
int age;
int healthscore;
};
struct dailyreport{
int day;
int scorechange;
};
int finalscore(struct patient
*p,struct dailyreport r[],int n){
if(n==0) return p
-
>healthscore;
int prev=finalscore(p,r,n
-1);
int change=r[n
-
1].scorechange;
return prev+change; }
int main(){
struct patient p;
int n,i;
printf("Enter patient name: ");
scanf("%[^
\n]", p.name);
printf("Enter age: ");
scanf("%d", &p.age);
printf("Enter starting health
score: ");
scanf("%d", &p.healthscore);
printf("Enter number of days:
");
scanf("%d", &n);
struct dailyreport r[n];
for(i=0;i<n;i++){
printf("Day %d change: ",
i+1);
scanf("%d",
&r[i].scorechange);
r[i].day = i+1;
}
int result = finalscore(&p,r,n);
printf("
\nFinal health score
for %s after %d days =
%d
\n",p.name,n,result);
return 0; }
