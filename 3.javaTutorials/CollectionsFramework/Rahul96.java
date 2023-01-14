import java.util.*;

public class Rahul96 {
    public static void main(String[] args) {
        System.out.println(System.currentTimeMillis());

        long seconds = System.currentTimeMillis() / 1000;
        System.out.println("the seconds are : " + seconds);

        long minutes = System.currentTimeMillis() / 1000 / 60;
        System.out.println("the minutes are : " + minutes);

        long hours = System.currentTimeMillis() / 1000 / 60 / 60;
        System.out.println("the hours are : " + hours);

        long days = System.currentTimeMillis() / 1000 / 60 / 60 / 24;
        System.out.println("the days are : " + days);

        long years = System.currentTimeMillis() / 1000 / 60 / 60 / 24 / 365;
        System.out.println("the years are : " + years);

        System.out.println(Long.MAX_VALUE / 1000 / 60 / 60 / 24 / 365);
        System.out.println(Long.SIZE);
        System.out.println(Long.BYTES);
        System.out.println(Long.MIN_VALUE);

        System.out.println("lecture bo. 97");
        Date a1 = new Date();
        System.out.println(a1);
        System.out.println(a1.getTime());

        // Below methods are deprecated
        // System.out.println(a1.getDate());
        // System.out.println(a1.getYear());
        // System.out.println(a1.getMonth());
        // final int ans = 4;
    }
}
