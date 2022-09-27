abstract class Pen {
    abstract public void refill();

    abstract public void write();

    public void read() {
        System.out.println("i am reading");
    }
}

class Fountainpen extends Pen {
    public void refill() {
        System.out.println("i am refilling");
    }

    public void write() {
        System.out.println("i am writing");
    }

    public void changenib() {
        System.out.println("plsease change pen nib");
    }
}

abstract class Telephone {
    int a = 10;

    public abstract void ring();

    public abstract void lift();

    public abstract void disconnect();

    public void call() {
        System.out.println("i am calling");
    }
}

class SmartTelephone extends Telephone {
    int b = 20;

    public void ring() {
        System.out.println("i am ringing");
    }

    public void lift() {
        System.out.println("i am lifting");
    }

    public void disconnect() {
        System.out.println("i am disconnecting");
    }
}

class Monkey {
    public void jump() {
        System.out.println(" monkey jump");
    }

    public void bite() {
        System.out.println(" monkey bite");
    }
}

interface BasicAnimal {
    void sleep();

    void eat();
}

class Human extends Monkey implements BasicAnimal {
    public void sleep() {
        System.out.println("i am sleeping");
    }

    public void eat() {
        System.out.println("i am eating");
    }
}

interface tvremote {
    public void pressbutton();

    default void batteryremove() {
        System.out.println("remove the battery");
    }
}

interface smarttvremote extends tvremote {
    public void colorset();
}

class Tv implements tvremote {
    public void pressbutton() {
        System.out.println("press switch on/off");
    }
}

public class Rahul60 {
    public static void main(String[] args) {
        // question 1 and 2
        Fountainpen a1 = new Fountainpen();
        a1.refill();
        a1.write();
        a1.changenib();
        a1.read();

        // question 4
        SmartTelephone s1 = new SmartTelephone();
        s1.call();
        s1.disconnect();
        s1.lift();
        s1.ring();
        System.out.println(s1.a);
        System.out.println(s1.b);
        s1.a = 26;
        s1.b = 35;
        System.out.println(s1.a);
        System.out.println(s1.b);

        // question 3 and 5
        Human h1 = new Human();
        h1.bite();
        h1.eat();
        h1.jump();
        h1.sleep();

        // question 6 and 7
        Tv t1 = new Tv();
        t1.pressbutton();
        t1.batteryremove();
    }
}
