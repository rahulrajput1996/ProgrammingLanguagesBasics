class Employee {
    private int salary;
    private String mobile;

    public void setsalary(int newsalary) {
        if (newsalary < 10000) {
            System.out.println("you are speaking a lie");
        } else {
            this.salary = newsalary;
        }
    }

    public void setmobile(String newmobile) {
        if (newmobile.length() == 10) {
            mobile = newmobile;
        } else {
            System.out.println("Give the 10 digit mobile number");
        }
    }

    public int getsalary() {
        return salary;
    }

    public String getmobile() {
        return mobile;
    }
}

public class Rahul40 {
    public static void main(String[] args) {
        Employee rahul = new Employee();
        // rahul.salary = 1000; private access modifier we can not access
        // rahul.mobile = "7060810244";

        rahul.setmobile("123");
        rahul.setsalary(10);
        // System.out.println(rahul.mobile); we can not access here private
        // System.out.println(rahul.salary);

        System.out.println(rahul.getmobile());
        System.out.println(rahul.getsalary());

        rahul.setmobile("1234590127");
        rahul.setsalary(900000);

        System.out.println(rahul.getmobile());
        System.out.println(rahul.getsalary());

    }
}
