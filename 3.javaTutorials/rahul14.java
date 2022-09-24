public class rahul14 {
    public static void main(String[] args) {
        String name1 = "Rahul is a good boy";
        String name2 = new String("Harry");
        String name3 = "      i am trimable        ";

        System.out.println(name1);
        System.out.print(name2);
        System.out.printf("\nthe string is %s\b and %s\n", name1, name2);
        System.out.format("\tthe\\ string is %s \' and  \" %s\n", name1, name2);
        System.out.println(name1.length());
        System.out.println(name2.length());
        System.out.println(name1.toUpperCase());
        System.out.println(name2.toUpperCase());
        System.out.println(name1.toLowerCase());
        System.out.println(name2.toLowerCase());
        System.out.println(name3.trim());
        System.out.println(name1.substring(2));
        System.out.println(name1.substring(2, 4));
        System.out.println(name1.replace("o", "bcd"));
        System.out.println(name1.startsWith("rahul"));
        System.out.println(name1.endsWith("boy"));
        System.out.println(name2.equals("harry"));
        System.out.println(name2.equals("Harry"));
        System.out.println(name2.equalsIgnoreCase("Harry"));
        System.out.println(name2.equalsIgnoreCase("harry"));
        System.out.println(name1.charAt(4));
        System.out.println(name2.charAt(1));
        System.out.println(name1.indexOf("oo"));
        System.out.println(name2.indexOf("rsdf"));
        System.out.println(name2.indexOf("r", 2));

        System.out.println(name2.lastIndexOf("r"));
        System.out.println(name2.lastIndexOf("r", 1));

    }
}
