package android.flutter;

public class Dart {
    public int a1 = 11;
    protected int a2 = 22;
    int a3 = 33;
    private int a4 = 44;

    // class access here
    public void meth2() {
        System.out.println(a1);
        System.out.println(a2);
        System.out.println(a3);
        System.out.println(a4);
    }

    public static void main(String[] args) {
        System.out.println("i am dart");

        //same package
        Music m1 = new Music();
        System.out.println(m1.a1);
        System.out.println(m1.a2);
        System.out.println(m1.a3);
        // System.out.println(m1.a4); //error due to private modifier
        m1.meth1();
    }
}
