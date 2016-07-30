#include <stdio.h>
#include <conio.h>
#define max 5
typedef struct {
int top;
int data[max+1];
}stack;
stack tumpukan;
void createEmpty();
int IsEmpty();
int IsFull();
void push(int x);
void pop();
main(){
int lagi;
int input;
int choose;
createEmpty();
choose = 0;
puts("----restiyana-----");
while (choose != 5){


puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("             MENU")
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("1. check the condition");
puts("2. add data");
puts("3. print stack");
puts("4. clear stack");
puts("5. exit");
printf("choose the number: ");
scanf("%d",&choose);
switch(choose){
case 1: if (IsFull() == 1)
puts("Stack is full.");
else
{
printf("input data: ");
scanf("%d",&input);
push(input);
printf("%d",tumpukan.top);
printf("%d",IsFull());
printf("%d",IsEmpty());
}
break;
case 2: if (IsEmpty() == 1)
puts("stack is empty");
else if ((IsEmpty() == 0) && (IsFull() == 0))
puts("stack has been filled");
else
puts("full");
getch();
break;
case 3: while (IsEmpty() == 0)
{
printf("%d \n",tumpukan.data[tumpukan.top]);
pop();
}
getch();
break;
case 4: createEmpty();
puts("Stack is empty. Top = 0");
getch();
break;
case 5: puts("Done!"); 
getch();
break;
}
}
}

void createEmpty(){
tumpukan.top = 0;
}
int IsEmpty(){
if (tumpukan.top == 0)
return 1;
else
return 0;
}
int IsFull(){
if (tumpukan.top == max)
return 1;
else
return 0;
}
void push(int x){
tumpukan.top = tumpukan.top + 1;
tumpukan.data[tumpukan.top] = x;
}
void pop(){
tumpukan.top = tumpukan.top - 1;
}
