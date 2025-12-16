#include<stdio.h>
int maxtips(int tips[],int tstop,int cstop){
if(cstop>=tstop)return 0;
int
takecurrent=tips[cstop]+maxtips(tips,tstop,cstop+2);
int skipcurrent=maxtips(tips,tstop,cstop+1);
return
(takecurrent>skipcurrent)?takecurrent:skipcurrent;
}
int main(){
int n;
printf("Enter the number of delivery stops: ");
scanf("%d",&n);
int tipAm[n];
printf("Enter the tip amount for each stop:\n");
for(int i=0;i<n;i++)scanf("%d",&tipAm[i]);
int max=maxtips(tipAm,n,0);
printf("Maximum total tips the rider can collect =
%d\n",max);
return 0;
}
