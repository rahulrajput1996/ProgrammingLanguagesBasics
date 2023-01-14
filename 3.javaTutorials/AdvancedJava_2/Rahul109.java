interface Mobile {
    public void music();

    public void call();
}

@FunctionalInterface
interface Calc {
    public int sum(int a, int b);
}

public class Rahul109 {
    public static void main(String[] args) {
        // anonymous classes
        Mobile m1 = new Mobile() {
            @Override
            public void music() {
                System.out.println("singing");
            }

            @Override
            public void call() {
                System.out.println("calling");
            }
        };
        m1.music();
        m1.call();

        // lambda Expression
        Calc c1 = (a, b) -> {
            int ans = a + b;
            System.out.println(ans);
            return ans;
        };
        int myans = c1.sum(6, 7);
        System.out.println(myans);
    }
}
