package JavaCodes;

public class Volume {
    int width;
    int height;
    int breadth;
    int volume;
    public static void main(String[] args) {
        Volume dimVolume = new Volume();
        dimVolume.width = 10;
        dimVolume.breadth = 20;
        dimVolume.height = 20;
        dimVolume.volume = dimVolume.width * dimVolume.height * dimVolume.breadth;
        System.out.println("Volume of the object is " + dimVolume.volume);
    }
}
