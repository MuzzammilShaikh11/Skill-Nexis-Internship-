class Vehicle {

    void start() {
        System.out.println("Vehicle is starting...");
    }
}

class Car extends Vehicle {

    @Override
    void start() {
        System.out.println("Car starts with a push-button ignition.");
    }
}

class Bike extends Vehicle {

    @Override
    void start() {
        System.out.println("Bike starts with a self-start or kick-start.");
    }
}

public class Question_2 {

    public static void main(String[] args) {

        Vehicle v = new Vehicle();
        Vehicle c = new Car();
        Vehicle b = new Bike();

        System.out.println("Base Class:");
        v.start();

        System.out.println("\nSubclass - Car:");
        c.start();

        System.out.println("\nSubclass - Bike:");
        b.start();
    }
}
