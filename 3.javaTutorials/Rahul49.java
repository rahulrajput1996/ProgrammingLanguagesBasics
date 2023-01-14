class Phone {
    public void ring() {
        System.out.println("i am ringing");
    }

    public void music() {
        System.out.println("music play in class 1");
    }
}

class smartphone extends Phone {
    @Override
    public void music() {
        System.out.println("music play in class 2");
    }

    public void vibrate() {
        System.out.println("i am vibrating");
    }
}

public class Rahul49 {
    public static void main(String[] args) {
        Phone nokia = new smartphone();
        nokia.ring();
        nokia.music();
        // nokia.vibrate();error here
        // smartphone nokia = new Phone(); error here

    }
}
