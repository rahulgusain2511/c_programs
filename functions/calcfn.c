    #include<stdio.h>
    int a,b;
    void value()
    {
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    }
   
    
        
        
            void mul()
            {
                printf("the multiplication is =%d",a*b);
            }
         
            
                void div()
                {
                    printf("a divided by b = %d",a%b);
                }
           
            
                void add()
                {
                    printf("addition of two numbner is = %d",a+b);
                }
            
            
                void sub()
                {
                    printf("the substration is =%d",a-b);
                }
                    
    
    
            
                int main()
                {
                    int choice;
                        printf("enter a choice\n 1 for multiplication \n 2 for division \n 3 for addition \n 4 for substration ");
                        scanf("%d",&choice);
                       value();
                    switch(choice)
                    {
                        case 1:
                        mul();
                       break;
                        case 2:
                        div();
                        break;
                        case 3:
                        add();
                        break;
                        case 4:
                        sub();
                        break;

                    }
                    

                    return 0;
                }
    