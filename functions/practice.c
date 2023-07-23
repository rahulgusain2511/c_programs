#include <stdio.h>
int amount=0;
void success()
{
 printf("payment success enjoy your meal");
}
void pay()
{ 
    int num1,pin;
    int ram=1234;
        printf("if you want to pay by card or cash\n");
        printf("enter 1 for cash and 2 for card ");
        scanf("%d",&num1);
        switch(num1) 
        {
            case 1:
            {
                success();
            }

            case 2:
            {
                printf("enter your card pin");
                scanf("%d",&pin);
                if(pin==ram)
                {
                    success();
                }
                else
                {
                    printf("payment failed please try another payment method");
                }
                
            }
        }
}

void bill(net,alp)
{
    int worth;

    worth = net ;
    printf(" your total amount is %d\n", worth);
    
    if(alp=='n'||alp=='N')
    {
        pay();
    }
}


void rest(ch)
{ int i,j;
    char che;
    int num;
    printf("%d",ch);
    switch (ch)
    {
    case 1:
    {
        amount += 200;
        break;
    }
    case 2:
    {
        amount += 50;
    break;
        
    }
    case 3:
    {
        amount += 30;
        break;
    }
    case 4:
    {
        amount += 40;
        break;
    }
    }
    

    printf("if you want anything more\t");
    printf("enter Y is yes and N for no\n");
    scanf(" %c", &che);
    if (che == 'Y' || che == 'y')
    {
         
        scanf("%d", &num);
        rest(num);
        for(i=1;i<=15;i++)
    {
        for(j=1;j<=30;j++)
        {
            if(i==1||j==1||j==30||i==15)
            {
                printf("*");
                
            }
             else if(j==11&&i==2)
            {
                printf("B");
            }
             else if(j==12&&i==2)
            {
                printf("R");
            }
             else if(j==13&&i==2)
            {
                printf("O");
            }
             else if(j==14&&i==2)
            {
                printf(" ");
            }
             else if(j==15&&i==2)
            {
                printf(" ");
            }
             else if(j==16&&i==2)
            {
                printf("C");
            }
             else if(j==17&&i==2)
            {
                printf("A");
            }
             else if(j==18&&i==2)
            {
                printf("F");
            }
             else if(j==19&&i==2)
            {
                printf("E");
            }
            else if(j==13&&i==3)
            {
                printf("M");
            }
            else if(j==14&&i==3)
            {
                printf("E");
            }
            else if(j==15&&i==3)
            {
                printf("N");
            }
            else if(j==16&&i==3)
            {
                printf("U");
            }
            else if(j==5&&i==5)
            {
                printf("D");
            }
            else if(j==6&&i==5)
            {
                printf("I");
            }
            else if(j==7&&i==5)
            {
                printf("S");
            }
            else if(j==8&&i==5)
            {
                printf("H");
            }
            else if(j==19&&i==5)
            {
                printf("A");
            }
            else if(j==20&&i==5)
            {
                printf("M");
            }
            else if(j==21&&i==5)
            {
                printf("O");
            }
            else if(j==22&&i==5)
            {
                printf("U");
            }
            else if(j==23&&i==5)
            {
                printf("N");
            }
            else if(j==24&&i==5)
            {
                printf("T");
            }
            else if(j==3&&i==7)
            {
                printf("1");
            }
            else if(j==5&&i==7)
            {
                printf("P");
            }
            else if(j==6&&i==7)
            {
                printf("I");
            }
            else if(j==7&&i==7)
            {
                printf("Z");
            }
            else if(j==8&&i==7)
            {
                printf("Z");
            }
            else if(j==9&&i==7)
            {
                printf("A");
            }
            
            else if(j==19&&i==7)
            {
                printf("1");
            }
            else if(j==20&&i==7)
            {
                printf("5");
            }
            else if(j==21&&i==7)
            {
                printf("0");
            }
            else if(j==3&&i==9)
            {
                printf("2");
            }
            else if(j==5&&i==9)
            {
                printf("M");
            }
            else if(j==6&&i==9)
            {
                printf("O");
            }
            else if(j==7&&i==9)
            {
                printf("M");
            }
            else if(j==8&&i==9)
            {
                printf("O");
            }
            else if(j==19&&i==9)
            {
                printf("5");
            }
            else if(j==20&&i==9)
            {
                printf("0");
            }
            else if(j==3&&i==11)
            {
                printf("3");
            }
            else if(j==5&&i==11)
            {
                printf("D");
            }
            else if(j==6&&i==11)
            {
                printf("R");
            }
            else if(j==7&&i==11)
            {
                printf("I");
            }
            else if(j==8&&i==11)
            {
                printf("N");
            }
            else if(j==9&&i==11)
            {
                printf("K");
            }
            else if(j==19&&i==11)
            {
                printf("4");
            }
            else if(j==20&&i==11)
            {
                printf("5");
            }
            else if(j==3&&i==13)
            {
                printf("4");
            }
            else if(j==5&&i==13)
            {
                printf("B");
            }
            else if(j==6&&i==13)
            {
                printf("U");
            }
            else if(j==7&&i==13)
            {
                printf("R");
            }
            else if(j==8&&i==13)
            {
                printf("G");
            }
            else if(j==9&&i==13)
            {
                printf("E");
            }
            else if(j==10&&i==13)
            {
                printf("R");
            }
            else if(j==19&&i==13)
            {
                printf("5");
            }
            else if(j==20&&i==13)
            {
                printf("0");
            }



            
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    }
    else
    {
        bill(amount,che);
    }
}

int main()
{
    int i, j;
    int choice;
    
    printf("please enter your choice from 1 to 4\n");
    for(i=1;i<=15;i++)
    {
        for(j=1;j<=30;j++)
        {
            if(i==1||j==1||j==30||i==15)
            {
                printf("*");
                
            }
             else if(j==11&&i==2)
            {
                printf("B");
            }
             else if(j==12&&i==2)
            {
                printf("R");
            }
             else if(j==13&&i==2)
            {
                printf("O");
            }
             else if(j==14&&i==2)
            {
                printf(" ");
            }
             else if(j==15&&i==2)
            {
                printf(" ");
            }
             else if(j==16&&i==2)
            {
                printf("C");
            }
             else if(j==17&&i==2)
            {
                printf("A");
            }
             else if(j==18&&i==2)
            {
                printf("F");
            }
             else if(j==19&&i==2)
            {
                printf("E");
            }
            else if(j==13&&i==3)
            {
                printf("M");
            }
            else if(j==14&&i==3)
            {
                printf("E");
            }
            else if(j==15&&i==3)
            {
                printf("N");
            }
            else if(j==16&&i==3)
            {
                printf("U");
            }
            else if(j==5&&i==5)
            {
                printf("D");
            }
            else if(j==6&&i==5)
            {
                printf("I");
            }
            else if(j==7&&i==5)
            {
                printf("S");
            }
            else if(j==8&&i==5)
            {
                printf("H");
            }
            else if(j==19&&i==5)
            {
                printf("A");
            }
            else if(j==20&&i==5)
            {
                printf("M");
            }
            else if(j==21&&i==5)
            {
                printf("O");
            }
            else if(j==22&&i==5)
            {
                printf("U");
            }
            else if(j==23&&i==5)
            {
                printf("N");
            }
            else if(j==24&&i==5)
            {
                printf("T");
            }
            else if(j==3&&i==7)
            {
                printf("1");
            }
            else if(j==5&&i==7)
            {
                printf("P");
            }
            else if(j==6&&i==7)
            {
                printf("I");
            }
            else if(j==7&&i==7)
            {
                printf("Z");
            }
            else if(j==8&&i==7)
            {
                printf("Z");
            }
            else if(j==9&&i==7)
            {
                printf("A");
            }
            
            else if(j==19&&i==7)
            {
                printf("1");
            }
            else if(j==20&&i==7)
            {
                printf("5");
            }
            else if(j==21&&i==7)
            {
                printf("0");
            }
            else if(j==3&&i==9)
            {
                printf("2");
            }
            else if(j==5&&i==9)
            {
                printf("M");
            }
            else if(j==6&&i==9)
            {
                printf("O");
            }
            else if(j==7&&i==9)
            {
                printf("M");
            }
            else if(j==8&&i==9)
            {
                printf("O");
            }
            else if(j==19&&i==9)
            {
                printf("5");
            }
            else if(j==20&&i==9)
            {
                printf("0");
            }
            else if(j==3&&i==11)
            {
                printf("3");
            }
            else if(j==5&&i==11)
            {
                printf("D");
            }
            else if(j==6&&i==11)
            {
                printf("R");
            }
            else if(j==7&&i==11)
            {
                printf("I");
            }
            else if(j==8&&i==11)
            {
                printf("N");
            }
            else if(j==9&&i==11)
            {
                printf("K");
            }
            else if(j==19&&i==11)
            {
                printf("4");
            }
            else if(j==20&&i==11)
            {
                printf("5");
            }
            else if(j==3&&i==13)
            {
                printf("4");
            }
            else if(j==5&&i==13)
            {
                printf("B");
            }
            else if(j==6&&i==13)
            {
                printf("U");
            }
            else if(j==7&&i==13)
            {
                printf("R");
            }
            else if(j==8&&i==13)
            {
                printf("G");
            }
            else if(j==9&&i==13)
            {
                printf("E");
            }
            else if(j==10&&i==13)
            {
                printf("R");
            }
            else if(j==19&&i==13)
            {
                printf("5");
            }
            else if(j==20&&i==13)
            {
                printf("0");
            }



            
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

    scanf("%d", &choice);
    rest(choice);
    return 0;
}