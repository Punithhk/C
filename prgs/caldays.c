// To Calculate the number of days between the two given dates //
#include <stdio.h> 
#include <conio.h> 

void main(){
    int pd,pm,py;
    int fd,fm,fy;
    int dd=0,dm=0,dy=0;
    printf("Enter the present date in the format dd mm yyyy\n");
    scanf("%d""%d""%d",&pd,&pm,&py);
    printf("Enter the future date in the format dd mm yyyy\n");
    scanf("%d""%d""%d",&fd,&fm,&fy);
    if((fd==pd)&&(pm=fm)&&(py==fy))
    {
        printf("You are on the same day\n");
        return;
    }
    while (py!=fy)
    {
        if(py%4==0){
            dd=dd+366;
            dm=dm+1;
            dy=dy+1;
            py=py+1;
        }
        else{
            dd=dd+365;
            dm=dm+12;
            dy=dy+1;
            py=py+1;
        }
    }
     if((pm==1)||(pm==3)||(pm==5)||(pm==7)||(pm==8)||(pm==10)||(pm==12)){
         pd=31-pd;
     }
     else if(pm==2){
         if(py%4==0){
             pd=29-pd;
         }
         else{
             pd=28-pd;
         }
     }
     else{
         pd=pd-30; 
     }
    pm=pm+1;
    while(pm!=fm){
        if(pm==2){
            if(py%4==0){
                dd=dd+29;
                dm=dm+1;
            }
            else{
                dd=dd+1;
                dm=dm+1;
            }
        }
        else if((pm==1)||(pm==3)||(pm==5)||(pm==7)||(pm==8)||(pm==10)||(pm==12)){
                dd=dd+31;
                dm=dm+1;
        }
        else{
            dd=dd+30;
            dm=dm+1;
        }
    }
    dd=dd+fd;
    
    printf("The number of days is %d\n",dd);
    printf("The number of months is %d\n",dm);
    printf("The number of years is %d\n",dy);
    return;
}