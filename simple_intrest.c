/*This is aprogram to calculate simple intrest
Author:ISAAC*/
float principle_amount,time,rate
printf("please enter the principle\n");
scanf("%f",&principle_amount);
printf("Please enter the time in years\n");
scanf("%f",&time);
printf("Please enter the rate\n");
scanf("%f",&rate);
float simple_intrest;
simple_intrest=(principle_amount*time*rate)/100;
print("Your simple intrest is %f \n",simple_intrest);