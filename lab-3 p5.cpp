#include<stdio.h>

int main(){
	
	char Student_name[50];
	char Student_ID[10];
	int Completed_labs;
	int Total_labs;
	int  Quiz_marks;
	int Assignment_marks;
	int Project_marks;
	float Percentage;
	float Total_Academic_Score;
	
	printf("Enter Student Name: ");
    scanf("%s", &Student_name);
    printf("Enter Student ID: ");
    scanf("%s", &Student_ID);
    printf("Enter Completed labs: ");
    scanf("%d", &Completed_labs);
    printf("Enter Totallabs: ");
    scanf("%d", &Total_labs);
    printf("Enter Quiz marks: ");
    scanf("%d", &Quiz_marks);
    printf("Enter Assignment marks: ");
    scanf("%d", &Assignment_marks);
    printf("Enter Project marks: ");
    scanf("%d", &Project_marks);
	
	Percentage = ((float)Completed_labs / Total_labs) * 100;
	Total_Academic_Score = Quiz_marks + Assignment_marks + Project_marks;
	
	
	printf("\n\n ------------------------------- \n\n");
	printf(" Student Name :             %s\n", Student_name);
    printf(" Student ID :               %s\n", Student_ID);
    printf("\n Percentage :              %.2f%%\n", Percentage);
    printf(" Total Academic Score :     %.f\n", Total_Academic_Score);
    

	
	
	
	
	return 0;
}
