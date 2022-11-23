/*

Author: Tyler Scotti
Function: Will calculate the amount of weight (lbs and kgs) on a barbell with allowance for one input error
Date: 11.22.22

*/
#include <stdio.h>
#include <math.h>

int main(void){

        //Variable Initialization
    int W_45, W_25, W_10, W_5, W_2, resp; //Variables for 45, 25, 10, 5, and 2.5s respectively


    printf("Enter in the amount of 45s on one side: ");
        scanf("%d",&W_45);
    printf("Enter in the amount of 25s on one side: ");
        scanf("%d",&W_25);
    printf("Enter in the amount of 10s on one side: ");
        scanf("%d",&W_10);
    printf("Enter in the amount of 5s on one side: ");
        scanf("%d",&W_5);
    printf("Enter in the amount of 2.5s on one side: ");
        scanf("%d",&W_2);
    printf("You said you have %d - 45s, %d - 25s, %d - 10s, %d - 5s, and %d - 2.5s on one side. \nIs that correct? Enter 1 for Yes and 0 for No.\n",W_45,W_25,W_10,W_5,W_2);
        scanf(" %d",&resp);
             // printf("Output = %d",resp); debug
   if (resp == 1)
    {
        int T_45, bb = 45, T_25, T_10, T_5, T_2, total;//Extra variables for maff
        float kilo;

        //Calculation
         T_45 = W_45*90; // Total weight of 45s
                 // printf("Total weight for 45s = %d \n",T_45); //Debug
         T_25 = W_25*50;
                 // printf("Total weight for 25s = %d \n",T_25); //Debug
         T_10 = W_10*20;
                 // printf("Total weight for 10s = %d \n",T_10); //Debug
         T_5 = W_5*10;
                 // printf("Total weight for 5s = %d \n",T_5); //Debug
         T_2 = W_2*5;
                 // printf("Total weight for 2.5s = %d \n",T_2); //Debug
        total = T_45 + T_25 + T_10 + T_5 + T_2 + bb;
        kilo = total/2.205; //Converts lbs to kg
            printf("Total Pounds on the Barbell = %d lbs\nTotal Kilos on the barbell = %.1f kgs", total, kilo);
        return 0; //Prevents double output if resp == 0 at first.
    }
     else if(resp == 0) //Reruns code to fix input errors
    {
        printf("Enter in the amount of 45s on one side: ");
        scanf("%d",&W_45);
    printf("Enter in the amount of 25s on one side: ");
        scanf("%d",&W_25);
    printf("Enter in the amount of 10s on one side: ");
        scanf("%d",&W_10);
    printf("Enter in the amount of 5s on one side: ");
        scanf("%d",&W_5);
    printf("Enter in the amount of 2.5s on one side: ");
        scanf("%d",&W_2);
    printf("You said you have %d - 45s, %d - 25s, %d - 10s, %d - 5s, and %d - 2.5s on one side. \nIs that correct? Enter 1 for Yes and 0 for No.\n",W_45,W_25,W_10,W_5,W_2);
        scanf(" %d",&resp);
             // printf("Output = %d",resp); debug
    }
    else if (resp !=1 && resp !=0){
         printf("Mhm... I don't think I ask for that... Try again please. \n Enter 1 for Yes and 0 for No");
        scanf(" %d", &resp);
    }
    if (resp == 1){

        //Extra variables for maff
        int T_45, bb = 45, T_25, T_10, T_5, T_2, total;
        float kilo;

        //Calculation
         T_45 = W_45*90; // Total weight of 45s
                 // printf("Total weight for 45s = %d \n",T_45); //Debug
         T_25 = W_25*50;
                 // printf("Total weight for 25s = %d \n",T_25); //Debug
         T_10 = W_10*20;
                 // printf("Total weight for 10s = %d \n",T_10); //Debug
         T_5 = W_5*10;
                 // printf("Total weight for 5s = %d \n",T_5); //Debug
         T_2 = W_2*5;
                 // printf("Total weight for 2.5s = %d \n",T_2); //Debug
        total = T_45 + T_25 + T_10 + T_5 + T_2 + bb;
        kilo = total/2.205; //Converts lbs to kg
            printf("Total Pounds on the Barbell = %d lbs\nTotal Kilos on the barbell = %.1f kgs", total, kilo);
    }
    else if (resp == 0)
    {
        printf("Close and rerun program.");
    }
return 0; //End
}
