class Basenew {
    int a;

    public String printarea() {
        return "this is myself";
    }

    public Basenew(int x) {
        this.a = x;
        System.out.println(this.printarea());
    }

    public Basenew() {
        System.out.println("i am here");
    }
}

class Childnew extends Basenew {
    int b;

    public Childnew(int y) {
        super(y);
        System.out.println(super.a);
        System.out.println(super.printarea());
    }
}

public class Rahul47 {
    public static void main(String[] args) {
        Basenew b1 = new Basenew(10);
        Childnew c1 = new Childnew(20);
    }
}
