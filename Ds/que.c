#include <stdio.h>
#include <conio.h> 

#define MAX 10
// display();modify();  del();add();//
int a[MAX];
int r=0;
int f=0;
void main(){
    int n=0,m=0,i=0;
   for(;;){
       printf("\nEnter the input\n 1.Add content\n 2.Delete Content\n3.Modify\n4.Display\n5.Exit\n");
       scanf("%d",&n);
    switch (n)
    {
        case 1 : printf("\nEnter the element\n");
                scanf("%d",&m);
                if(r==MAX-1){
                    printf("\nQueue is full come back after someone goes\n");
                    break;
                }
                else{
                    a[r]=m;
                    r=r+1;
                    break;
                }
        case 2: printf("Enter digit to delete\n");
                scanf("%d",&m);
                if(f==r){
                    printf("Empty queue\n");
                    break;
                }
                for(i=f;i<r;i++){
                    if(a[i]==m){
                        f=f+1;
                        a[i]=-1;
                        printf("\nElement found at %d position & its deleted\n",i);
                        break;
                    }              
                }
                printf("\nElement not found\n");
                break;

        case 3: printf("Modify content\n");
        printf("Enter digit to modify\n");
                scanf("%d",&m);
                for(i=f;i<r;i++){
                    if(a[i]==m){
                        printf("Element found at %d",i);
                        printf("\nEnter your digit with modification\n");
                        scanf("%d",&a[i]);
                        break; 
                    }
                }
                printf("Element not found\n");
                break;

        case 4: printf("Display\n");
                 if(f==r){
                    printf("Empty queue\n");
                    break;
                }
                else{
                    for(i=f;i<r;i++){
                        printf("%d\n",a[i]); 
                    }
                break;
                }

        case 5: printf("Bye\n");
                return;
        default: printf("\nInvalid input Re-opening\n");
                getch();
                break;
      }
   
    }


    return;
}