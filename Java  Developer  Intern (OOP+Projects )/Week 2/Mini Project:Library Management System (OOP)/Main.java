import java.util.Scanner;

class Library {
    protected String libraryName = "Central Library";

    public void displayLibrary() {
        System.out.println("Library : " + libraryName);
    }
}

class Book extends Library {
    private int bookId;
    private String title;
    private boolean available;

    public Book(int id, String title) {
        this.bookId = id;
        this.title = title;
        this.available = true;
    }

    public void borrowBook() {
        if (available) {
            available = false;
            System.out.println("Book Borrowed Successfully.");
        } else {
            System.out.println("Book Not Available.");
        }
    }

    public void returnBook() {
        if (!available) {
            available = true;
            System.out.println("Book Returned Successfully.");
        } else {
            System.out.println("Book is already in the Library.");
        }
    }

    public void displayBook() {
        displayLibrary();
        System.out.println("Book ID : " + bookId);
        System.out.println("Title   : " + title);
        System.out.println("Status  : " + (available ? "Available" : "Borrowed"));
    }
}

class User extends Library {
    private int userId;
    private String name;

    public User(int id, String name) {
        this.userId = id;
        this.name = name;
    }

    public void displayUser() {
        displayLibrary();
        System.out.println("User ID : " + userId);
        System.out.println("Name    : " + name);
    }
}

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Book book = null;
        User user = null;

        int choice;

        do {
            System.out.println("\n===== Library Management System =====");
            System.out.println("1. Add Book");
            System.out.println("2. Add User");
            System.out.println("3. Display Book");
            System.out.println("4. Display User");
            System.out.println("5. Borrow Book");
            System.out.println("6. Return Book");
            System.out.println("7. Exit");
            System.out.print("Enter Choice: ");

            choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {

                case 1:
                    System.out.print("Enter Book ID: ");
                    int bid = sc.nextInt();
                    sc.nextLine();

                    System.out.print("Enter Book Title: ");
                    String title = sc.nextLine();

                    book = new Book(bid, title);
                    System.out.println("Book Added Successfully.");
                    break;

                case 2:
                    System.out.print("Enter User ID: ");
                    int uid = sc.nextInt();
                    sc.nextLine();

                    System.out.print("Enter User Name: ");
                    String uname = sc.nextLine();

                    user = new User(uid, uname);
                    System.out.println("User Added Successfully.");
                    break;

                case 3:
                    if (book != null)
                        book.displayBook();
                    else
                        System.out.println("No Book Found.");
                    break;

                case 4:
                    if (user != null)
                        user.displayUser();
                    else
                        System.out.println("No User Found.");
                    break;

                case 5:
                    if (book != null)
                        book.borrowBook();
                    else
                        System.out.println("No Book Found.");
                    break;

                case 6:
                    if (book != null)
                        book.returnBook();
                    else
                        System.out.println("No Book Found.");
                    break;

                case 7:
                    System.out.println("Thank You!");
                    break;

                default:
                    System.out.println("Invalid Choice!");
            }

        } while (choice != 7);

        sc.close();
    }
}
