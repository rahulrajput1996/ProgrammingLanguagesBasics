class Mybed1 extends Thread {

    Mybed1(String myname) {
        super(myname);
    }

    public void run() {
        int i = 1;
        while (i < 11) {

            System.out.println("i m on bed1");
            i++;
        }
    }
}

class Mybed2 extends Thread {

    Mybed2(String myname) {
        super(myname);
    }

    public void run() {
        while (true) {

            System.out.println("i m on bed2");
        }
    }
}

class Mypillow1 implements Runnable {

    public void run() {
        while (true) {
            System.out.println("i have pillow1");
        }
    }
}

class Mypillow2 implements Runnable {

    public void run() {
        while (true) {
            System.out.println("i have pillow2");
        }
    }
}

public class Rahul73 {
    public static void main(String[] args) {
        Mybed1 m1 = new Mybed1("rahul kumar singh");
        Mybed2 m2 = new Mybed2("ashish kumar singh");
        m1.start();

        try {
            Thread.sleep(10000);

        } catch (Exception e) {
            System.out.println(e);

        }

        try {
            m1.join();

        } catch (Exception e) {

            System.out.println(e);
        }

        m2.start();

        // m1.setPriority(Thread.MAX_PRIORITY);
        // m2.setPriority(Thread.MIN_PRIORITY);
        // m1.setPriority(1);
        // m2.setPriority(10);

        System.out.println(m1.getId());
        System.out.println(m1.getName());
        System.out.println(m1.getPriority());
        System.out.println(m2.getId());
        System.out.println(m2.getName());
        System.out.println(m2.getPriority());

        // ---------constructor------------
        // Mypillow1 bullet1 = new Mypillow1();
        // Thread gun1 = new Thread(bullet1, "myfoot1");
        // Mypillow2 bullet2 = new Mypillow2();
        // Thread gun2 = new Thread(bullet2, "myfoot2");
        // gun1.start();
        // gun2.start();
        // System.out.println(gun1.getId());
        // System.out.println(gun1.getName());
        // System.out.println(gun1.getPriority());
        // System.out.println(gun2.getId());
        // System.out.println(gun2.getName());
        // System.out.println(gun2.getPriority());
    }
}