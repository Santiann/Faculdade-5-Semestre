public class Consumer implements Runnable{
    private Buffer buffer;
    private String name;

    public Consumer(Buffer buffer, int id) {
        this.buffer = buffer;
        this.name = Integer.toString(id);
    }
    @Override
    public void run() {
        try {
            while(true) {
                int value = buffer.consume();
                Thread.currentThread().setName("Numero:" + this.name);
                System.out.println("Consumidor " + Thread.currentThread().getName() + " consumiu " + value);
                Thread.sleep(2000); // Simulando o tempo de consumo
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

