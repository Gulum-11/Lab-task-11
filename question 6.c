#include<stdio.h>
struct person{
char name[50];
int age;
};
struct student{
struct person per;
int credithrs;
float per_c_fee;
};
float feerec(struct student *s,int c[],int n){
if(n==0) return 0;
float prev=feerec(s,c,n-1);
return prev+(c[n-1]*s->per_c_fee);
}
int main(){
struct student st;
int n,i;
printf("Enter name: ");
scanf("%[^\n]",st.per.name);
printf("Enter age: ");
scanf("%d",&st.per.age);
printf("Enter per-credit fee: ");
scanf("%f",&st.per_c_fee);
printf("Enter number of subjects: ");
scanf("%d",&n);
int c[n];
for(i=0;i<n;i++){
printf("Credit hours for subject %d: ",i+1);
scanf("%d",&c[i]);
}
float total=feerec(&st,c,n);
printf("\nTotal semester fee for %s =
%.2f\n",st.per.name,total);
return 0;
}
