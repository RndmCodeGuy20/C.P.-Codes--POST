package JavaCodes;

public class First {

    public static void main(String[] args) {
        class InnerFirst {

            int a = 10;
        }
        InnerFirst objFirst1 = new InnerFirst();
        InnerFirst objFirst2 = new InnerFirst();
        objFirst1.a = 2030;
        objFirst2.a = 2077;
        System.out.println(objFirst1.a);
        System.out.println(objFirst2.a);
    }
}