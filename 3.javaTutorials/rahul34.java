public class rahul34 {
    public static int iterative(int x) {
        int myfact = 1;

        for (int i = x; i >= 1; i--) {
            myfact = myfact * i;
        }
        return myfact;
    }

    public static int recursive(int y) {
        int myfact;
        if (y == 0 || y == 1) {
            return 1;
        } else {
            myfact = y * recursive(y - 1);
        }
        return myfact;
    }

    public static void main(String[] args) {
        int a = 7;
        int myfact1 = recursive(a);
        int myfact2 = iterative(a);
        System.out.println(myfact1);
        System.out.println(myfact2);

    }
}
