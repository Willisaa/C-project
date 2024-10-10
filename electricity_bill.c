6y6u/*This is a pjoject to calculate electricity bill of a consumer per rates
Author:Isaac Kiplangat
Date:7/10/24*/
#include <stdio.h>
int main() {
int customer_ID;
char name[15];//customers name
float unitconsumed;
float charges;//charges per unit
float bil;//this is the bill
float surcharge;
printf("Enter the ID\n");
scanf("%d",&ID);
printf("Enter customers name\n");
scanf("%s",&name);
printf("Enter the units consumed\n");
scanf("%f",&unitconsumed);
if (unitconsumed<=199)
{
    charges=1.20;
    bill=charges*unitconsumed;
}else if (unitconsumed<400)
{
    charges=1.53;
    bill=charges*unitconsumed;
}else if(unitconsumed<600)
{
    charges=1.8;
    bill=charges*unitconsumed;
}else{charges=2.00;
 bill=charges*unitconsumed;}
 if(bill>400)
 {
    surcharge=0.15*bill;
 }else{
    surcharge=0;
 }
if(bill<100)
{
    bill=100;
}
float amount=bill+surcharge;
printf("The customer ID is %d\n");
printf("The customer name is%s\n");
printf("The units consumed is%f,&units\n");
printf("The charges per unit is%f,charges\n");
printf("Total amount to pay is %f,&amount:");
    return 0;
}