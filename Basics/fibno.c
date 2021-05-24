#include <stdio.h>
#include <conio.h>

void main(){
    long int a,i;
    long int  b[1000]; 
    printf("Enter the number upto 1000 to print fibonacci series\n");
    scanf("%d",&a);
    printf("The fibonacci series is\n");
    b[0]=0;
    b[1]=1;
    int len=a-1;
    if(a==1){
        printf("%d",b[0]);
        return;
    }
    if(a==2){
        printf("%d, %d,",b[0],b[1]);
        return ;
    }
    for(i=2;i<=len;i++){
        b[i]=b[i-1]+b[i-2];
    }
    for(i=0;i<=len;i++){
        printf("%d ,",b[i]);
    }
}

