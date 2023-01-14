package android.flutter;

class Music {
    public int a1 = 10;
    protected int a2 = 20;
    int a3 = 30;
    private int a4 = 40;
    
    // same class 
    public void meth1() {
        System.out.println(a1);
        System.out.println(a2);
        System.out.println(a3);
        System.out.println(a4);
    }
}

public class Flutter {
    public static void main(String[] args) {
        System.out.println("i am flutter");

        //same package 
        Music m1 = new Music();
        System.out.println(m1.a1);
        System.out.println(m1.a2);
        System.out.println(m1.a3);
        // System.out.println(m1.a4);
        m1.meth1();
    }
}
