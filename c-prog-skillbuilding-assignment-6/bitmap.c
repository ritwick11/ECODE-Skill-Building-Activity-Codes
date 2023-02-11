# include "bitmap.h"

/* The function returns integer value. It has two arguments one is integer 
   array and other is array length(size of an array ).In this case, the 
   function will count the total number of even element in the array and display them as output.  
Ex:
   {20,22, 24,19}, In this integer array  3 even numbers are present. Hence function will return ‘3’.
 
*/


int EvenNoCount(unsigned int arr[],unsigned int arrLength)

{
   int count=0;
    for(int i=0;i<arrLength;i++){
      if(arr[i]%2==0){
         count++;
      }
    }
   return count;
}


/* The function return unsigned integer  either ‘1’ or ‘0’.

Two string are given as input (lowercase character from ‘a – z’), 
in this case, the function has to check the frequency of each character
should be same in the both strings(in any order). 

Ex 1: “kpit” , “kpit” – 
The above example strings are same. Hence it will return 0.

Ex 2: “white” , “ithew” – 
The above example strings are same but only their order is different.
Hence it will return 0. 
*/



int StrCompare(const char *str, const char *str1)
{
   int sum_str=0;
   int sum_str1=0;
   for(int i=0;str[i]!='\0';i++)
      sum_str=sum_str+str[i];
   for(int i=0;str1[i]!='\0';i++)
      sum_str1=sum_str1+str1[i];
   if(sum_str==sum_str1)
      return 0;
   else
      return 1;
} 

/* The function returns unsigned integer.

It takes string as input, the string contains combination of 
digits and alphabets as shown in below example. 
In this case the function has to find the sum of all digits in strings. 

Ex: “103Jack”
In above example 1,0,3 are the digits. 
Hence the function will return the value is  4 (1+0+3 = 4).
*/

int NumCount(const char *str)
{
  int len=strlen(str);
  int sum=0;
  for(int i=0;i<len;i++){
      if(str[i]>='0' && str[i]<='9'){
         sum += (str[i]-48);
      }
  }
  return sum;

}




/*The function return toggled character.

It has two arguments one is string and other one is an index position. In this case, the 
function will read a string and toggle any character in a string
(meaning lower case to upper case or upper case to lower case) that can be decided by index position.

Ex. “Black” , 3

Output : ‘C’  because, it points to 3rd index position, hence the lower case ‘c’ toggled to upper case ‘C’.
.*/


char ToggleCharCase(const char *str, unsigned int indexposition)
{
    int length = strlen(str);
   char answer;
   for(int i=0;i<length;i++) {
      if(str[indexposition]>=65 && str[indexposition]<=90){
         answer = str[indexposition]+32;
      }
      else{
         answer = str[indexposition]-32;
      }
   }
   return answer; 
}

