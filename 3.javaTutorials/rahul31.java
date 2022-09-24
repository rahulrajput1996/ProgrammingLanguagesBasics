public class rahul31 {

    public static void myfun() {
        System.out.println("i am rahul");

    }

    public static void myfun(int x) {
        System.out.println("i am rahul" + x);

    }

    public static int myfun(int x, int y) {
        System.out.println("i am rahul" + x);
        return x - y;
    }

    // public static float myfun(int x, int y) {
    // System.out.println("i am rahul" + x);
    // }

    public static int mysum(int x, int y) {
        return x + y;
    }

    public int mysum2(int x, int y) {
        return x + y;
    }

    public static void main(String[] args) {

        myfun();
        myfun(10);
        myfun(20, 30);

        int a = 5;
        int b = 7;
        int d = mysum(a, b);
        System.out.println(d);

        rahul31 harry = new rahul31();
        int sum = harry.mysum2(a, b);
        System.out.println(sum);
    }
}
