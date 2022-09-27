interface Gps {
    int a = 10;

    void locationtrack();

    private void photoclick() {
        System.out.println("i am clicking photo");
    }

    static void dance() {
        System.out.println("i am dancing");
    }

    default void sendimage() {
        photoclick();
        dance();
        System.out.println("i am sending image");
    }

}

class Mobile implements Gps {
    int b = 20;

    public void locationtrack() {
        System.out.println("i am here");
    }

    // public void sendimage() {
    // System.out.println("i am not sending image");
    // }
}

public class Rahul57 {
    public static void main(String[] args) {
        Mobile m1 = new Mobile();
        m1.locationtrack();
        m1.sendimage();
        // m1.dance(); error we can access it
        // m1.photoclick(); error due to private

        Gps g2 = new Mobile();
        // g2.dance(); can not access it
        g2.locationtrack();
        // g2.photoclick(); can not access due to private
        g2.sendimage();

        Gps.dance();

    }
}
