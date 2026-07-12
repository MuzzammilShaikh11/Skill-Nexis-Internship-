/* 
Create a program that swaps two numbers without using a third variable
  */
import java.util.Scanner;

public class Question_4 {
    public static void main(String[] args) {

        // Create Scanner object to take user input
        Scanner sc = new Scanner(System.in);

        // Input first number
        System.out.print("Enter first number: ");
        int a = sc.nextInt();

        // Input second number
        System.out.print("Enter second number: ");
        int b = sc.nextInt();

        // Swap the numbers without using a third variable
        a = a + b;
        b = a - b;
        a = a - b;

        // Display the swapped values
        System.out.println("After swapping:");
        System.out.println("First number = " + a);
        System.out.println("Second number = " + b);

        // Close the Scanner
        sc.close();
    }
}
