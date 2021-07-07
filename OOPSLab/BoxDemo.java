package OOPSLab;

class Box {
    double width;
    double height;
    double breadth;
}

public class BoxDemo {
    public static void main(String[] args) {
        Box myObj = new Box();
        myObj.breadth = 20;
        myObj.height = 20;
        myObj.width = 20;

        double volume;
        volume = myObj.breadth * myObj.height * myObj.width;

        System.out.println("Volume is " + volume);
    }
}
