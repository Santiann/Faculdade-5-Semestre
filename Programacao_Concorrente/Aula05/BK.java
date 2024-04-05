import java.util.concurrent.Executors;
import java.util.concurrent.ExecutorService;

public class BK {

    public  static void main(String[] args) {

        //buffer tamanho de 10, que os produtores podem produzir
        //tem 5 produtos, se ficar cheio eles vão ficar em esperar, até um consumidor consumir
        int bufferSizer = 10;
        int numProducers = 5;
        int numConsumers = 5;

        Buffer buffer = new Buffer(bufferSizer);
        //com o Pool voce gerenciar a quantidade de threads e o tamanho do buffer
        ExecutorService producerPool = Executors.newFixedThreadPool(numProducers);
        ExecutorService consumerPool = Executors.newFixedThreadPool(numConsumers);

        for (int i= 0; i < numProducers; i++) {
            producerPool.execute(new Producer(buffer,i));
        }
        for(int i = 0; i < numConsumers; i++) {
            consumerPool.execute(new Consumer(buffer,i));
        }
        //Encerra os pools após um tempo arbitrário
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        //aqui para os pools
        producerPool.shutdown();
        consumerPool.shutdown();

    }

}




//buffer respeita o valor que voce colocar
//ExecuteServices ele iniciarum para produtor e um para consumidor
//loop para produtor e consumidor