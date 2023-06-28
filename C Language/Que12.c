/*Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour.
  Print the ID and salary (with two decimal places) of the employee for a particular month. */

  #include <stdio.h>

  void main(){
    long int id,amount,hour,salaryhour,salary;

    printf("Input employee Id : ");
    scanf("%d",&id);

    printf("Input the working Hours : ");
    scanf("%d",&hour);

    printf("Salary Amount per Hour : ");
    scanf("%d",&salaryhour);

    salary=salaryhour*hour;

    printf("\nEmployee ID : %d",id);
    printf("\nSalary : %d",salary);
  }