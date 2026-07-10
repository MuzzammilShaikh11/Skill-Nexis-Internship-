/*
Program to find the sum of all elements in an array.
*/

import java.util.Scanner;

public class Question_2 {
    public static void main(String[] args) {

        System.out.println("---Sum Of Array Elements---");

        // Initialize scanner
        Scanner sc = new Scanner(System.in);

        // Declare array size
        int size;

        // Input array size
        System.out.println("Enter array size: ");
        size = sc.nextInt();

        // Array to store elements
        int[] arr = new int[size];

        // Variable to store sum
        int sum = 0;

        // Loop to input array elements and calculate sum
        for (int i = 0; i < size; i++) {
            System.out.println("Enter array element: ");
            arr[i] = sc.nextInt();
            sum += arr[i];
        }

        // Display the sum
        System.out.println("Sum of array elements is " + sum);

        // Close scanner
        sc.close();
    }
}