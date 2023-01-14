class Mybox1 extends Thread {
    @Override
    public void run() {
        while (true) {
            System.out.println("i am here");
        }
    }
}

class Mybox2 extends Thread {
    @Override
    public void run() {
        while (true) {
            System.out.println("i am there");
        }
    }
}

public class Rahul70 {
    public static void main(String[] args) {
        Mybox1 a1 = new Mybox1();
        Mybox2 a2 = new Mybox2();
        a1.start();
        a2.start();
    }
}