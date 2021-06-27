// Accept number from user and display all the numbers  till that number 
// Input : 4
// output : 1+2+3+4 = 10 


/*
START 
   Accept one number as no
   If number is negative then convert it to possitive
   Create one counter as cnt and set it to 1
   
   Iterate till the counter is less than or equal to the number
   print the value of counter on screen 
   Increment the value of counter by 1
   continue
END
*/
#include<stdio.h>
//Display function accepts one parameter and returns nothing
 int Sum(int iNo)
 {
	 
	 int iCnt =0;
	 int iSum=0;
	 if(iNo==0) // jr input 0 asel tr function prynt janar nahi.
	 {
		 return 0;
	 }
	 if(iNo<0) // Input Updater
	 {
		 iNo=-iNo;
	 }
	
	 for(iCnt=1;iCnt<=iNo;iCnt++)
	 {
		 iSum = iSum+iCnt;
	 }
	 return iSum;
 }
 
int main()// Entry Point function
{
	int iNo =0;
	int iRet =0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	iRet = Sum(iNo);
	
	printf("Addition is : %d\n",iRet);
	return 0;
}