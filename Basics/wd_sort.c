/* to sort the given words in the alphabetical order and also to 
print the 1 longest word and 1 shortest word which ever alphabetically first*/ 
#include <stdio.h>
#include <conio.h>

void main(){
    int i,j,k;
    char temp[5],x[5][5] = {ba, bam, ban, bh};
    for (i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            for(k=0;k<5;k++){
                if(x[i][k]>x[j][k]){
                    temp=x[i][k];
                    x[i][k]=x[j][k];
                    x[j][k]= temp;
                }
            }
        }
    }
 return;
}
