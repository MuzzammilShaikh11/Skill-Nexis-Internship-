/*
Write a program to reverse a string.
*/

import java.util.Scanner;

public class Question_3 {
    public static void main(String[] args) {
        System.out.println("---String Reverse Program---");

        Scanner sc = new Scanner(System.in);

        // Input string
        System.out.print("Enter the string: ");
        String str = sc.nextLine();

        // Convert string to character array
        char[] chars = str.toCharArray();

        // Reverse the character array
        for (int i = 0; i < chars.length / 2; i++) {
            char temp = chars[i];
            chars[i] = chars[chars.length - 1 - i];
            chars[chars.length - 1 - i] = temp;
        }

        // Print reversed string
        System.out.println("The reversed string is: " + new String(chars));

        //Close the scanner 
        sc.close();
    }
}