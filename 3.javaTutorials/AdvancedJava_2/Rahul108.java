@FunctionalInterface
interface Phone {
    public void music();
    // public void play();
}

class Newphone implements Phone {
    public void music() {
        System.out.println("singing");
    }

    @Deprecated
    public int sum(int a, int b) {
        return a + b;
    }
}

public class Rahul108 {
    @SuppressWarnings("deprecation")
    public static void main(String[] args) {
        Newphone a1 = new Newphone();
        a1.music();
        a1.sum(3, 6);

    }
}
