import java.util.*;

public class Lecture13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int num[] = new int[5];
        // for (int i = 0; i < num.length; i++) {
        // num[i] = sc.nextInt();
        // }
        // for (int i = 0; i < num.length; i++) {
        // System.out.println(num[i]);
        // }

        StringBuilder mystring = new StringBuilder("yes! hello ");
        StringBuilder mystring2 = new StringBuilder("yes! hello ");
        mystring.append("rahul is a good boy");
        System.out.println(mystring);
        mystring.setCharAt(1, 'p');
        System.out.println(mystring);
        System.out.println(mystring.charAt(1));
        System.out.println(mystring.length());
        mystring.insert(0, "alas! bye");
        System.out.println(mystring);
        mystring.delete(2, 7);
        System.out.println(mystring);
        System.out.println(mystring.compareTo(mystring2));
        mystring.reverse();
        System.out.println(mystring);
        mystring.toString();
        mystring2.toString();
        System.out.println(mystring.isEmpty());
        mystring.replace(2, 6, "no");
        System.out.println(mystring);

        sc.close();

        String str1 = "tarak mehta";
        String str2 = "tarak mehta";
        System.out.println(str1.compareTo(str2));
        if (str1.compareTo(str2) == 0) {
            System.out.println("these are equal");
        } else {
            System.out.println("these are not equal");
        }
        String name1 = "harry";
        System.out.println(name1.equals("harry"));
    }
}
