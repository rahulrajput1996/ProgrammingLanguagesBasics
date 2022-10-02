import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;

public class Rahul100_101 {
    public static void main(String[] args) {
        LocalDate d1 = LocalDate.now();
        System.out.println(d1);

        LocalTime d2 = LocalTime.now();
        System.out.println(d2);

        LocalDateTime d3 = LocalDateTime.now();
        System.out.println(d3);

        DateTimeFormatter dtf1 = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        String mydate1 = d3.format(dtf1);
        System.out.println(mydate1);
        DateTimeFormatter dtf2 = DateTimeFormatter.ofPattern("dd-MM-yyyy:E hh:mm:ss a");
        String mydate2 = d3.format(dtf2);
        System.out.println(mydate2);
        DateTimeFormatter dtf3 = DateTimeFormatter.ISO_TIME;
        String mydate3 = d3.format(dtf3);
        System.out.println(mydate3);
    }
}
