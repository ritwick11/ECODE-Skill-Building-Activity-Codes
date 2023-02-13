#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book{
       char title[20];
       char author[20];
       char publisher[20];
       float price;
       int pages;
       int year;
       int id;
       };
       void displayall(struct book *ptr, int n)
       {
              int i;
              printf("Displaying Information:\n");
              for (i = 0; i < n; i++) {
              printf("%d) %s %s %s %f %d %d %d\n", i+1, (ptr + i)->title,(ptr + i)->author,(ptr + i)->publisher, (ptr + i)->price, (ptr + i)->pages, (ptr + i)->year, (ptr + i)->id);
  }
       }
       void displayid(struct book *ptr, int n)
       {
           int d,i;
           printf("Enter desired id:");
           scanf("%d",&d);
           for (i = 0; i < n; i++) {
              if((ptr+i)->id==d)
              printf("%d) %s %s %s %f %d %d %d\n", i+1, (ptr + i)->title,(ptr + i)->author,(ptr + i)->publisher, (ptr + i)->price, (ptr + i)->pages, (ptr + i)->year, (ptr + i)->id);
           }
       }
       void displayname(struct book *ptr, int n)
       {
           char d[20];
           int i;
           printf("Enter desired name:");
           scanf("%s",d);
           for (i = 0; i < n; i++) {
              if(strcmp((ptr+i)->title,d)==0)
              printf("%d) %s %s %s %f %d %d %d\n", i+1, (ptr + i)->title,(ptr + i)->author,(ptr + i)->publisher, (ptr + i)->price, (ptr + i)->pages, (ptr + i)->year, (ptr + i)->id);
           }
       }
       void averageprice(struct book *ptr, int n)
       {
           int i;
           float avg ,temp =0;
           for(i=0;i<n;i++)
           {
               temp+= (ptr+i)->price;
           }
           avg= temp/(float)i;
           printf("The average price of all the books is: %.2f",avg);
           
       }
       void maxprice(struct book *ptr, int n)
       {
           int i;
           float max= (ptr+0)->price;
           for(i=0;i<n;i++)
           {
               if((ptr+i)->price > max)
               max = (ptr+i)->price ;
           }
           printf("The price of the most expensive book is %.2f", max);
       }
       void minprice(struct book *ptr, int n)
       {
           int i;
           float min= (ptr+0)->price;
           for(i=0;i<n;i++)
           {
               if((ptr+i)->price < min)
               min = (ptr+i)->price ;
           }
           printf("The price of the cheapest book is %.2f", min);
       }
       void maxpages(struct book *ptr, int n)
       {
           int i;
           float max= (ptr+0)->pages;
           for(i=0;i<n;i++)
           {
               if((ptr+i)->pages > max)
               max = (ptr+i)->pages ;
           }
           printf("The book with max no of pages is:\n");
           for (i = 0; i < n; i++) {
              if((ptr+i)->pages==max)
              printf("%d) %s %s %s %f %d %d %d\n", i+1, (ptr + i)->title,(ptr + i)->author,(ptr + i)->publisher, (ptr + i)->price, (ptr + i)->pages, (ptr + i)->year, (ptr + i)->id);
           }
           
       }
       void booksperyear(struct book *ptr, int n)
       {
           int i,y , count=0;
           printf("Enter desired year:");
           scanf("%d",&y);
           for(i=0;i<n;i++)
           {
            if((ptr+i)->year==y)
               {
                   count++;
               }   
           }
           printf("No of releases in %d is %d",y,count);
       }
       void minpricebyauthor(struct book *ptr, int n)
       {
           char d[20];
           int i, count=0;
           float min;
           printf("Enter desired author:");
           scanf("%s",d);
           for (i = 0; i < n; i++)
           {
              if(strcmp((ptr+i)->author,d)==0 )
              {
                  if(count==0)
                  {
                    min= (ptr+i)->price;
                    count=1; 
                  }
                  else
                  {
                      if((ptr+i)->price<min)
                      {
                          min= (ptr+1)->price;
                      }
                  }
                
              }
           }
            printf("The minimum price range of author %s is %.2f",d,min);
       }
       void sortedbytitle(struct book *ptr,int n)
       {
           int i,j;
           char s[20];
           struct book temp;
           for(i=0;i<n;i++){
           for(j=i+1;j<n;j++){
             if(strcmp((ptr+i)->title,(ptr+j)->title)>0){
                 temp= *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
             }
            }
   }
       }
       int main(){
           int n,i,ch;
           char f;
           struct book* ptr;
           printf("Enter value of n:");
           scanf("%d",&n);
           ptr= (struct book*)malloc(n*sizeof(struct book));
           for(i=0;i<n;i++)
           {
             printf("Enter book %d details: ",i+1);
             scanf("%s %s %s %f %d %d %d", (ptr + i)->title,(ptr + i)->author,(ptr + i)->publisher, &(ptr + i)->price, &(ptr + i)->pages, &(ptr + i)->year, &(ptr + i)->id);
           }
           sortedbytitle(ptr,n);
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
                   case 4: averageprice(ptr,n);
                   break;
                   case 5: maxprice(ptr,n);
                   break;
                   case 6: minprice(ptr,n);
                   break;
                   case 7: maxpages(ptr,n);
                   break;
                   case 8: booksperyear(ptr,n);
                   break;
                   case 9: minpricebyauthor(ptr,n);
                   break;
                   default: printf("Enter a valid choice");
               } 
               printf("do you wish to continue?");
               scanf(" %c",&f);
               //fflush(stdin);
               if(f=='n')
               break;
           }
           
           return 0;
           }
