/* Program Name :- Accept a character from user and print its previous and next character.
   Developer Name :- Dhoke Saurabh 
   Date :- 01/06/2021  */
 
  #include<stdio.h>
  int main ()
   {
     char ch;
     printf("Enter a character : ");
     scanf("%c",&ch);
    
     printf("Previous Character is : %c\n",(ch-1));
     printf("Next Character is : %c\n",(ch+1));
     return 0;
   }
