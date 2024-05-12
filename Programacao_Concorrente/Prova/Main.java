public class Main {
    public static void main(String[] args) {
        ProductionStation station1 = new ProductionStation(1, 5, 40);
        ProductionStation station2 = new ProductionStation(3, 5, 40);

        Thread thread1 = new Thread(station1);
        Thread thread2 = new Thread(station2);

        thread1.start();
        thread2.start();
    }
} 