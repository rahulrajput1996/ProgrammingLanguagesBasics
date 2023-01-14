import java.util.ArrayDeque;
import java.util.Collections;
import java.util.LinkedList;

public class Rahul92 {
    public static void main(String[] args) {
        LinkedList<Integer> LL1 = new LinkedList<>();
        LL1.addFirst(10);
        LL1.add(11);
        LL1.addLast(20);
        LL1.add(11);
        LL1.add(11);
        LL1.offerLast(23);
        LL1.push(15);
        LL1.offer(19);
        LL1.offerFirst(4);
        LL1.offerLast(23);
        System.out.println(LL1);
        // LL1.clear();

        // Examine
        // System.out.println(LL1.getFirst());
        // System.out.println(LL1.peek());
        // System.out.println(LL1.element());
        // System.out.println(LL1.peekFirst());
        // System.out.println(LL1.peek());
        // System.out.println(LL1.getLast());
        // System.out.println(LL1.peekLast());

        // remove
        // LL1.removeFirst();
        // LL1.remove();
        // LL1.pop();

        // System.out.println(LL1.poll());
        // System.out.println(LL1.pollFirst());

        // System.out.println(LL1.removeLast());
        // System.out.println(LL1.pollLast());

        // System.out.println(LL1.removeFirstOccurrence(11));
        // System.out.println(LL1.removeLastOccurrence(23));
        Collections.sort(LL1);
        System.out.println(LL1);
        ArrayDeque<Integer> Al1 = new ArrayDeque<>();
        Al1.addFirst(10);
        Al1.addFirst(11);
        Al1.addLast(22);
        Al1.addLast(20);
        System.out.println(Al1);
    }
}
