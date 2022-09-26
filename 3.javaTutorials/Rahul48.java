class Tango {
    int a;

    public void meth1(int a) {
        System.out.println("i am method 1 of class tango");
    }
}

class Charlie extends Tango {
    int b;

    @Override
    public void meth1(int b) {
        System.out.println("i am method 1 of class child");
    }
}

public class Rahul48 {
    public static void main(String[] args) {
        Tango a1 = new Tango();
        Charlie c1 = new Charlie();
        c1.meth1(20);
    }
}
