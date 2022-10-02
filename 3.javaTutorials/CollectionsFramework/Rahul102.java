import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.HashSet;

public class Rahul102 {
    public static void main(String[] args) {
        // Question1
        ArrayList<String> al1 = new ArrayList<>();
        al1.add("mohan");
        al1.add("Sohan");
        al1.add("Rohan");
        al1.add("Wohan");
        al1.add("Pohan");
        for (String elemeString : al1) {
            System.out.println(elemeString);
        }

        // question 5
        HashSet<Integer> hs1 = new HashSet<>();
        hs1.add(5);
        hs1.add(15);
        hs1.add(5);
        hs1.add(25);
        for (Integer elemeInteger : hs1) {
            System.out.println(elemeInteger);
        }

        // question 2
        LocalDateTime lt1 = LocalDateTime.now();
        DateTimeFormatter dtf1 = DateTimeFormatter.ofPattern("HH:mm:ss");
        String mytime = lt1.format(dtf1);
        System.out.println(mytime);
    }
}
