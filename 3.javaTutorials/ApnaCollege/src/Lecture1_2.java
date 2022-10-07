import java.util.*;

public class Lecture1_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double radius = sc.nextDouble();
        final double pi = 22.0 / 7.0;
        System.out.println(pi);
        Double area1 = pi * radius * radius;
        Double area2 = Math.PI * radius * radius;

        System.out.println(area1);
        System.out.println(area2);
        sc.close();

        boolean root = false;
        if (root)
            System.out.println("i am good");
        System.out.println("i m bad");

    }
}