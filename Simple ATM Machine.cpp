/*              " Simple ATM Machine "
           (Simple_&_Easy_for_Beginners)
       
      * Code By  : S011T Hacker 
      * Facebook : www.fb.com/sumit.ther.1
         
            >> COPYRIGHT FREE LICENSE <<
   
                                                  */
                                                  

#include<stdio.h>
#include<conio.h>

void main()
{
int pin;
char name[10]="ADMIN"; /* You can Change 'ADMIN' to 'Card Holder' Name.*/

Eng:
clrscr();
printf("*** Welcome to SBI ATM ***\n\n");
printf("> Enter Your ATM Pin Number: ");
scanf("%d",&pin);
if (pin!=1234) /* This is The Default Pin Of ATM Machine.*/
{
printf("Wrong Pin...!\n\n(press any key)");
getch(); goto Eng;
}
else
{
int op,m;
printf("\nPIN Accepted...!!\n\nYour ATM Pin Is %d \n\n",pin);

ls:
clrscr();
printf("*** Welcome %s ***\n",name);
printf("> Enter Your Choise <\n\n1.Cash Withdraw\n2.Balance Enquiry\n");
scanf("%d",&op); switch (op)
{

case 1:
clrscr();
printf("*** Welcome %s ***\n\n",name);
printf("> Enter Money You want to Withdraw...\nRs.");
scanf("%d",&m);
if (m>=1000) /* Balance In Card.*/
{
clrscr();
printf("SORRY ... You Have Insufficiant Balance\n");
getch(); break;
}
else {
clrscr();
printf("*** Welcome %s ***\n",name);
printf("\n>>Please Collect Your Cash Rs.%d.\n\n",m);
printf("Thank You for Using Our ATM Service... ");
getch(); break;
}

default:
clrscr();
printf("SORRY... You Entered Wrong Option\n(press any key)");
getch(); goto ls;

case 2:
clrscr();
printf("* Your Balance Is Rs.1,000\n\nThank You for Using Our ATM Service");
getch(); break;

}

}
}
