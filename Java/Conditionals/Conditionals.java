package Conditionals;

import java.util.Scanner;

public class Conditionals {
    public static void main(String[] args) {

        // if statement
        System.out.println("--- if statement ---");
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your Number: ");
        int number = sc.nextInt();
        if (number%2 == 0) {
            System.out.println("The number is even.");
        } 
        if (number%2 != 0) {
            System.out.println("The number is odd.");
        }

        // if else statement
        System.out.println("-----------------------------");
        System.out.println("--- else if statement ---");
        System.out.println("1. Find the largest of three numbers:");
        
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.print("Enter third number: ");
        int num3 = sc.nextInt();
        if (num1 > num2 && num1 > num3) {
            System.out.println("The largest number is: " + num1);
        } else if (num2 > num1 && num2 > num3) {
            System.out.println("The largest number is: " + num2);
        } else {
            System.out.println("The largest number is: " + num3);
        }

        System.out.println("\n");
        System.out.println("2. check if year is leap year or not:");
        System.out.print("Enter a year: ");
        int year = sc.nextInt();
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            System.out.println(year + " is a leap year.");
        } else {
            System.out.println(year + " is not a leap year.");
        }

        // nested if else statement
        System.out.println("-----------------------------");
        System.out.println("--- nested if else statement ---");

        System.out.print("Enter first number: ");
        int n1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int n2 = sc.nextInt();
        System.out.print("Enter third number: ");
        int n3 = sc.nextInt();

        if(n1 >= n2) {
            if(n1 >= n3) {
                System.out.println("The largest number is: " + n1);
            } else {
                System.out.println("The largest number is: " + n3);
            }
        } else {
            if(n2 >= n3) {
                System.out.println("The largest number is: " + n2);
            } else {
                System.out.println("The largest number is: " + n3);
            }
        }
        // Ternary operator
        System.out.println("-----------------------------");
        System.out.println("--- Ternary Operator ---");
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        System.out.println((num % 2 == 0) ? "Even" : "Odd");

        // switch statement
        System.out.println("-----------------------------");
        System.out.println("--- switch statement ---");
        System.out.print("Enter a day of the week (1-7): ");
        int day = sc.nextInt();
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid day number. Please enter a number between 1 and 7.");
        }

        
    }
}