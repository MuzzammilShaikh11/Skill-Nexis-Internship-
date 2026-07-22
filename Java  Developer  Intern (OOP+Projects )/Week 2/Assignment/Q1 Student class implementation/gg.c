import java.util.Scanner;

class Student {
    int prn;
    String name;
    float cgpa;
    String branch;

    void inputStudent(Scanner sc) {
        System.out.print("Enter PRN: ");
        prn = sc.nextInt();
        sc.nextLine();

        System.out.print("Enter Name: ");
        name = sc.nextLine();

        System.out.print("Enter CGPA: ");
        cgpa = sc.nextFloat();
        sc.nextLine();

        System.out.print("Enter Branch: ");
        branch = sc.nextLine();
    }

    void displayStudent() {
        System.out.println("\n----- Student Information -----");
        System.out.println("PRN    : " + prn);
        System.out.println("Name   : " + name);
        System.out.println("CGPA   : " + cgpa);
        System.out.println("Branch : " + branch);
    }
}   // <-- Close Student class here

public class Question_1 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Student student = new Student();

        int choice;

        do {
            System.out.println("\n===== Student Class Implementation =====");
            System.out.println("1. Input Student");
            System.out.println("2. Display Student");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");

            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    student.inputStudent(sc);
                    break;

                case 2:
                    student.displayStudent();
                    break;

                case 3:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }

        } while (choice != 3);

        sc.close();
    }
}