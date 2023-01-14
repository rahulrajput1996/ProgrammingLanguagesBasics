import java.util.*;

public class Lecture34_hashset {
    public static void main(String[] args) {
        HashSet<Integer> h1 = new HashSet<>();
        h1.add(10);
        h1.add(20);
        h1.add(30);
        h1.add(40);
        h1.add(10);
        System.out.println(h1);
        h1.remove(30);
        System.out.println(h1);
        System.out.println(h1.contains(10));
        // Iterator it = h1.iterator();
        // for (int i = 0; i < h1.size(); i++) {
        // if (it.hasNext()) {
        // System.out.println(it.next());
        // }
        // }

        for (Integer eInteger : h1) {
            System.out.println(eInteger);
        }
    }
}
