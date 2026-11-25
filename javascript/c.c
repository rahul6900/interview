#include <stdio.h>
int main()
{
    // print odd or even Number

    // for(int i=1;i<=100;i++){
    //  if(i%2==0){
    //  printf("%d\n",i);
    //  }

    //  if(i % 2 != 0){
    //   printf("%d\n",i);
    //  }

    // }

    // print odd number of an array

    //  int arr[]={4, 1, 9, 10, 15, 22, 5, 14};
    //   int length=sizeof(arr)/sizeof(arr[0]);

    //  for(int i=0;i<length;i++){
    //      if(arr[i]% 2!=0){
    //    printf("%d\n",arr[i]);
    //      }

    //  }

    // find and remove dublicate

    //         int arr[]={2,3,4,2,3,1};

    //         int length=sizeof(arr)/sizeof(arr[0]);

    //            int newAray[length];
    //            int size=0;

    //  for(int i = 0; i < length; i++) {
    //         for(int j = i + 1; j < length; j++) {
    //             if(arr[i] == arr[j])    {
    //             //   newAray[size++]=arr[i];
    //            printf("%d",arr[i]);

    // //             for(int k=j; k<length;k++){
    // //     arr[k] = arr[k+1];

    // // }
    // // length--;
    // // j--;
    //             }

    //         }

    //         //   printf("%d\n", arr[i]);

    //     }

    //                 for(int i=0;i<size;i++){
    //                printf("%d\n", newAray[i]);
    //         }

    // min and max print of an Array

    // int a[]={4,2,3,6,5};
    // int max=a[0];
    // int len=sizeof(a)/sizeof(a[0]);

    // for(int i=0;i<len;i++){
    //       if(max<a[i]){
    //         max=a[i];
    //     }
    // }

    // printf("%d",max);

    // Array short using for loop

    //     int arr[] = {5, 4, 3, 2, 1};
    //     int len = sizeof(arr) / sizeof(arr[0]);

    //     int shortArray[len];
    //     int newSize = 0;

    //     for (int i = 0; i < len; i++)
    //     {
    //         for (int j = i + 1; j < len; j++)
    //         {

    //             if (arr[i] > arr[j])
    //             {
    //                 int temp = arr[i];
    //                 arr[i] = arr[j];
    //                 arr[j] = temp;
    //             }
    //         }

    //        shortArray[newSize++]=arr[i];
    //     }
    // for(int i =0 ;i<newSize;i++){
    //     printf("%d",shortArray[i]);
    // }

    // array merge and after merge shorting

    // int a[]={1,2,3,4,5};
    // int se[]={6,7,8,9,1};
    // int len2 = sizeof(se) / sizeof(se[0]);
    // int len = sizeof(a) / sizeof(a[0]);
    // int mergeAray[len];
    // int size=0;

    // for(int i=0;i<len;i++){
    // mergeAray[size++]=a[i];

    // }
    // for(int j=0;j<len2;j++){
    // mergeAray[size++]=se[j];

    // }

    // for(int k=0;k<size;k++){
    // printf("%d",mergeAray[k]);

    // }

    // search an element of an array

    //  int a[]={1,2,3,4,5};
    //  int len=sizeof(a)/sizeof(a[0]);

    //  int b = 3;

    //  for(int i=0; i<len;i++){
    // if(a[i]==b){
    // printf("%d",i);
    // }
    //  }

    // itreate an Array

    // int a[] = {1, 2, 3, 4, 5};
    // int len = sizeof(a) / sizeof(a[0]);

    // for (int i = 0; i < len; i++)
    // {

    //     printf("%d", a[i]);
    // }

    // sum of an array

    // int a[]={1,2,3,4,5};

    // int len=sizeof(a)/sizeof(a[0]);

    // int sum=0;
    // for (int i=0;i<len;i++){

    //     sum=sum+a[i];
    // }

    //     printf("%d",sum);

    // make dublicate of an Array

    // int a[]={1,2,3,4,5};
    // int len=sizeof(a)/sizeof(a[0]);
    // int br[len];
    // int size=0;

    // for(int i=0;i<len;i++){
    // br[size++]=a[i];

    // }

    // for(int i=0;i<size;i++){

    // printf("%d",br[i]);

    // }

    // Number Is Positive Or Negative

    // int num = 23;

    //     //Conditions to check if the number is negative/positive or zero
    //     if (num > 0)
    //          printf("The number is positive");
    //     else if (num < 0)
    //         printf("The number is negative");
    //     else
    //         printf("Zero");

    // Find the Sum of First N Natural Numbers or Sum of N natural numbers

    //  int n;
    //     scanf("%d",&n);

    //     int sum = 0;

    //     for(int i=1;i<=n;i++)
    //         // is same as writing sum = sum + i
    //         sum += i;

    //     printf("Sum is %d",sum);

    //  Sum of Numbers in a Given Interval in c

    // int a = 2;
    // int b = 4;

    // int sum = 0;

    // for (int i = a; i <= b; i++)
    //     sum = sum + i;

    // printf("%d",sum);

    // Greatest of the Two Numbers or integers in C

    //  int num1, num2;
    //   num1=12,num2=13;

    //   if (num1 == num2)
    //     printf("both are equal");
    //   else if (num1 > num2)
    //     printf("%d is greater", num1);
    //   else
    //     printf("%d is greater", num2);

    // Check a Character is a Vowel or Consonant

    //  char c='F';

    // if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
    // c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    // {
    //     printf("%c is a vowel", c);  // condition true input is vowel
    // }
    // else
    // {
    //     printf("%c is a consonant", c);  // condition true input is consonant
    // }

    // check a Character Is An Alphabet Or Not

    // char ch='9';

    //     if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    //         printf("The inserted character %c is an Alphabet", ch);

    //     else
    //         printf("The entered character %c is not an Alphabet", ch);

    // alculating the length of the string without using strlen() function

    //  char str[100];
    //     int i,length=0;

    //      //Accepting input.
    //     printf("Enter a string: \n");
    //     scanf("%s",str);

    //      //Initializing for loop.
    //     for(i=0; str[i]!='\0'; i++)
    //     {
    //         length++; //Counting the length.
    //     }

    //     printf("\nLength of input string: %d",length);

    //  Count the Number of Vowels in a String

    //     char str[100];
    //     int i, vowels = 0;

    //     printf("Enter the string: ");

    //     scanf("%[^\n]s",&str);

    //     for(i = 0; str[i]; i++)
    //     {

    //         if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||
    //            str[i]=='o'|| str[i]=='u'||str[i]=='A'||
    //            str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
    //         {
    //             vowels++;
    //         }

    //   }

    //     printf("Total number of vowels: = %d\n",vowels);




    // Print Square Star Pattern

    // int i,j,l;    //declaring integers i,j for loops and l for number of rows
    // printf("Enter the number of rows/columns\n");  //Asking user for input
    // scanf("%d",&l);    //Taking the input for number of rows
    // for(int i=1;i<=l;i++)  //Outer loop for number of rows
    //    {
    //       for(int j=1;j<=l;j++)   //Inner loop for number of columns in each row
    //          {
    //             printf("*");     //Printing '*' in each column of a row.
    //          }
    //       printf("\n");    //Printing a new line after each row has been printed.
    //    }


    // Printing Right Triangle Star Pattern

        //    int i, j,l;

        // printf("Enter the number of rows: ");
        // scanf("%d", &l);
        // for (i = 1; i <= l; i++)
        // {
        //     for (j = 1; j <= i; j++)
        //     {
        //         printf("* ");
        //     }
        //     printf("\n");
        // }




    //  Printing left  Triangle Star Pattern

        // int n, i, j,k;
        // printf("Enter the number of rows: ");
        // scanf("%d", &n);
        // for (i = 1; i <= n; i++)
        // {
        //     for (k = 1; k <= n - i; k++)
        //     {
        //         printf(" ");
        //     }
        //     for (j = 1; j <= i; j++)
        //     {
        //         printf("*");
        //     }
        //     printf("\n");
        // }




// Rectangle Star Pattern


    // int rows, cols, i, j;
    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);
    // printf("Enter the number of columns: ");
    // scanf("%d", &cols);
    // for (i = 1; i <= rows; i++)
    // {
    //     for (j = 1; j <= cols; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }










}