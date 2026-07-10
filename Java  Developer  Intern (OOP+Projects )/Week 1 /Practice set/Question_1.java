/*
Program to check whether a number is even or odd
*/

import java.util.Scanner;

public class Question_1 {
    public static void main(String[] args) {
        // Variable to store a number
        int num;

        // Initialize scanner
        Scanner sc = new Scanner(System.in);

        System.out.println("---Even And Odd Checker---");

        // Input the number
        System.out.println("Enter the number :  ");
        num = sc.nextInt();

        // Check whether the number is even or odd
        if (num % 2 == 0)
            System.out.println("The given number is even");
        else
            System.out.println("The given number is odd");

        // Close scanner
        sc.close();
    }
}
