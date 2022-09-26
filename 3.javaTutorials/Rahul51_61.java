import java.util.Scanner;

class Library {
    String total[];
    int noofbooks = 0;
    String issue[];
    int noofissuebooks = 0;
    String available[];
    int noofavailablebooks = 0;
    String landuser[];
    int nooflandusers = 0;

    public Library() {
        total = new String[10];
        issue = new String[10];
        available = new String[10];
        landuser = new String[10];
    }

    public void addbook(String bookname) {
        total[noofbooks] = bookname;
        available[noofavailablebooks] = bookname;
        noofavailablebooks++;
        noofbooks++;
    }

    public void issuebook(String bookname, String user) {
        int index = 0;
        for (String element : issue) {
            if (element == null) {
                continue;
            }
            if (element.equals(bookname)) {
                System.out.println("book is already issued to" + landuser[index]);
                return;
            }
            index++;
        }

        int count = 0;
        for (String element : available) {
            if (element == null) {
                continue;
            }
            if (element.equals(bookname)) {
                System.out.println(element + " book is issued");
                addissuebook(bookname, user);
                deleteavailablebook(bookname);
                count = 1;
                break;
            }
        }

        if (count == 0) {
            System.out.println("book is not available in library");
        }

    }

    public void returnbook(String bookname, String user) {
        for (String element : available) {
            if (element == null) {
                continue;
            }
            if (element.equals(bookname)) {
                System.out.println("this book is still available in library! first issuekrao then return");
                return;
            }
        }

        int index = 0;
        int count = 0;
        for (String element : issue) {
            if (element == null) {
                index++;
                continue;
            }
            if (element.equals(bookname) && user.equals(landuser[index])) {
                deleteissuebook(bookname);
                // addonlyavailablebook(bookname);
                System.out.println("book is returned");
                count = 1;
                index++;
                break;
            } else if (element.equals(bookname) && !user.equals(landuser[index])) {
                System.out.println("book can not be return by different user");
                return;
            }
            index++;
        }

        if (count == 0) {
            System.out.println("this book was not in library then how u can return?");
        }
    }

    public void deleteavailablebook(String bookname) {
        for (int i = 0; i < available.length; i++) {
            if (available[i] == null) {
                continue;
            }
            if (available[i].equals(bookname)) {
                available[i] = null;
            }
        }
    }

    public void deleteissuebook(String bookname) {
        for (int i = 0; i < issue.length; i++) {
            if (issue[i] == null) {
                continue;
            }
            if (issue[i].equals(bookname)) {
                available[noofavailablebooks] = bookname;
                noofavailablebooks++;
                issue[i] = null;
                landuser[i] = null;
            }
        }
    }

    public void addissuebook(String bookname, String user) {
        issue[noofissuebooks] = bookname;
        landuser[nooflandusers] = user;
        noofissuebooks++;
        nooflandusers++;
    }

    public void totalbooklist() {
        System.out.println("------total book list-----");
        for (String i : total) {
            if (i == null) {
                continue;
            }
            System.out.println(i);
        }
    }

    public void issuedbooklist() {
        System.out.println("------issued book list-----");
        for (String i : issue) {
            if (i == null) {
                continue;
            }
            System.out.println(i);
        }
    }

    public void availablebooklist() {
        System.out.println("------available book list-----");
        for (String i : available) {
            if (i == null) {
                continue;
            }
            System.out.println(i);
        }
    }

    public void landuserlist() {
        System.out.println("------land users are-----");
        for (String i : landuser) {
            if (i == null) {
                continue;
            }
            System.out.println(i);
        }
    }
}

public class Rahul51_61 {
    public static void main(String[] args) {
        Library college = new Library();
        boolean choice1 = false;
        while (true) {
            Scanner sc = new Scanner(System.in);
            System.out.println(
                    "press 1 to see total book list,2 for issue book list,3 for available book list,press 4 for land user list,press 5 for add book, press 6 for issue book, press 7 for return book,press 8 for quit");
            int id = sc.nextInt();
            switch (id) {
                case 1:
                    college.totalbooklist();
                    break;
                case 2:
                    college.issuedbooklist();
                    break;
                case 3:
                    college.availablebooklist();
                    break;
                case 4:
                    college.landuserlist();
                    break;
                case 5:
                    System.out.println("enter book name which u want to add");
                    String bookname1 = sc.next();
                    college.addbook(bookname1);
                    break;
                case 6:
                    System.out.println("enter book name which u want to issue");
                    String bookname2 = sc.next();
                    System.out.println("enter your name now");
                    String user2 = sc.next();
                    college.issuebook(bookname2, user2);
                    break;
                case 7:
                    System.out.println("enter book name which u want to return");
                    String bookname3 = sc.next();
                    System.out.println("enter your name now");
                    String user3 = sc.next();
                    college.returnbook(bookname3, user3);
                    break;
                case 8:
                    sc.close();
                    choice1 = true;
                    break;
                default:
                    System.out.println("Enter correct number");
                    break;
            }
            if (choice1) {
                break;
            }
        }
    }
}
