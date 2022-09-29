class Mypen1 implements Runnable {
    public void run() {
        while (true) {
            System.out.println("i am pen1");
        }
    }
}

class Mypen2 implements Runnable {
    public void run() {
        while (true) {
            System.out.println("i am pen2");
        }
    }
}

public class Rahul71 {
    public static void main(String[] args) {
        Mypen1 bullet1 = new Mypen1();
        Thread gun1 = new Thread(bullet1);
        Mypen2 bullet2 = new Mypen2();
        Thread gun2 = new Thread(bullet2);
        gun1.start();
        gun2.start();
    }
}
