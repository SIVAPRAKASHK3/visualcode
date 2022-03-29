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
printf(" \t \t \t \t \t \t MAIN MENU  \n \n \t \t \t 1.Add Attendence \n \t \t \t  2.Retrive Total Days Present \n \t \t \t   3.Attendence Percentage \n \t \t \t    4.Check The Attendence Eligibility \n \t \t \t     5.Student's Remarks \n \t \t \t ");
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
	printf("Navigate to menu TYPE ? y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
         menu();
    else{
            printf("Thank you");
        }

}
void display(void){
	int i,x;
    x=*(&chat_org+1)-chat_org;
	for(i=0;i<x;i++){
		if(chat_org[i]=='|'){
			printf("\n");
		}
		else if(chat_org[i]=='@')
		break;
		else
		printf("%c",chat_org[i]);
	}
//	printf("%s \n",chat_org);
}

int add(){
    int x=0,i;
    char ch1=' ';
    char ch=' ';
    printf("\t \t <---Roll number starts from 1 end at 10 -->\nEnter the roll number \nTo close Attendence type -1 \n");
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
    printf("Do you want to enter data for another day TYPE ? y/n ");
    number_of_working_days++;
        scanf("%c",&ch1);
        scanf("%c",&ch);
        printf("\n");
    if(ch=='y'||ch=='Y')
        add();
    else{
        printf("To navigate menu TYPE ? y/n ");
       scanf("%c",&ch1);
        scanf("\n%c",&ch);
            if(ch=='y'||ch=='Y')
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
    printf("Enter the roll number--> ");
    scanf("%d",&roll_no);
    printf("[ %s ] attended for %d out of %d number of working days",dup[roll_no-1],arr[roll_no-1],number_of_working_days);
    printf("\nDo you want to search for otherS? TYPE y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
         retrive();
    else{
        printf("To Navigate menu TYPE ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
            menu();
        else
            printf("Thank you");
        }
}

int attendence_cal(int rollno){
return ((float)arr[rollno-1]/number_of_working_days)*100;
}


void login(){
	 //int itr;
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
        printf("Pin is WRONG try once again \n");
        printf("\t \t \t \t \t<-- REMAINING CHANCE %d TIMES.... -->\n",cont);
         cont--;
		login();}}
	}
}

void attendence_percentage()
{
    int rollno,cal;
    printf("Enter roll no--> ");
    scanf("%d",&rollno);
    cal=attendence_cal(rollno);
    printf("Attendence percentage of [ %s ] is %d",dup[rollno-1],cal);
    char ch=' ';
    char ch1=' ';
    printf("\nDo you want to find others attendence percentage ? TYPE y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
         attendence_percentage();
    else{
        printf("To Navigate menu TYPE ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
            menu();
        else
            printf("Thank you");
        }
}
void attendence_eligibility(){
    int roll;
    char ch1,ch;
    printf("Enter the roll number-->  ");
    scanf("%d",&roll);
    if(attendence_cal(roll)>75){
        printf("[ %s ] is Eligible for exam",dup[roll-1]);
    }
    else
        printf("[ %s ] Not Eligible for exam percentage is bellow 75",dup[roll-1]);
    
        printf("\nDo you want to check for one more... if yes type y else n or anykey  y/n ");
    scanf("%c",&ch1);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        attendence_eligibility();
    else{
        printf("To Navigate menu TYPE ? y/n ");
        scanf("%c",&ch1);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
            menu();
        else
            printf("Thank you");
        }
}


