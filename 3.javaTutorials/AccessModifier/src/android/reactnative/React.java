package android.reactnative;

import android.flutter.Dart;

class Mynative extends Dart {
    void meth3() {
        System.out.println("i am mynative");
        System.out.println(a1);
        System.out.println(a2);
        // System.out.println(a3); error due to default modifier
        // System.out.println(a4); error due to private modifier
    }
}

public class React {
    public static void main(String[] args) {
        System.out.println("i am react native");
        // world here
        Dart m1 = new Dart();
        System.out.println(m1.a1);
        // System.out.println(m1.a2); //error
        // System.out.println(m1.a3); //error
        // System.out.println(m1.a4); //error

        // subclass
        Mynative m2 = new Mynative();
        m2.meth3();
    }
}
