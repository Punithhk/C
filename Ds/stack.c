#include <stdio.h> 
#include <conio.h> 

int MAX=1000; 
int TOP= -1;
char a[MAX][MAX];

void push(){
    char b[MAX];
    int n=1,i=1;
    printf("How many names you want to enter\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    while(i<=n){
        scanf("%s",&b);
        TOP=TOP+1;
        a[TOP][MAX]=b[MAX];
        ++i;   
    }
    printf("Added all the elements\n");
    return;
}

void pop(){
    int n,i;
    if(TOP==-1){
        printf("Stack is empty\n");
        return;
    }
    printf("How many elements want to pop\n");
    scanf("%d",&n);
    printf("The popped elements are\n");
    for(i=1;i<=n;i++){
        printf("%s",&a[TOP]);
        TOP=TOP-1;
    }
    return;
}

void modify(){
    char b[MAX];
    int temp=TOP,i=0;
    printf("Listing all the elements\n");
    for (i=0;i<=temp;i++){
        printf("%s",a[i]);
    }
    printf(" Enter Name to be modified\n");
    scanf("%s",&b);
    while(temp<0){
        if(b[MAX]==a[temp][MAX]){
            printf("Element found\n");
            printf("Enter modified name\n");
            scanf("%s",&a[temp][MAX]);
            break;
        }
        temp--;
    }
    printf("List after modifications");
        for (i=0;i<=TOP;i++){
        printf("%s",a[i]);
    }
    return;
}

void display(){
   int i=0;
   if(TOP==-1){
        printf("Stack is empty\n");
        return;
    }
    printf("Listing all the elements\n");
    for (i=0;i<=TOP;i++){
        printf("%s",a[i]);
    }
    return;
}
void main(){
    int n=0;
    
   for(;;){
       printf("Enter the input\n 1.Add content\n 2.Delete Content\n3.Modify\n4.Display\n5.Exit");
       scanf("%d",&n);
    switch (n)
    {
        case 1 : printf("Add content\n");
                 push();
                 break;
        case 2: printf("Delete content\n");
                pop();
                break;
        case 3: printf("Modify content\n");
                modify();
                break;
        case 4: printf("Display");
                display();
                break;
        default: printf("Invalid input Exiting\n");
                 return;
      }
    }
}
