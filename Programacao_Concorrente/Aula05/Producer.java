public class Producer implements Runnable {
    //producer

    //vai colocar um intero, enquanto for verdadeiro e tiver espaço no buffer vai produzir

    private Buffer buffer;
    private String name;

    public Producer(Buffer buffer, int id) {
        this.buffer = buffer;
        this.name = Integer.toString(id);
    }

    //Aqui será realizado a produção de um número aleatório
    @Override
    public void run() {
        try {
            //Enquanto for verdadeiro, o produtor vai produzir
            while (true) {
                int value = produce();
                buffer.produce(value);
                Thread.currentThread().setName("Numero:" + this.name);
                System.out.println("Produtor " + Thread.currentThread().getName() + " produziu " + value);
                Thread.sleep(1000); // Simulando o tempo de produção
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    private int produce() {
        //Simplemete gera um número aleatório como exemplo
        return (int) (Math.random() * 10);
    }
}
