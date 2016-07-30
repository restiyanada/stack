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
int pilih;
createEmpty();
pilih = 0;
puts("----restiyana-----");
while (pilih != 5){


puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("             MENU");
puts("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
puts("1. cek kondisi");
puts("2. tambah data");
puts("3. keluarkan isi stack");
puts("4. kosongkan stack");
puts("5. keluar");
printf("pilih angka: ");
scanf("%d",&choose);
switch(choose){
case 1: if (IsFull() == 1)
puts("Stack sudah penuh.");
else
{
printf("masukan data: ");
scanf("%d",&input);
push(input);
printf("%d",tumpukan.top);
printf("%d",IsFull());
printf("%d",IsEmpty());
}
break;
case 2: if (IsEmpty() == 1)
puts("stack kosong");
else if ((IsEmpty() == 0) && (IsFull() == 0))
puts("stack sudah terisi tetapi belum penuh");
else
puts("stack sudah penuh");
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
puts("Stack kosong. Top = 0");
getch();
break;
case 5: puts("Selesai"); 
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