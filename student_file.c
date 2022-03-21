#include<stdio.h>
#include<conio.h>
void menu();
void enter(int roll_no);
int add();
int arr[20]={0};
char nam[10][20];
void retrive();
void attendence_percentage();
void attendence_eligibility();
int number_of_working_days=0;
void sample();
void pri();

int main(){
 menu();   
}

void menu(){
printf("\n");
printf(" \t \t \t make move for your need \n 1.add attendence \n 2.retrive total days \n 3.percentage \n 4. check the attendence eligibility \n");
int n;
scanf("%d",&n);
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
        sample();
        break;
}}
void sample(){
	int i;
    // for(i=0;i<10;i++){
    //     scanf("%s",nam[i]);
    // }
      printf("working");
}

int add(){
    int x=0,i;
    char ch1=' ';
    char ch=' ';
    printf("To close Enter -1 \n");
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
    printf("%d",arr[roll_no-1]);
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
void attendence_percentage()
{
    int rollno,cal;
    printf("Enter roll no ");
    scanf("%d",&rollno);
    cal=attendence_cal(rollno);
    printf("attendence percentage is %d",cal);
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
    printf("Enter the roll number \n");
    scanf("%d",&roll);
    if(attendence_cal(roll)>75){
        printf("Eligible for exam");
    }
    else
        printf("Not Eligible for exam percentage is bellow 75");
}
void pri(){
	int i;
    for(i=0;i<10;i++){
        printf("%s",nam[i]);
    }
}


