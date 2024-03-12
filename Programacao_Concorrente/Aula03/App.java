public class App {

    public static void main(String[] args) throws Exception {
        Utility utility = new Utility();

        new Producer(utility);

        new Consumer(utility);
    }
}