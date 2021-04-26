/*Include every library I know just to be safe
because I'm not completely sure what each one does 
or which ones I really need*/
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

double getClassWeight(int numClasses)
{
    //Define the needed variables to store data read from the file
    char classWeight[3]; //The weighting of each class 
    char classGrade[1]; //The grade of each class
    double totalWeight = 0.0; //The sum of each class's weighting
    int i; //Needed for a for loop
    int j; //Needed for a for loop

    //Open the file for reading
    //It is referenced as 'gradeRecord'
    FILE *gradeRecord;
    gradeRecord = fopen("major.gpa.txt", "r");

    //Use a for loop and the numClasses value to read each class in the file for weighting and grade
    for (i = 1; i <= numClasses; i++) 
    {
        //Read the weighting of the class
        fscanf(gradeRecord, "%s ", &classWeight);

        /*Replace whitespace in classWeight strings with null values
        to make the string fit the character requirements so the
        different values can be compared*/
        for (j = 1; j <= 7; j++)
        {
            if (classWeight[i] == ' ')
                classWeight[i] = '\0';
        }

        //Using the string compare method, check the weighting of each class
        //Read the grade of the class
        //Using the string compare method, check the grading of each class
        //Add the corresponding GPA number for each weight/grade combination to totalWeight
        if (strcmp(classWeight, "AP+") == 0)
        {
            fscanf(gradeRecord, "%s\n", &classGrade);
            if (strcmp(classGrade, "A") == 0)
                totalWeight += 5.5;
            else if (strcmp(classGrade, "B") == 0)
                totalWeight += 4.4;
            else if (strcmp(classGrade, "C") == 0)
                totalWeight += 3.5;
            else if (strcmp(classGrade, "D") == 0)
                totalWeight += 2.5;
            else if (strcmp(classGrade, "F") == 0)
                totalWeight += 0;
        }

        else if (strcmp(classWeight, "AP") == 0)
        {
            fscanf(gradeRecord, "%s\n", &classGrade);
            if (strcmp(classGrade, "A") == 0)
                totalWeight += 5.0;
            else if (strcmp(classGrade, "B") == 0)
                totalWeight += 4.0;
            else if (strcmp(classGrade, "C") == 0)
                totalWeight += 3.0;
            else if (strcmp(classGrade, "D") == 0)
                totalWeight += 2.0;
            else if (strcmp(classGrade, "F") == 0)
                totalWeight += 0;
        }

        else if (strcmp(classWeight, "Hon") == 0)
        {
            fscanf(gradeRecord, "%s\n", &classGrade);
            if (strcmp(classGrade, "A") == 0)
                totalWeight += 4.5;
            else if (strcmp(classGrade, "B") == 0)
                totalWeight += 3.5;
            else if (strcmp(classGrade, "C") == 0)
                totalWeight += 2.5;
            else if (strcmp(classGrade, "D") == 0)
                totalWeight += 1.5;
            else if (strcmp(classGrade, "F") == 0)
                totalWeight += 0;
        }

        if (strcmp(classWeight, "CP") == 0)
        {
            fscanf(gradeRecord, "%s\n", &classGrade);
            if (strcmp(classGrade, "A") == 0)
                totalWeight += 4.0;
            else if (strcmp(classGrade, "B") == 0)
                totalWeight += 3.0;
            else if (strcmp(classGrade, "C") == 0)
                totalWeight += 2.0;
            else if (strcmp(classGrade, "D") == 0)
                totalWeight += 1.0;
            else if (strcmp(classGrade, "F") == 0)
                totalWeight += 0;
        }
    }

    //Close the file
    fclose(gradeRecord);

    //Return the sum of all class weightings
    return totalWeight;
}

int main()
{
    //Define the needed variables for the calculations
    int numClasses = 0; //The number of classes
    double gradePointAvg = 0.0; //The GPA
    double totalWeight = 0.0; //The total weighting of classes

    //Get the number of classes from the user
    printf("How many classes would you like to use to calculate your GPA?\n");
    scanf("%d", &numClasses);

    //Use getClassWeight method to find the total weighting from all classes and grades
    totalWeight = getClassWeight(numClasses);

    //Calculate and display the GPA
    gradePointAvg = totalWeight / (double) numClasses;
    printf("\nYour grade point average is %.3f\n\n", gradePointAvg);

    //Return 0 to end the program
    return 0;
}