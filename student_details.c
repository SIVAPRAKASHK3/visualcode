#include<stdio.h>
#include<string.h>
#include<conio.h>
#include "students_remark.c"
#include "name_ordering.c"
char chat_org[200];
void menu(void);
void enter(int roll_no);
int add();
int arr[20]={0};
char nam[10][20];
char str[6];
char str1[6]="12345";
void retrive();
int number_of_working_days=0;
int cont=3;
void login();
void regist();
char string[5];
void attendence_percentage();
void attendence_eligibility();

int main(){
	printf("\t LOGIN \n");
	login();
 return 0;  
}

void regist(){
   printf("Enter the pin");
   int itr;
   for(itr=0;itr<5;itr++)
   scanf("%c",&string[itr]);
}

void menu(){
printf("\n");
printf(" \t \t \t \t \t \t MAIN MENU  \n \n \t \t \t 1.add attendence \n \t \t \t  2.retrive total days present \n \t \t \t   3.percentage \n \t \t \t    4.check the attendence eligibility \n \t \t \t     5.Student's remarks \n \t \t \t ");
int n;
scanf("%d",&n);
an();
switch(n){
    case 1:
        add();
        break;
    case 2:
        retrive();
        break;
    case 3:
        attendence_percentage();
        break;
    case 4:
        attendence_eligibility();
        break;
    case 5:
        remark();
        break;
    default:
    	printf("Enter the existing option \n");
    	menu();
   
}}
void cpy(void){
	char ch=' ';
	char ch1=' ';
	strcpy(chat_org,chat);
	printf("Navigate to menu type ? y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y')
         menu();
    else{
            printf("Thank you");
        }

}
void display(void){
	printf("%s \n",chat_org);
}

int add(){
    int x=0,i;
    char ch1=' ';
    char ch=' ';
    printf("roll number starts from 1 end at 10 \nEnter the roll number \nafter entering the attendence To close Enter -1 \n");
    for( i=0;i<10;i++){
       scanf("%d",&x);
       if(x==-1){
            break;
                 }
        else if(x<1)
            {
                printf("Enter the correct value \n");
                add();
            }
       enter(x);
   }
    printf("Do you want to enter data for another day type ? y/n ");
    number_of_working_days++;
        scanf("%c",&ch1);
        scanf("%c",&ch);
        printf("\n");
    if(ch=='y')
        add();
    else{
        printf(" navigate to menu type ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
            if(ch=='y')
                menu();
            else
                printf("Thank you");
        }
    }
void enter(int roll_no){
    arr[roll_no-1]++;
}
void output(){
	int i;
    for( i=0;i<10;i++)
    printf("%d",arr[i]);
}
void retrive(){
    int roll_no;
    char ch=' ';
    char ch1=' ';
    printf("enter the roll number \n");
    scanf("%d",&roll_no);
    printf("[ %s ]attended for %d out of %d number of working days",dup[roll_no-1],arr[roll_no-1],number_of_working_days);
    printf("\nDo you want to search for other type y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y')
         retrive();
    else{
        printf("Navigate to menu type ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y')
            menu();
        else
            printf("Thank you");
        }
}

int attendence_cal(int rollno){
return ((float)arr[rollno-1]/number_of_working_days)*100;
}


void login(){
	// int itr;
     printf("Enter the 5 digit pin \n");
 		scanf("%5s",str);
	 if((strcmp(str,str1))==0)
       menu();
    else{
    	while(cont<=3){
    	if(cont==0)
    		break;
    	else
    		{	
        printf("pin is wrong try once again \n");
        printf("\t \t \t \t \t<-- REMAINING CHANCE %d TIMES.... -->\n",cont);
         cont--;
		login();}}
	}
}

void attendence_percentage()
{
    int rollno,cal;
    printf("Enter roll no ");
    scanf("%d",&rollno);
    cal=attendence_cal(rollno);
    printf("attendence percentage of [ %s ] is %d",dup[rollno-1],cal);
    char ch=' ';
    char ch1=' ';
    printf("\nDo you want to find others attendence percentage y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y')
         attendence_percentage();
    else{
        printf("Navigate to menu type ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y')
            menu();
        else
            printf("Thank you");
        }
}
void attendence_eligibility(){
    int roll;
    char ch1,ch;
    printf("Enter the roll number \n");
    scanf("%d",&roll);
    if(attendence_cal(roll)>75){
        printf("[ %s ] is Eligible for exam",dup[roll-1]);
    }
    else
        printf("[ %s ]Not Eligible for exam percentage is bellow 75",dup[roll-1]);
    
        printf("\nDo you want to check for one more... if yes type y else n or anykey  y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y')
        attendence_eligibility();
    else{
        printf("Navigate to menu type ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y')
            menu();
        else
            printf("Thank you");
        }
}


