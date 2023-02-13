#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct bankacc{
       int c_id;
       char c_name[20];
       float balance;
       };
       void displayall(struct bankacc *ptr, int n)
       {
              int i;
              printf("Displaying Records:\n");
              for (i = 0; i < n; i++) {
              printf("%d) %d %s %f\n", i+1, (ptr + i)->c_id,(ptr + i)->c_name,(ptr + i)->balance);
  }
       }
       void displayid(struct bankacc *ptr, int n)
       {
           int d,i;
           printf("Enter desired id:");
           scanf("%d",&d);
           for (i = 0; i < n; i++) {
              if((ptr+i)->c_id==d)
              printf("%d) %d %s %f\n", i+1, (ptr + i)->c_id,(ptr + i)->c_name,(ptr + i)->balance);
           }
       }
       void displayname(struct bankacc *ptr, int n)
       {
           char d[20];
           int i;
           printf("Enter desired name:");
           scanf("%s",d);
           for (i = 0; i < n; i++) {
              if(strcmp((ptr+i)->c_name,d)==0)
              printf("%d) %d %s %f\n", i+1, (ptr + i)->c_id,(ptr + i)->c_name,(ptr + i)->balance);
           }
       }
       void averagebalance(struct bankacc *ptr, int n)
       {
           int i;
           float avg ,temp =0;
           for(i=0;i<n;i++)
           {
               temp+= (ptr+i)->balance;
           }
           avg= temp/(float)n;
           printf("The average balance of all accounts is: %.2f",avg);
           
       }
       void acc_with_min_balance(struct bankacc *ptr, int n)
       {
           int i, count=0;
           float y;
           printf("Enter minimum balance:");
           scanf("%f",&y);
           for(i=0;i<n;i++)
           {
            if((ptr+i)->balance==y)
               {
                   count++;
               }   
           }
           printf("No of bank accounts with min balance %.2f is %d",y,count);
       }
       void sortedbyname(struct bankacc *ptr,int n)
       {
           int i,j;
           char s[20];
           struct bankacc temp;
           for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
             if(strcmp((ptr+i)->c_name,(ptr+j)->c_name)>0)
             {
                 temp= *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
             }
            }
            }
       }
       void credit_debit(struct bankacc *ptr,int n)
       {
            int i,id;
            float amount;
            char s;
            printf("Enter customer id:");
            scanf("%d",&id);
            printf(" Do you want to credit(c) or debit(d)? ");
            scanf(" %c",&s); 
            printf("Enter amount:");
            scanf("%f",&amount);
            for(i=0;i<n;i++)
            {
                  if((ptr+i)->c_id==id)
                  {
                                       if(s=='c')
                                       (ptr+i)->balance+=amount;
                                       else if(s=='d')
                                       (ptr+i)->balance-=amount;
                                       else
                                       printf("Transaction failed");
                                       printf("Updated record:");
                                       printf("%d %s %f\n",(ptr + i)->c_id,(ptr + i)->c_name,(ptr + i)->balance);
                                       
                  }          
            }
       }
       int main(){
           int n,i,ch;
           char f;
           struct bankacc* ptr;
           printf("Enter value of n:");
           scanf("%d",&n);
           ptr= (struct bankacc*)malloc(n*sizeof(struct bankacc));
           for(i=0;i<n;i++)
           {
             printf("Enter customer %d details: ",i+1);
             scanf("%d %s %f", &(ptr + i)->c_id,(ptr + i)->c_name,&(ptr + i)->balance);
           }
           sortedbyname(ptr,n);
           while(1)
           {
              printf("Enter choice no:");
               scanf("%d",&ch);
               switch(ch)
               {
                   case 1:displayall(ptr,n);
                   break;
                   case 2:displayid(ptr,n);
                   break;
                   case 3:displayname(ptr,n);
                   break;
                   case 4: averagebalance(ptr,n);
                   break;
                   case 5: acc_with_min_balance(ptr,n);
                   break;
                   case 6: credit_debit(ptr,n);
                   break;
                   default: printf("Enter a valid choice");
               } 
               printf("do you wish to continue?");
               scanf(" %c",&f);
               if(f=='n')
               break;
           }
           
           return 0;
           }
