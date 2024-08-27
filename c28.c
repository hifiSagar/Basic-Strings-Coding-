
/*write a 'C' program to take "username","email adress ", "phone number", "aadhar number",
from user and display the result what all it took as input*/


                                /*USER INPUT ABOUT BANK INFORMATION  PROGRAM*/


/*#include<stdio.h>
int main(){

    char name[50], mail[50],phone[11],aadhar[15];
    printf("Enter your name \n");
    gets(name);
    printf("Enter your mail id \n");
 gets(mail);
    printf("Enter your phone number \n");
 gets(phone);
    printf("Enter your aadhar number \n");
     gets(aadhar);
     printf("=================================\n\n");
     printf("==========your details============\n");

     puts(name);
     puts(mail);
     puts(phone);
     puts(aadhar);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
void main(){
    char str[]=".";
    char strr[]="..........";
    int one = strlen(str),ten=strlen(strr);
    for(int i=one; i<=(ten*ten);i++)
    {
        printf("%d \n",i);

    }

}


