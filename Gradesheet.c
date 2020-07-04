#include<stdio.h>
main()
{
	int Marks;
	printf("Hello!, This program will tell you Which grade you have got.\n");
	printf("Enter your marks: "); 
	scanf("%d",&Marks);          /* This line will take input from user*/
	if (Marks>=85 && Marks<=100)  /* From here if-else-if ladder starts and check the condition*/ 
	{
		printf("Outstanding, You have got Grade A");
	}
	else if (Marks>=70 && Marks<85)
	{
		printf("Very Good, You have got Grade B");
	}
	else if (Marks>=55 && Marks<70)
	{
		printf("Good, You have got Grade C");
	}
	else if (Marks>=40 && Marks<55)
	{
		printf("Work hard, You have got Grade D");
	}
	else if (Marks<40 && Marks>=0)
	{
		printf("Very Poor, Need lot of improvement. You have got Grade F");
	}
	else
	{
		printf("Error:_number_is_not_in_the_range_of_[0,100]"); /* Here we check, if the entered number is in the range of [0,100]*/
	}
	return 0;
}
