import java.util.Scanner;

public class Student {
    String name;
    int rollNo;
    int[] marks = new int[5];

    Student() {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter student name: ");
        name = sc.nextLine();

        System.out.print("Enter student roll no: ");
        rollNo = sc.nextInt();

        System.out.println("Enter marks:");

        for (int i = 0; i < 5; i++) {
            System.out.print("Enter marks in subject " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
        }
    }

    void display() {
        System.out.println("\n----- Student Details -----");
        System.out.println("Name: " + name);
        System.out.println("Roll No: " + rollNo);

        int total = 0;
        System.out.println("Marks:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Subject " + (i + 1) + ": " + marks[i]);
            total += marks[i];
        }

        double average = total / 5.0;
        System.out.println("Total Marks: " + total);
        System.out.println("Average Marks: " + average);
    }
}
public class Question_1 {
    public static void main(String[] args) {
        Student s = new Student();
        s.display();
    }
}