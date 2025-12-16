#include<stdio.h>
#include<math.h>
struct file{
char name[50];
float orgsize;
float rate;
};
float comp(struct file *f,int n){
if(n==0) return f->orgsize;
float prev=comp(f,n-1);
float red=ceil(prev*f->rate);
float now=prev-red;
if(now<0) now=0;
return now;
}
int main(){
struct file f;
int k;
printf("Enter file name: ");
scanf("%[^\n]",f.name);
printf("Enter original size: ");
scanf("%f",&f.orgsize);
printf("Enter reduction rate: ");
scanf("%f",&f.rate);
printf("Enter number of rounds: ");
scanf("%d",&k);
float final=comp(&f,k);
printf("\nFinal file %s size after %d rounds =
%.2f\n",f.name,k,final);
return 0;
}
