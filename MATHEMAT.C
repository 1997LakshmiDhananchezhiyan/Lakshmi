#include<stdio.h>
#include<conio.h>
#include<math.h>
void tables();
void calculator();
void mathematicalfunction();
void addtable();
void subtable();
void multable();
void divtable();
void add();
void sub();
void mul();
void div1();
void floor1();
void ceil1();
void sin1();
void cos1();
void tan1();
void sinh1();
void cosh1();
void tanh1();
void log1();
void log101();
void sqrt1();
void pow1();


void main()
{
int ch;
clrscr();
do
{
printf("\n************************\n");
printf("\n\n\n1.TABLES\n2.CALCULATOR\n3.MATHEMATICALFUNCTION\n4.EXIT\n\n\n");
printf("\n************************\n");
printf("\nEnter the Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
tables();
break;
case 2:
calculator();
break;
case 3:
mathematicalfunction();
break;
case 4:
break;
default:
printf("\n\nEnter the valid choice!!!!\n");
}
}while(ch<=3);
getch();
}
void tables()
{
int ch1;
do
{
printf("\n************************\n");
printf("\n\n\n1.ADDITION TABLE\n2.SUBTRACTION TABLE\n3.MULTIPLICATION TABLE\n4.DIVISION\n5.EXIT\n\n\n");
printf("\n************************\n");
printf("\nEnter the choice: ");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
addtable();
break;
case 2:
subtable();
break;
case 3:
multable();
break;
case 4:
divtable();
break;
case 5:
break;
deafault:
printf("\n\nenter the valid choice!!!!\n");
}
}while(ch1<=4);
}
void addtable()
{
int table_no,range,i;
printf("\nEnter the Table Number: ");
scanf("%d",&table_no);
printf("\nEnter the Range: ");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("\n%d+%d=%d",i,table_no,(i+table_no));
}
}
void subtable()
{
int table_no,range,i;
printf("\nEnter the Table Number: ");
scanf("%d",&table_no);
printf("\nEnter the Range: ");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("\n%d-%d=%d",i,table_no,(i-table_no));
}
}
void multable()
{
int table_no,range,i;
printf("\nEnter the Table Number: ");
scanf("%d",&table_no);
printf("\nEnter the Range: ");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("\n%d*%d=%d",i,table_no,(i*table_no));
}
}
void divtable()
{
int table_no,range,i;
printf("\nEnter the Table Number: ");
scanf("%d",&table_no);
printf("\nEnter the Range: ");
scanf("%d",&range);
for(i=1;i<=range;i++)
{
printf("\n%d/%d=%d",i,table_no,(i/table_no));
}
}
void calculator()
{
int ch2;
do
{
printf("\n************************\n");
printf("\n\n\n1.ADDTION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n\n\n");
printf("\n************************\n");
printf("\nEnter your choice: ");
scanf("%d",&ch2);
switch(ch2)
{
case 1:
add();
break;
case 2:
sub();
break;
case 3:
mul();
break;
case 4:
div1();
break;
case 5:
break;
default:
printf("\n\nEnter the valid choice!!!!");
}
}while(ch2<=4);
}
void add()
{
int a,b;
printf("\nEnter the 1st integer: ");
scanf("%d",&a);
printf("\nEnter the 2nd integer: ");
scanf("%d",&b);
printf("The Value of %d + %d is %d",a,b,(a+b));
}
void sub()
{
int a,b;
printf("\nEnter the 1st integer: ");
scanf("%d",&a);
printf("\nEnter the 2nd integer: ");
scanf("%d",&b);
printf("The Value of %d - %d is %d",a,b,(a-b));
}
void mul()
{
int a,b;
printf("\nEnter the 1st integer: ");
scanf("%d",&a);
printf("\nEnter the 2nd integer: ");
scanf("%d",&b);
printf("The Value of %d * %d is %d",a,b,(a*b));
}
void div1()
{
int a,b;
float f;
printf("\nEnter the 1st integer: ");
scanf("%d",&a);
printf("\nEnter the 2nd integer: ");
scanf("%d",&b);
f=(float)(a/b);
printf("The Value of %d / %d is %f",a,b,f);
}



void mathematicalfunction()
{
int ch3;

do
{
printf("\n************************\n");
printf("\n\n\n1.floor()\n2.ceil()\n3.sin()\n4.cos()\n5.tan()\n6.sinh()\n7.cosh()\n8.tanh()\n9.log()\n10.log10()\n11.sqrt()\n12.pow()\n13.exit()\n\n\n");
printf("\n************************\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch3);
switch(ch3)
{
case 1:
floor1();
break;
case 2:
ceil1();
break;
case 3:
sin1();
break;
case 4:
cos1();
break;
case 5:
tan1();
break;
case 6:
sinh1();
break;
case 7:
cosh1();
break;
case 8:
tanh1();
break;
case 9:
log1();
break;
case 10:
log101();
break;
case 11:
sqrt1();
break;
case 12:
pow1();
break;
case 13:
break;
default:
printf("\n\nEnter the valid choice!!!!");
}
}while(ch3<=12);
}
void floor1()
{
float f;
printf("\nEnter the float: ");
scanf("%f",&f);
printf("floor of %f is %f\n",f,floor(f));
}

void ceil1()
{
float f;
printf("\nEnter the float: ");
scanf("%f",&f);
printf("ceil of %f is %f\n",f,ceil(f));
}
void sin1()
{
float f,sin_value;
printf("\nEnter the float: ");
scanf("%f",&f);
sin_value=sin(f);
printf("sin(%f) is %f\n",f,sin_value);
}
void cos1()
{
float f,cos_value;
printf("\nEnter the float: ");
scanf("%f",&f);
cos_value=cos(f);
printf("cos(%f) is %f\n",f,cos_value);
}
void tan1()
{
float f,tan_value;
printf("\nEnter the float: ");
scanf("%f",&f);
tan_value=tan(f);
printf("tan(%f) is %f\n",f,tan_value);
}
void sinh1()
{
float f,sinh_value;
printf("\nEnter the float: ");
scanf("%f",&f);
sinh_value=sinh(f);
printf("sinh(%f) is %f\n",f,sinh_value);
}
void cosh1()
{
float f,cosh_value;
printf("\nEnter the float: ");
scanf("%f",&f);
cosh_value=cosh(f);
printf("cosh(%f) is %f\n",f,cosh_value);
}
void tanh1()
{
float f,tanh_value;
printf("\nEnter the number: ");
scanf("%f",&f);
tanh_value=tanh(f);
printf("tanh(%f) is %f\n",f,tanh_value);
}
void log1()
{
int f;
float log_value;
printf("\nEnter the number: ");
scanf("%d",&f);
log_value=(float)log(f);
printf("log(%d) is %f\n",f,log_value);
}
void log101()
{
int f;
float log10_value;
printf("\nEnter the number: ");
scanf("%d",&f);
log10_value=(float)log10(f);
printf("log10(%d) is %f\n",f,log10_value);
}
void sqrt1()
{
int num;
printf("\nEnter a number: ");
scanf("%d",&num);
printf("Sqrt of %d is %f\n",num,(float)sqrt(num));
}
void pow1()
{
int num,power;
printf("\nEnter the Number: ");
scanf("%d",&num);
printf("\nEnter the power");
scanf("%d",&power);
printf("\n%d Power %d = %f",num,power,(float)pow(num,power));
}

