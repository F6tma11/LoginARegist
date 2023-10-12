#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("------------------Hello Sir! Login or Register------------------------\n");
    char work[20];
    gets(work);
    for(int i=0;i<6;i++){
        if(strcmp(work,"login")==0){
        printf("--------------Login with your username and password---------------- \n");
        printf("Enter Username : ");
    char username[20];
    gets(username);
     printf("Enter Password : ");
     char password[20];
     gets(password);

     if(strcmp(username,"")!=0&&strcmp(password,"")!=0){
        printf("Login Successfuly\n");
        break;
     }if(i<5){
        printf("username or password not right\n");
     }
     else{
        printf("this not right you can try another time\n");
     }
    }


    }
    for(;;){
        if(strcmp(work,"Register")==0){
        printf("---------------------------------Register----------------------------------------------\n");
         printf("Enter Username : ");
    char username[20];
    gets(username);
     printf("Enter Password : ");
     char password[20];
     gets(password);
      printf("Enter Confirm Password : ");
     char Cpassword[20];
     gets(Cpassword);
     printf("Enter email : ");
     char email[20];
     gets(email);

     if(strcmp(username,"")!=0&&strcmp(password,"")!=0&&strcmp(password,Cpassword)==0&&strcmp(Cpassword,"")!=0&&strcmp(email,"")!=0){
        printf("you already have account \n");
        break;
     }else{
        printf("please enter data right\n");
     }
    }
    }


    return 0;
}
