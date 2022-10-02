import java.util.HashSet;

public class Rahul95 {
    public static void main(String[] args) {
        HashSet<Integer> HS1 = new HashSet<>();
        HS1.add(10);
        HS1.add(20);
        HS1.add(20);
        HS1.add(30);
        HS1.add(44);
        System.out.println(HS1);
        System.out.println(HS1.size());
        System.out.println(HS1.clone());

    }
}
