/*
Grade Evaluation System :
This program takes the student's marks (out of 100) as input and
prints the respective grade as output.

The grading convention used is:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
*/

import java.util.Scanner;

public class Question_2 {

    public static void main(String[] args) {

        System.out.println("--- Grade Evaluation Program ---");

        // Initialization of Scanner
        Scanner sc = new Scanner(System.in);

        // Variable to store marks
        int marks;

        // Input marks
        System.out.print("Enter the marks of the student (Out of 100): ");
        marks = sc.nextInt();

        // Assigning grades
        if (marks >= 90 && marks <= 100)
            System.out.println("The grade assigned = Grade A");
        else if (marks >= 80 && marks <= 89)
            System.out.println("The grade assigned = Grade B");
        else if (marks >= 70 && marks <= 79)
            System.out.println("The grade assigned = Grade C");
        else if (marks >= 60 && marks <= 69)
            System.out.println("The grade assigned = Grade D");
        else if (marks >= 0 && marks <= 59)
            System.out.println("The grade assigned = Grade F");
        else
            System.out.println("Invalid score.\nEnter the score between 0 and 100.");

        // Close the Scanner
        sc.close();
    }
}
