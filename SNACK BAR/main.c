#include <stdio.h>
//Project : Snack Bar Application.
//author : Antony O.Sewe.

int menu(){
 int item;
 int quantity;
 float paid;
    printf("WELCOME TO ZETECH SNACK BAR\n ");
    printf("\tMENU FOR TODAY\n");
    printf("1. Hambuger            -Ksh 300\n");
    printf("2.Hotdog               -Ksh 90\n ");
    printf("3.Frech fries          -Ksh 150\n");
    printf("4.Milkshake            -Ksh 150\n");
    printf("5.Coffee                 -Ksh70\n");
    printf("6.Beef smokie           -Ksh 40\n");
    printf("Enter item no: ");
    scanf("%d",&item);
    printf("Enter item quantity: ");
    scanf("%d",&quantity);

 switch (item)
 {
 case 1:
     printf("========== Item added to cart ==========");
     int total = 300 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total * 0.16);
     printf("Total amount : %1f \n", total+total*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total+total*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

case 2:
     printf("========== Item added to cart ==========");
     int total1 = 90 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total1 * 0.16);
     printf("Total amount : %1f \n", total1+total1*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total1+total1*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

case 3:
     printf("========== Item added to cart ==========");
     int total2 = 150 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total * 0.16);
     printf("Total amount : %1f \n", total1+total1*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total+total*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

case 4:
     printf("========== Item added to cart ==========");
     int total3 = 150 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total * 0.16);
     printf("Total amount : %1f \n", total+total*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total+total*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

case 5:
     printf("========== Item added to cart ==========");
     int total4 = 70 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total * 0.16);
     printf("Total amount : %1f \n", total1+total1*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total+total*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

case 6:
     printf("========== Item added to cart ==========");
     int total5 = 40 * quantity;
     printf("Sub total: %d \n",total);
     printf("VAT at 16 percent: %1f \n",total * 0.16);
     printf("Total amount : %1f \n", total+total*0.16);
     printf("Enter amount tendered for payment: ");
     scanf("%d",paid);
     printf("change is:%f",paid-total+total*0.16);
     printf("THANK YOU AND COME AGAIN");
     break;

 default: printf("INVALID CHOICE"); menu ();
    break;

 }

return item;

}
int main(){
    menu();



}


