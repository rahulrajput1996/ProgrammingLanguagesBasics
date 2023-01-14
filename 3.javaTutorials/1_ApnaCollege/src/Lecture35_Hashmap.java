import java.util.*;

public class Lecture35_Hashmap {
    public static void main(String[] args) {
        HashMap<String, Integer> hs1 = new HashMap<>();
        hs1.put("rahul", 27);
        hs1.put("mohan", 25);
        hs1.put("vipin", 55);
        System.out.println(hs1);
        hs1.put("vipin", 5);
        System.out.println(hs1);
        System.out.println(hs1.get("rahul"));
        System.out.println(hs1.get("bjjahul"));
        System.out.println(hs1.containsKey("jdheh"));
        System.out.println(hs1.containsKey("vipin"));
        System.out.println(hs1.containsValue(10));
        System.out.println(hs1.containsValue(5));
        System.out.println(hs1.size());
        HashMap<String, Integer> hs2 = new HashMap<>();
        hs2.put("vihu", 7);
        hs2.put("khushi", 11);
        hs2.putAll(hs1);
        System.out.println(hs2);

        HashMap<String, Integer> hs3 = new HashMap<>(hs2);
        System.out.println(hs3);
        hs3.remove("mohan");
        System.out.println(hs3);
        hs3.clear();
        System.out.println(hs3);
        System.out.println(hs3.isEmpty());

        System.out.println(hs2.keySet());
        System.out.println(hs2.entrySet());

        // iterating in loop
        Set<String> s1 = hs2.keySet();
        for (String key : s1) {
            System.out.println(key);
            System.out.println(hs2.get(key));
        }

        for (Map.Entry<String, Integer> e : hs2.entrySet()) {
            System.out.println(e.getKey());
            System.out.println(e.getValue());
        }

    }
}
