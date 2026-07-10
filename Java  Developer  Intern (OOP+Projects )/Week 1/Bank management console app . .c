/*
Bank Management Console App:
This menu-driven program simulates basic bank operations.
It helps users check their balance, deposit money, and withdraw money.
*/

import java.util.Scanner;

public class Question_3 {
    public static void main(String[] args) {
        System.out.println("---Bank Management Console App---");

        // Variables to store balance, deposit and withdrawal amounts
        int balance = 0, deposit, withdraw;

        // Initialize Scanner
        Scanner sc = new Scanner(System.in);

        // Declare choice
        int choice = 1;

        // Loop until the user chooses to exit
        while (choice != 4) {

            // Menu
            System.out.println("=======");
            System.out.println("MenuBar");
            System.out.println("=======");
            System.out.println("1. Check Balance");
            System.out.println("2. Withdraw");
            System.out.println("3. Deposit");
            System.out.println("4. Exit");

            // Take choice as input
            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            // Switch-case
            switch (choice) {

                case 1: {
                    // Check balance
                    System.out.println("The balance in your account is " + balance + " rupees.");
                    break;
                }

                case 2: {
                    // Withdraw amount
                    if (balance != 0) {
                        System.out.print("Enter the amount to withdraw: ");
                        withdraw = sc.nextInt();

                        if (withdraw <= 0) {
                            System.out.println("Please enter a valid amount.");
                        } else if (withdraw <= balance) {
                            balance = balance - withdraw;
                            System.out.println("Amount of " + withdraw + " rupees has been withdrawn.");
                        } else {
                            System.out.println("Balance in the account is not sufficient.");
                        }
                    } else {
                        System.out.println("Your account has zero balance.");
                    }
                    break;
                }

                case 3: {
                    // Deposit amount
                    System.out.print("Enter the amount to deposit: ");
                    deposit = sc.nextInt();

                    if (deposit <= 0) {
                        System.out.println("Please enter a valid amount.");
                    } else {
                        balance = balance + deposit;
                        System.out.println("Amount of " + deposit + " rupees has been deposited.");
                    }
                    break;
                }

                case 4: {
                    // Exit
                    System.out.println("Exiting...");
                    break;
                }

                default:
                    System.out.println("Invalid choice.");
                    System.out.println("Enter a choice between 1 and 4.");
            }
        }

        // Close Scanner
        sc.close();
    }
}