class Food extends Thread {
    public void run() {
        // while (true) {
        // System.out.println(" foodie ");
        // }
    }
}

class Shop extends Thread {
    public void run() {
        // while (true) {
        // System.out.println(" Shopie ");
        // }
    }
}

public class Rahul76 {
    public static void main(String[] args) {
        Food f = new Food();
        Shop s = new Shop();
        System.out.println(Thread.currentThread().getState());
        f.start();
        System.out.println(s.getState());
        s.start();
        System.out.println(s.getState());
        System.out.println(Thread.currentThread().getState());

    }
}