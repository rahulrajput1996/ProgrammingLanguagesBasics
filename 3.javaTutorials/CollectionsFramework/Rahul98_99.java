import java.util.Calendar;
// import java.util.GregorianCalendar;
import java.util.TimeZone;

public class Rahul98_99 {
    public static void main(String[] args) {
        Calendar C1 = Calendar.getInstance();
        System.out.println(C1.getCalendarType());
        System.out.println(C1.getTimeZone());
        System.out.println(C1.getTimeZone().getID());
        System.out.println(C1.getTime());
        System.out.println(C1.get(Calendar.SECOND));
        System.out.println(C1.get(Calendar.MINUTE));
        System.out.println(C1.get(Calendar.DATE));
        System.out.println(C1.get(Calendar.YEAR));

        Calendar C2 = Calendar.getInstance(TimeZone.getTimeZone("Asia/Singapore"));
        System.out.println(C2.getCalendarType());
        System.out.println(C2.getTimeZone());
        System.out.println(C2.getTimeZone().getID());

        System.out.println(TimeZone.getAvailableIDs()[0]);
        System.out.println(TimeZone.getAvailableIDs()[1]);
        System.out.println(TimeZone.getAvailableIDs()[2]);
        System.out.println(TimeZone.getAvailableIDs()[3]);

        // GregorianCalendar GC1 = new GregorianCalendar();
        // System.out.println(GC1.isLeapYear(2000));

    }
}
