#include <stdio.h>
#include <stdlib.h>
#include"headerfile.h"
int main()
{
    printf("\n\n\n\t #########WELCOME TO THE ACADEMIC AND PERSONAL INFORMATION OF STUDENTS#############\n\n");
    printf("\t\t*********CONTAINS OF THE DETABASE MENEGMENT SYSTAM ABOUT STUDENT*******\n");
    printf("\t**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**==**\n\n\n");
    printf("\t (1) INSERTING THE STUDENT'S NEW DATA\n");
    printf("\t (2)SHOWING THE STUDENT'S NEW DATA\n");
    printf("\t (3)SEARCHING FOR FINDING THE REQUORED STUDENT DATA ACOURDING TO\n\t\t ==> ROLL NO\n\t\t ==> NAME\n\t\t ==> PHONE NO\n\t\t ==> DEPARTMENT\n");
    int choice;
    printf("\n\n\t CHOICE YOUR OPTION  FOR REQUIRED PROCEDOUR: ");
    scanf("%d",&choice);
    if(choice==1)
    {
      inseart_student_information();}
       else if (choice==2){
        showing_student_information();
      }
      else if (choice==3){
         searching_student_information();
      }




}









