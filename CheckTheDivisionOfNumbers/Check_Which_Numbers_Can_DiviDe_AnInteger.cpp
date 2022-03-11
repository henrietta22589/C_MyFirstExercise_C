
// Declaration of the libraries which is used in this programm
#include <stdio.h>
#include<stdlib.h>
//Declaration of the functions, which is used in this programm
int ImportValues();
int ImportValue_1();
void CheckValue_1(int);
int ImportValue_2();
void CheckValue_2();
int ImportValue_3();
void CheckValue_3(int);
int ImportValue_4();
void CheckValue_4(int);
void  printArray(int[]);
void main()
{
    int c = ImportValues();
}
//Creation of a function, which will provide to the user the first messages
void Greetings()
{
    //First Message the user, will read
    printf("Greetings");
    //This printf is used in order to give more space in the text
    printf("\n");
    //Explaining to the user the programm
    printf("In this program, you can give us an integer,which can be a single digit integer");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("or a multiple digit integer");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("Because the Framework of this programm, i am creating is really simple.\n The integer will have a limit of");
    printf("the digits, which will be consisted of.\nThis Limit is 8 digits");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("When you will be asked to give the first pair of numbers");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("you can give us numbers from{00}-until{99}\nfor example you can give numbers such us:01,10,11,98,99...etc");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("The exact same thing holds for the requests of second number,third and fourth number");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("At last,i would like to inform. If someone wants to import an integer such us the number 4");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("It is required,the fields to be completed in this way-> first-04,second-00,third-00,fourth-00");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("If the user, wants to import a number such us 55");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("It is required,the fields to be completed in this way-> first-55,second-00,third-00,fourth-00");
    //This printf is used in order to give more space in the text
    printf("\n");
    //This printf is used in order to give more space in the text
    printf("\n");
    printf("Let's start playing");
    //This printf is used in order to give more space in the text
    printf("\n");
    //This printf is used in order to give more space in the text
    printf("\n");
}


//Creation of a Function, which is importing the values, the user is Giving
int ImportValues()
{
    int firstly = ImportValue_1();
    int secondtly = ImportValue_2();
    int thirdtly = ImportValue_3();
    int fourthly = ImportValue_4();
    //importing the values, to the array
    int array[4] = { firstly,secondtly,thirdtly,fourthly };
    //Because we want, to specify the memory adress, of the array, we type down(&array[0])
    printArray(&array[0]);
    ValuesOfArrayAsaOneInteger(&array[0]);
    return 0;
}
int ImportValue_1()
{
    //Declaration of the type, and of the value which will be used in this Function
    int first;
    do {
        //First Request
        printf("Give me the First number\n");
        scanf("%d", &first);
        CheckValue_1(first);
    } while (first > 99 || first <= 0);
    return first;
}
void CheckValue_1(int first)
{
    //Check The number which was given, to this values
    if (first > 99 || first <= 0)
    {
        //Print the message
        printf("The number you have given to us, is not allowed.\nPlease Try again");
        //This printf is used in order to give more space in the text
        printf("\n");

    }
    else
    {
        //print The message
        printf("The value, you gave us, is inside the limits");
        //This printf is used in order to give more space in the text
        printf("\n");
    }
}
int ImportValue_2()
{
    //Declaration of the type, and of the value which will be used in this Function
    int second;
    do {
        //First Request
        printf("Give me the second number\n");
        scanf("%d", &second);
        CheckValue_2(second);
    } while (second > 99 || second <= 0);
    return second;
}
void CheckValue_2(int second)
{
    //Check The number which was given, to this values
    if (second > 99 || second <= 0)
    {
        //Print the message
        printf("The number you have given to us, is not allowed.\nPlease Try again");
        //This printf is used in order to give more space in the text
        printf("\n");
    }
    else
    {
        //print The message
        printf("The value, you gave us, is inside the limits");
        //This printf is used in order to give more space in the text
        printf("\n");
    }

}
int ImportValue_3()
{
    //Declaration of the type, and of the value which will be used in this Function
    int third;
    do {
        //First Request
        printf("Give me the Third number\n");
        scanf("%d", &third);
        CheckValue_3(third);
    } while (third > 99 || third <= 0);
    return third;
}
void CheckValue_3(int third)
{
    //Check The number which was given, to this values
    if (third > 99 || third <= 0)
    {
        //Print the message
        printf("The number you have given to us, is not allowed.\nPlease Try again");
        //This printf is used in order to give more space in the text
        printf("\n");
    }
    else
    {
        //print The message
        printf("The value, you gave us, is inside the limits");
        //This printf is used in order to give more space in the text
        printf("\n");
    }

}
int ImportValue_4()
{
    //Declaration of the type, and of the value which will be used in this Function
    int fourth;
    do {
        //First Request
        printf("Give me the Fourth number\n");
        scanf("%d", &fourth);
        CheckValue_4(fourth);
    } while (fourth > 99 || fourth <= 0);
    return fourth;
}
void CheckValue_4(int fourth)
{
    //Check The number which was given, to this values
    if (fourth > 99 || fourth <= 0)
    {
        //Print the message
        printf("The number you have given to us, is not allowed.\nPlease Try again");
        //This printf is used in order to give more space in the text
        printf("\n");
    }
    else
    {
        //print The message
        printf("The value, you gave us, is inside the limits");
        //This printf is used in order to give more space in the text
        printf("\n");
    }

}

void printArray(int* array)
{
    int i;
    //printing the values of the array//
    printf("The values of the array is:\n");
    for (i = 0; i < 4; i++)
    {
        printf("[%d] is %d\n", i, array[i]);

    }
}
void ValuesOfArrayAsaOneInteger(int* array)
{
    //message, which will give the user a complete image of the integer.
}

























































































