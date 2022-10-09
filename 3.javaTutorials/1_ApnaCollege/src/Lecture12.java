import java.util.Scanner;

public class Lecture12 {
    public static void main(String[] args) {
        String str[] = new String[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < str.length; i++) {
            str[i] = sc.nextLine();

        }
        int totallength = 0;
        for (int i = 0; i < str.length; i++) {
            totallength = totallength + str[i].length();
        }
        System.out.println("total length is " + totallength);
        sc.close();

        String sc1 = "abcd";
        String Result = "";
        for (int i = 0; i < sc1.length(); i++) {
            if (sc1.charAt(i) == 'e') {
                Result = Result + 'i';

            } else {

                Result = Result + sc1.charAt(i);
            }
        }
        System.out.println(Result);

        // String deletion
        String mail = "Ra10011996@gmail.com";
        String username = "";
        for (int i = 0; i < mail.length(); i++) {
            if (mail.charAt(i) == '@') {
                break;

            } else {

                username = username + mail.charAt(i);
            }
        }
        System.out.println(username);

        StringBuilder str3 = new StringBuilder("xyz");
        for (int i = 0; i < str3.length(); i++) {
            if (str3.charAt(i) == 'e') {
                str3.setCharAt(i, 'i');
            }
        }
        System.out.println(str3);

        StringBuilder str4 = new StringBuilder("ra10011996@gmail.com");
        for (int i = 0; i < str4.length(); i++) {
            if (str4.charAt(i) == '@') {
                str4.delete(i, str4.length());
                break;
            }
        }
        System.out.println(str4);

    }
}
