interface Bicycle {
    int race = 10;

    public void brake(int decrement);

    public void accelerate(int increment);
}

interface Motor {
    int wheel = 19;

    public void body();
}

class Bike {
    int seats = 1;

    public void display() {
        System.out.println("i am display");
    }
}

class Nova extends Bike implements Bicycle, Motor {
    int speed = 20;

    public void brake(int a) {
        System.out.println(speed - a);
    }

    public void accelerate(int a) {
        System.out.println(speed + a);
    }

    public void body() {
        System.out.println("i am large");
    }

    public void printarea() {
        System.out.println("print everything");
    }
}

public class Rahul55 {
    public static void main(String[] args) {
        // Bicycle a1 = new Bicycle(); will give error
        Nova a1 = new Nova();
        a1.brake(3);
        a1.accelerate(7);
        a1.printarea();
        a1.body();
        a1.display();
        System.out.println(a1.speed);
        System.out.println(a1.seats);
        System.out.println(a1.race);
        System.out.println(a1.wheel);
        // a1.race = 20; will give error as it is final and we can not change it

        Motor a2 = new Nova();
        // a2.brake(4);
        // a2.accelerate(6);
        a2.body();
        // a2.printarea(); //next 2 method also will give error due to dynamic method
        // dispatch
        // System.out.println(a2.speed);
        // System.out.println(a2.race);
        System.out.println(a2.wheel);

    }
}
