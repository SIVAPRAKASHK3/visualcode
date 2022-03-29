#include<stdio.h>
#include<string.h>
#include"name.h"
//char str[10][10]={"apple","zucchini","wolfbery","voavanga","rambutan","quince","peach","olive","Nectarine"};
//char str[10][3]={"zz","yy","xx","aa","bb","cc","dd","uu","vv"};
char dup[10][10]; //[25];
 //[25];
char s[25];
void fun();
void an();
void an(){fun();}
void fun(){

   int i,j,count,n;
      count=*(&str11+1)-str11;
    //  printf("%d %d",count,sizeof(str11));
      n=count;
//
//   char str[100][100],s[100];
//   printf("Enter number of names :\n");
//   scanf("%d",&n);
//   printf("Enter names in any order:\n");
//   for(i=0;i<n;i++){
//      scanf("%s",str[i]);
//   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str11[i],str11[j])>0){
            strcpy(s,str11[i]);
            strcpy(str11[i],str11[j]);
            strcpy(str11[j],s);
         }
      }
   }
     for(i=0;i<n;i++){
     	for(j=0;j<n;j++)
     	dup[i][j]=str11[i][j];}
     	// printf("%s %s ",str11[0],str11[9]);
     //	  printf("%s %s ",dup[0],dup[9]);
//   printf("\nThe sorted order of names are:\n");
//   for(i=0;i<n;i++){    printf("%s\n",str[i]);
//   }
//  
}
//  
//								   puts("enter the number of students ?: ");
//												 scanf("%d",&count);
//
//   puts("Enter Strings one by one: ");
					//   for(i=0;i<=count;i++)
						//   scanf("%s",str);
    //  gets(str[i]);
//str[1]="hello";
//str[0]="hi";
//   for(i=0;i<count;i++)
//      for(j=i+1;j<count;j++){
//         if(strcmp(str[i],str[j])>0){
//            strcpy(temp,str[i]);
//            strcpy(str[i],str[j]);
//            strcpy(str[j],temp);
//         }
//      }
//    //  int j,count;
////      count=*(&str+1)-str;
//      	for(j=0;j<count;j++){
//	printf("%s\n", str[j]);}
   //   strcpy(str,dup);
//      printf("size %d \n",sizeof(dup));
//   printf("Order of Sorted Strings:");
//   for(i=0;i<=count;i++)
//    printf("%s",dup[i]);
//     // puts(str[i]);
//    char ch=' ';
//    char ch1=' ';
//    printf("DO you want to continue y/n ");
//   scanf("%c",&ch);
//   scanf("%c",&ch1);
//   if(ch=='y'){
//   	fun();
//   }
//   else 
//   	printf("Thank you");

