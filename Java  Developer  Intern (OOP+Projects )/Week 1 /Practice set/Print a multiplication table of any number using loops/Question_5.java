/*
Print the multiplication table of any number using loops.
*/

import java.util.Scanner;

public class Question_5 {
    public static void main(String[] args) {

        // Create Scanner object
        Scanner sc = new Scanner(System.in);

        // Input the number
        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        // Print multiplication table
        System.out.println("Multiplication Table of " + num);

        for (int i = 1; i <= 10; i++) {
            System.out.println(num + " x " + i + " = " + (num * i));
        }

        // Close the Scanner
        sc.close();
    }
}
