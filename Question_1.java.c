/*
Basic Calculator:
I have designed a basic menu-driven calculator to perform the four
fundamental mathematical operations when two numbers are given as input.
*/

import java.util.Scanner;

public class Question_1 {
    public static void main(String[] args) {

        // Declare two variables
        int num1, num2;

        // Create Scanner object for input
        Scanner sc = new Scanner(System.in);

        System.out.println("--- Basic Calculator ---");

        // Declare a choice variable
        int choice = 1;

        // Loop until the user chooses Exit
        while (choice != 5) {

            // Display the menu
            System.out.println("=======");
            System.out.println("Menu Bar");
            System.out.println("=======");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exit");

            // Input the two operands
            System.out.println("Enter the first number:");
            num1 = sc.nextInt();

            System.out.println("Enter the second number:");
            num2 = sc.nextInt();

            // Input the user's choice
            System.out.println("Enter choice:");
            choice = sc.nextInt();

            // Perform the selected operation
            switch (choice) {

                case 1: {
                    // Addition
                    System.out.println("Addition of " + num1 + " and " + num2 + " = " + (num1 + num2));
                    break;
                }

                case 2: {
                    // Subtraction
                    System.out.println("Subtraction of " + num1 + " and " + num2 + " = " + (num1 - num2));
                    break;
                }

                case 3: {
                    // Multiplication
                    System.out.println("Product of " + num1 + " and " + num2 + " = " + (num1 * num2));
                    break;
                }

                case 4: {
                    // Division
                    if (num2 == 0)
                        System.out.println("Division by zero is undefined.");
                    else
                        System.out.println("Quotient of " + num1 + " and " + num2 + " = " + (num1 * 1.0 / num2));
                    break;
                }

                case 5: {
                    System.out.println("Exiting...");
                    break;
                }

                default:
                    System.out.println("Enter a valid choice from 1 to 5.");
            }
        }

        // Close the Scanner
        sc.close();
    }
}